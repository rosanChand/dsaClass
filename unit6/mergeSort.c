//Merge sort 
#include<stdio.h> 
#define MAX 100 
int a[MAX], n; 
void mergesort(int, int); 
void merge (int, int, int); 
int main() 
{ 
	int i,n; 
	printf("Enter the array size: "); 
	scanf("%d",&n); 
	printf("Enter the data elements: \n"); 
	for(i=0;i<n;i++) 
	{ 
		scanf("%d",&a[i]); 
	} 
	mergesort(0, n-1); 
	printf("Sorted array: "); 
	for(i=0;i<n;i++) 
	{ 
		printf("%d \t",a[i]); 
	} 
} 
void mergesort(int l, int r) 
{ 
	int m; 
	if(l<r) 
	{ 
	  m=(l+r)/2; 
	  mergesort(l,m); 
	  mergesort(m+1,r); 
	  merge(l,m,r); 
	} 
} 
void merge(int l, int m, int r) 
{ 
	int i =l, j=m+1,k, Temp[MAX]; 
	for(k=l;k<=r;k++) 
	{ 
		if(i>m) 
		{ 
	   		Temp[k]=a[j]; 
	   		j++; 
	  	} 
	  	else if(j>r) 
	  	{ 
	   		Temp[k]=a[i]; 
	   		i++; 
	  	} 
	  	else if(a[i]<a[j]) 
	  	{ 
	   		Temp[k]=a[i]; 
	   		i++; 
	  	} 
	  	else 
	  	{ 
	   	Temp[k]=a[j]; 
	   	j++; 
	  	} 
	} 
	for(k=l;k<=r;k++) 
	{ 
	  a[k]=Temp[k]; 
	} 
} 
