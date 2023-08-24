
//Linear Probing
#include<stdio.h> 
#define MAX 100 


int main() 
{ 
	int i,n, a[MAX], key; 
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
	printf("\n\n Given Array is : ");
	for(i=0;i<n;i++) 
	{ 
		printf("%d ",a[i]);
	}
	//after creating hash table
	
	//to search
	//search function
	int search(int key, int probe, int h)
	{
	
		int i;
		int temp;
		temp = ((key % h + probe) % h);
//		printf("\t%d",temp);
		if(hash[temp] == key)
		{
			return temp;
			
		}
		
		else
		{
			if (tempprobe2 < h-1)
			{
			tempprobe2++; 
			search(key,tempprobe2,h);	
			}
			else
				return -1;
		}
	}
	int search_key = search(key, 0, h);	
//	printf("\n\n%d",search_key);
	if (key == hash[search_key] && search_key != -1)
	{
		indexpos = search_key;
		printf("\n\n %d is at index position %d in the Hash array.", key,indexpos);
		printf("\n\n %d is at index position %d in the Given array.", key,indexpos1);
	}
	else
	{
		printf("\n\n %d is not present in the Hash array.", key);
		printf("\n\n %d is not present in the Given array.", key);
	}
	
	
	return 0;
}

