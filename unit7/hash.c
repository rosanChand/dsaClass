#include<stdio.h> 
#define MAX 100 


int main() 
{ 
	int i,j,temp, n, a[MAX], key; 
	int h, indexpos, indexpos1;//for hashtablesize
	//int low = 0;

	printf("Enter the no. of data in array:"); 
	scanf("%d",&n); 

	printf("Enter %d number of array elements: \n",n); 
	for(i=0;i<n;i++) 
	{ 
	  	scanf("%d",&a[i]); 
	}

	
	//for hashtable
	printf("Enter the no. of data in hash table array:"); 
	scanf("%d",&h); 
	printf("Enter the value to search: "); 
	scanf("%d",&key); 
	auto int createHashTable(int val, int probe, int h);
	int tempprobe = 0,tempprobe2 = 0;
	int hash[h];
	for (i = 0; i< h; i++)
	{
		hash[i] = -1;
	}
	int value;
	for (i = 0; i < n ;i++)
	{   value = a[i];
		createHashTable(value,0, h);
		if (key == a[i])
		{
			indexpos1 = i;
			  	
		} 
	}
	//create function
	int createHashTable(int val, int probe, int h)
	{
	
		int i;
		int temp;
		temp = ((val % h + probe) % h);
		if (hash[temp] == -1)
		{	
			hash[temp] = val;
			
		}
		else if(hash[temp] != -1)
		{

			tempprobe++; 
			createHashTable(val,tempprobe,h);	
		}
	}
	printf("\n Hash Array is : ");
	for (i = 0; i< h; i++)
	{
		printf("%d ", hash[i]);
	}
	//after creating hash table
	
	//to search
		for (i = 0; i < n ;i++)
	{   value = a[i];
		createHashTable(value,0, h);
	}
	//search function
	int search(int key, int probe, int h)
	{
	
		int i;
		int temp;
		temp = ((key % h + probe) % h);
		if(hash[temp] == key)
		{
			return temp;
			
		}
		
		else
		{

			tempprobe2++; 
			search(key,tempprobe2,h);	
		}
	}
	int search_key = search(key, 0, h);	
	if (key == hash[search_key])
	{
		indexpos = search_key;
	}
	printf("\n\n Given Array is : ");
	for(i=0;i<n;i++) 
	{ 
		printf("%d ",a[i]);
	}	
	printf("\n\n %d is at index position %d in the Hash array.", key,indexpos);
	printf("\n\n %d is at index position %d in the Given array.", key,indexpos1);
	return 0;
}

