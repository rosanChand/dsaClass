//BInary Search
#include<stdio.h> 
#define MAX 100 
BubbleSort(int a[],int n);
BinarySearch(int A[],int low,int high,int key);
int main() 
{ 
	int i,j,temp, n, a[MAX], key; 
	//int low = 0;
	int indexpos; 
	printf("Enter the no. of data in array:"); 
	scanf("%d",&n); 
	printf("Enter %d number of array elements(preferred sorted array): \n",n); 
	for(i=0;i<n;i++) 
	{ 
	  	scanf("%d",&a[i]); 
	}
	BubbleSort(a,n);
	printf("Sorted array is: ");
	for (i = 0; i< n; i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
	printf("\n Enter the key to search: ");
	scanf("%d", &key); 
	indexpos = BinarySearch(a, 0, n, key);
	if (indexpos != -1)
	{
	
	printf("\n %d is at index position %d in the final sorted array.", key,indexpos);
	}
	else
	{
		printf("%d is not in the given array.",key);
	}
	return 0;
}
 
BubbleSort(int a[],int n)
{
	int i,j;
	for(i=0;i<=n-1;i++) 
	 {  
	  	for(j=1;j<=n-1-i;j++) 
	  	{ 
	   		if(a[j-1]>a[j]) 
	   		{  
	    		int temp=a[j-1]; 
	    		a[j-1]=a[j]; 
	    		a[j]=temp; 
	   		} 
	   		else 
		   	{ 
		    	continue;
		   	} 
	    }	 	
	}
}
BinarySearch(int A[],int low,int high,int key)
{ 
	int mid;
	if(high == low)
	{ 
		if(key == A[low]) 
			return low; 
		else
			return -1; 
	} 
	else
	{
		mid = (low + high) /2 ;
		if(key == A[mid])
		{
		 	return (mid);
		}
		else if (key < A[mid])
		{
			return BinarySearch(A, low, mid-1, key) ;
		}
		else
		{
			return BinarySearch(A, mid+1, high, key);	
		}
	}
}
