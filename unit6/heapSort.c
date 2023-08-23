#include<stdio.h> 
#include <time.h> 
#include<stdlib.h> 
void Heapify(int Heap[],int i); 
void BuildHeap(int Heap[]) 
{ 
	int i,n; 
	n=Heap[0]; 
	for(i=n/2;i>=1;i--) 
	Heapify(Heap,i); 
} 

void Heapify(int Heap[],int i) 
{ 
	int j,temp,n,k=1; 
	n=Heap[0]; 
	while(2*i<=n && k==1) 
	{ 
		j=2*i; 
		if(j+1<=n && Heap[j+1] > Heap[j])
		{ 
			j=j+1;
		}
		if( Heap[j] < Heap[i]) 
		{
			k=0;
		}
		else 
		{ 
			temp=Heap[i]; 
			Heap[i]=Heap[j]; 
			Heap[j]=temp; 
			i=j; 
		} 
	}
} 
void main() 
{ 
	int Heap[50],n,temp,last,i; 
	printf("Enter the size of the array:\n"); 
	scanf("%d",&n); 
	printf("\n\nArray Before Heap Sort\n\n"); 
	for(i=1; i<=n;i++) 
	{ 
		scanf("%d",&Heap[i]); 
	} 
	Heap[0]=n;  // placing array size at the array index position zero 
	BuildHeap(Heap); 
	while(Heap[0] > 1) 
	{ 
		last=Heap[0]; 
		temp=Heap[1]; 
		Heap[1]=Heap[last]; 
		Heap[last]=temp; 
		Heap[0]--; 
		Heapify(Heap,1); 
	} 
	printf("\n\nArray After Heap Sort\n\n"); 
	for(i=1;i<=n;i++) 
	{
		printf("%d \t",Heap[i]);
	}
} 
