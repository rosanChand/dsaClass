// Shell sort 
#include<stdio.h> 
#define MAX 100 
int A[MAX], n; 
void shell( ); 
void display(); 
int main() 
{ 
	int i; 
	printf("Enter the no. of data in array:"); 
	scanf("%d",&n); 
	printf("Enter %d number of array elements: \n",n); 
	for(i=0;i<n;i++) 
	{ 
	scanf("%d",&A[i]);
	}
	shell(); 
}
void shell() 
{ 
	int gap, i, j,temp; 
	for(gap=n/2;  gap>0;  gap =gap/ 2)  
	{  
		printf("\n\n For Gap %d: ",gap); 
		for(j = gap;  j<n;  j++)  
		{  
			temp = A[j];  
			if(A[j-gap] <= temp) 
	    	{ 
	     		printf("\nelement A[%d] = %d and A[%d] = %d is compared and no exchange \n",j,A[j], j-gap,A[j-gap]); 
	     		display(); 
	   		} 
	   		else 
	   		{ 
	    		for(i=j; ((i>=gap) && (A[i-gap] > temp)); i=i-gap) 
	    		{  
	     			printf("\nelement A[%d] = %d and A[%d] = %d is compared and exchanged \n",i,A[i], (i-gap),A[i-gap]); 
	    			A[i] = A[i-gap];  
	     			A[i-gap]=temp; 
	     			display(); 
	    		} 
	    		A[i] = temp;  
	   		} 
	  	}  
	   
	}  
} 
void display() 
{ 
	int i; 
	printf("Resulting array: "); 
	for(i=0;i<n;i++) 
	{ 
	  	printf("%d \t",A[i]); 
	} 
}
