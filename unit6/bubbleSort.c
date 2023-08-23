// Bubble sort 
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
	 for(i=0;i<=n-1;i++) 
	 { 
	  	printf("\n pass %d:\n ",i); 
	  	for(j=1;j<=n-1-i;j++) 
	  	{ 
	   		if(a[j-1]>a[j]) 
	   		{ 
	    		printf("Here, a[%d] = %d is greater than a[%d] =  %d so swapping is done!\n",j-1,a[j-1],j,a[j]); 
	    		temp=a[j-1]; 
	    		a[j-1]=a[j]; 
	    		a[j]=temp; 
	   		} 
	   		else 
		   { 
		    	printf("Here, a[%d] = %d is not greater than a[%d] = %d so no swapping is done!\n",j-1,a[j-1],j,a[j]); 
		   } 
	    }	 
	  	printf("Sorted array after %d th pass: ",i); 
	  	for(j=0;j<n;j++) 
	  	{ 
	   		printf("%d \t",a[j]); 
	  	} 
	   
	 } 
	 printf("\nSorted array: "); 
	 for(i=0;i<n;i++) 
	 { 
	  	printf("%d \t",a[i]); 
	 } 
} 
