//Quick Sort 
#include<stdio.h> 
#define MAX 100 
int a[MAX], n; 
void quicksort(int [], int, int); 
int partition (int [],int, int); 
int main() 
{ 
	int i,n=0; 
	printf("Enter the array size: "); 
	scanf("%d",&n); 
	printf("Enter the data elements: \n"); 
	for(i=0;i<n;i++) 
	{ 
		scanf("%d",&a[i]); 
	} 
	quicksort(a, 0, n-1); 
	printf("Sorted array: "); 
	for(i=0;i<n;i++) 
	{ 
		printf("%d \t",a[i]); 
	} 
}
void quicksort(int a[],int i, int j) 
{ 
	int p; 
	if(i<j) 
	{ 
		p=partition(a,i,j); 
	 	quicksort(a,i,p-1); 
	  	quicksort(a,p+1,j); 
	} 
} 
int partition(int a[], int i, int j) 
{ 
	int l=i, r=j, pivot=a[i], Temp; 
	while(l<r) 
	{ 
	  	while(a[l]<=pivot && l<=j) 
	  	{ 
	   		l++; 
	  	} 
	  	while(a[r]>pivot) 
	  	{ 
	   		r--; 
	  	} 
	  	if(l<r) 
	  	{ 
	   		Temp=a[l]; 
	   		a[l]=a[r]; 
	   		a[r]=Temp; 
	  	}  
	} 
	Temp=a[r]; 
	a[r]=a[i]; //pivot ==a[i] so we use a[i] instead of pivot 
	a[i]=Temp;  
	return r; 
}
