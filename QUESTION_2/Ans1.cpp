/*Find Maximum and minimum Element in array*/

#include<iostream>
using namespace std;

int MAX(int Arr[],int size)
{
	int iBig = Arr[0];
	for(int i=0;i<size;i++)
	{
		if(Arr[i] > iBig)
		{
			iBig = Arr[i];
		}
	}
	return iBig;
}

int MIN(int Arr[],int size)
{
	int iSmall = Arr[0];
	for(int i=0;i<size;i++)
	{
		if(Arr[i] < iSmall)
		{
			iSmall = Arr[i];
		}
	}
	return iSmall;
}

int main()
{
	int no = 0;
	int *ptr = NULL;
	cout<<"Enter the size of array : \n";
	cin>>no;
	ptr = new int[no];
	cout<<"Enter the Elements : \n";
	for(int i=0;i<no;i++)
	{
		cin>>ptr[i];
	}

	int iRet = MAX(ptr,no);
	int iRet1 = MIN(ptr,no);

	cout<<"Maximum Element is : "<<iRet<<"\n";
	cout<<"Minimum Element is : "<<iRet1<<"\n";


	return 0;
}
