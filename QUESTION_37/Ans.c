// Search an element in a matrix
#include<stdio.h>
#include <stdlib.h>
#include<stdbool.h>

bool Search(int col,int Arr[][col],int row,int no)
{
	bool flag = false;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			if(no == Arr[i][j])
			{
				flag = true;
				break;
			}
		}
	}
	return flag;
}

int main()
{
	
	int row = 0,col = 0;
	printf("Enter the Rows and Columns : \n");
	scanf("%d%d",&row,&col);

	int Arr[row][col];

	printf("Enter the Elements : \n");
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			scanf("%d",&Arr[i][j]);
		}
	}
	int no = 0;
	printf("Enter the Element that you want to search : \n");
	scanf("%d",&no);

	bool bRet = Search(row,Arr,col,no);

	if(bRet == true)
		printf("Element is there\n");
	else
		printf("Element is not there\n");
	return 0;
}
