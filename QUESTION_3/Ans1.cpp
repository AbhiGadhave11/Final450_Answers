//Find Kth maximum and minimum element in an array

#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Max(int Arr[],int size,int k)
{
	if(k > size)
	{
		return -1;
	}
	 sort(Arr, Arr + size, greater<int>());
	 return Arr[k-1];
}
int Min(int Arr[],int size,int k)
{
	if(k > size)
	{
		return -1;
	}
	sort(Arr,Arr+size);
	return Arr[k-1];
}

int main()
{
	int *ptr = NULL;
	int size = 0;
	printf("Enter the size of array \n");
	cin>>size;
	ptr = new int[size];
	cout<<"Enter the Elements \n";
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	int k = 0;
	cout<<"Enter the Value of K \n";
	cin>>k;
	int iRet = Min(ptr,size,k);
	int iRet1 = Max(ptr,size,k);
	cout<<"Minimum Element is : "<<iRet<<"\n";
	cout<<"Maximum Element is : "<<iRet1<<"\n";

	return 0;
}

// The limitation of these code is only distinct element should be present in a given array. 
// To avoid these limitation we can create another solution in these folder check it!!
