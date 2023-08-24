//Linear Search
#include<stdio.h> 
#define MAX 100 
LinearSearch(int A[],int size,int key);
int main() 
{ 
	int i,j,temp, n, a[MAX], key; 
	int indexpos; 
	printf("Enter the no. of data in array:"); 
	scanf("%d",&n); 
	printf("Enter %d number of array elements: \n",n); 
	for(i=0;i<n;i++) 
	{ 
	  	scanf("%d",&a[i]); 
	}
	printf("\n Enter the key to search: ");
	scanf("%d", &key); 
	indexpos = LinearSearch(a, n, key);
	if (indexpos != -1)
	{
			
		printf("%d is at index position %d in the given array.", key,indexpos);
	}
	else
	{
			printf("%d is not in the given array.", key);
	}
	return 0;
}
LinearSearch(int A[],int size,int key)
{
	int i;
	for(i=0; i<size; i++)
	{
		if(A[i] == key)
 		return i;
	}
	return -1;
}
	
