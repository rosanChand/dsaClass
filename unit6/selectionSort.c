// Selection sort 
#include<stdio.h> 
#define MAX 100 
int a[MAX], n; 
void selection( ); 
int smallest(int k); 
int main() 
{ 
	 int i; 
	 printf("Enter the no. of data in array:"); 
	 scanf("%d",&n); 
	 printf("Enter %d number of array elements: \n",n); 
	 for(i=0;i<n;i++) 
	 { 
	  	scanf("%d",&a[i]); 
	 } 
	 selection(); 
	 printf("Sorted array: "); 
	 for(i=0;i<n;i++) 
	 { 
	  	printf("%d \t",a[i]); 
	 } 
} 

void selection() 
{ 
	 int i, temp, pos; 
	 for(i=0; i<=n-1;i++) 
	 { 
		  printf("Pass %d: \n",i); 
		  pos= smallest(i); 
		  printf("Smallest element is found at %d so swap a[%d]=%d element with a[%d]=%d element\n",pos,i, a[i], pos, a[pos]); 
		  temp=a[i]; 
		  a[i]=a[pos]; 
		  a[pos]=temp; 
	 } 
} 
int smallest(int i) 
{ 
	 int small=a[i],pos=i,j; 
	 for(j=i+1; j<=n-1;j++) 
	 { 
		  printf(" smallest %d is compared with %d \n",small, a[j]); 
		  if(small>a[j]) 
			{ 
			   small=a[j]; 
			   pos=j; 
		  	} 
	 } 
	return pos; 
}
