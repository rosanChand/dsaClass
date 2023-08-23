#include<stdio.h> 
#define MAX 100 


int main() 
{ 
	int i,j,temp, n, a[MAX], key; 
	int h, indexpos;//for hashtablesize
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
		printf("%d\n", hash[i]);
	}
	int value;
	for (i = 0; i < n ;i++)
	{   value = a[i];
		createHashTable(value,0, h);
	}
	
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
	printf("Hashtable is : ");
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
	
	int search(int key, int probe, int h)
	{
	
		int i;
		int temp;
		temp = ((key % h + probe) % h);
		if(hash[temp] == key)
		{
			printf("\n\n%d\n\n",temp);
			return temp;
			
		}
		
		else
		{

			tempprobe2++; 
			search(key,tempprobe2,h);	
		}
	}
		int search_key = search(key, 0, h);
		printf("\n %d", search_key);	
			if (key == hash[search_key])
			{
				indexpos = search_key;
			}
		
	printf("\n %d is at index position %d in the hash array.", key,indexpos);
	return 0;
}

