// Given an array, rotate the array by one position in clock-wise direction

#include<iostream>
using namespace std;

void Swap(int *a,int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

void Rotate(int Arr[],int size)
{
	int i=0;
	for(i=n-2;i>=0;i--)
	{
		Swap(&Arr[i],&Arr[i+1]);
	}
}

int main()
{
	int *ptr = NULL;
	int size = 0;
	cout<<"Enter the size : \n";
	cin>>size;
	ptr = new int[size];
	cout<<"Enter the Elements in the array \n";
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}

	Rotate(ptr,size);

	return 0;
}
