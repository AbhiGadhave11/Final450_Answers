// Minimize the maximum difference between heights.
#include<iostream>
#include <bits/stdc++.h>
using namespace std;

int max(int a,int b)
{
	if(a > b)
		return a;
	else
		return b;
}

int min(int a,int b)
{
	if(a < b)
		return a;
	else
		return b;
}

int Minimize_the_height(int Arr[],int size,int k)
{
	sort(Arr,Arr+size);
	int maxdiff = Arr[size-1] - Arr[0];
	int maxi = Arr[size-1],mini = Arr[0];
	
	for(int i=1;i<size;i++)
		{
			mini = min(Arr[0]+k , Arr[i]-k); 
                                                
        	maxi = max(Arr[i-1]+k , Arr[size-1]-k); 
                                                       
        	maxdiff = min(maxdiff, maxi - mini);
    	}
  	return maxdiff;
}

int main()
{
	int *ptr = NULL;
	int size = 0;
	cout<<"Enter the size\n";
	cin>>size;
	ptr = new int[size];
	cout<<"Enter the Elements : ";
	for(int i=0;i<size;i++)
	{
		cin>>ptr[i];
	}
	int k = 0;
	cout<<"Enter the value of k : ";
	cin>>k;
	int iRet = Minimize_the_height(ptr,size,k);

	cout<<"Maximum difference is : "<<iRet<<"\n";
	return 0;
}
