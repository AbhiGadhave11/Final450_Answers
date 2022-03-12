/*Write a program to reverse an array */
/*This is the simple Solution of reverse the array*/

#include<stdio.h>
#include<stdlib.h>

void Reverse(int Arr[],int size)
{
	int *start = Arr;
	int *end = &(Arr[size-1]);
	while(start<end)
	{
		int temp = *start;
	   *start = *end;
	  *end = temp;
		start++;
		end--;
	}
	printf("Reverse Array is : \n");
	for(int i=0;i<size;i++)
	{
		printf("%d ",Arr[i]);
	}
	printf("\n");
}

int main()
{
	int no = 0;
	int *ptr = NULL;
	printf("Enter the size of an array : \n");
	scanf("%d",&no);
	ptr = (int*)malloc(sizeof(int)*no);
	printf("Enter the Elements : \n");
	for(int i=0;i<no;i++)
	{
		scanf("%d",&ptr[i]);
	}

	Reverse(ptr,no);


	return 0;
}
