#include<stdio.h>
#include<stdlib.h>


int main()
{
	int i;
	auto int createHashTable(int val, int probe, int h);
	int tempprobe =0;
	int a[] = {72,27,36,24,63,81,92};
	int b[10];
	for (i = 0; i< 10; i++)
	{
		b[i] = -1;
		printf("%d", b[i]);
	}

		
	int value;
	for (i = 0; i< 7 ;i++)
	{   value = a[i];
    	printf("%d", value);
    	printf("%d\n", a[i]);
		createHashTable(value,0, 10);
		value++;
	}
	
	int createHashTable(int val, int probe, int h)
	{
	
		int i;
		int temp;
		temp = ((val % h + probe) % h);
		printf("%d\n",temp);
		if (b[temp] == -1)
		{	
			b[temp] = val;
			printf("\n %d",val);
			printf("\n \n %d",b[temp]);
			printf("\n");
		}
		else if(b[temp] != -1)
		{

			tempprobe++; 
			createHashTable(val,tempprobe,h);	
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("\n%d", b[i]);
	}
	return 0;
}



