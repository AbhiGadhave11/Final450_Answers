// Given an array which consists of 0,1,2 . Sort the array without using any sorting algorithm
// Worst case time complexity solution

#include<stdio.h>
#include<stdlib.h>

void SortXA(int Arr[],int size)
{
	int One = 0,Two = 0,Zero = 0;
	for(int i=0;i<size;i++)
	{
		if(Arr[i] == 0)
		{
			Zero++;
		}
		if(Arr[i] == 1)
		{
			One++;
		}
		if(Arr[i] == 2)
		{
			Two++;
		}

	}
	
	for(int i=0;i<size;i++)
	{
		if(Zero > 0)
		{
			Arr[i] = 0;
			Zero--;
			continue;
		}
		if(One > 0)
		{
			Arr[i] = 1;
			One--;
			continue;
		}
		if(Two > 0)
		{
			Arr[i] = 2;
			Two--;
			continue;
		}
	}
	printf("Sorted Elements are : \n");
	for(int i=0;i<size;i++)
	{
		printf("%d ",Arr[i]);
	}
	printf("\n");
}

int main()
{
	printf("Enter the Size : \n");
	int size = 0,i = 0;
	scanf("%d",&size);
	int *ptr = NULL;
	ptr = (int *)malloc(sizeof(int)*size);

	printf("Enter the Elements : \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&ptr[i]);
	}
	/*printf("Elements are : \n");
	for(i=0;i<size;i++)
	{
		printf("%d ",ptr[i]);
	}*/

	
	SortXA(ptr,size);
	free(ptr);

	
	return 0;
}
