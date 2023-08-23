// Insertion sort 
#include<stdio.h> 
#define MAX 100 
int main() 
{ 
	int i,j,temp, n, a[MAX]; 
	printf("Enter the no. of data in array:"); 
	scanf("%d",&n); 
	printf("Enter %d number of array elements: \n",n); 
	for(i=0;i<n;i++) 
	{ 
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n-1;i++) 
	{ 
		printf("Pass %d:\n",i); 
		temp=a[i]; 
		j=i-1; 
		while(temp<=a[j]&&j>=0) 
		{ 
			printf("%d is less or equal to a[%d]=%d so %d is shifted to one position right \n",temp,j,a[j],a[j],j+1); 
			a[j+1]=a[j]; 
			j=j-1; 
		} 
		a[j+1]=temp; 
		printf("Finally %d is placed at index: %d \n",temp, j+1); 
	} 
	printf("Sorted array: "); 
	for(i=0;i<n;i++) 
	{ 
	printf("%d \t",a[i]); 
	} 
}
