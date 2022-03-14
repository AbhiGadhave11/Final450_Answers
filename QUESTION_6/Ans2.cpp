//Find the union and intersection of two array

#include <iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> Union(int Arr1[],int n1,int Arr2[],int n2)
{
    vector<int>vobj;
    int i=0,j=0,k=0;
    while((i<n1) && (i<n1))
    {
        if(Arr1[i]>=Arr2[j])
        {
            vobj.push_back(Arr2[j]);
            j++;
        }
        else
        {
            vobj.push_back(Arr1[i]);
            i++;
        }
    }
    while(i<n1)
    {
        vobj.push_back(Arr1[i]);
        i++;
    }
     while(j<n2)
    {
        vobj.push_back(Arr2[j]);
        j++;
    }
    return vobj;
    
}

vector<int> Intersection(int Arr1[],int n1,int Arr2[],int n2)
{
    vector<int>vobj;
    int i=0,j=0,k=0;
    while((i<n1) && (i<n1))
    {
        if(Arr1[i] > Arr2[j])
        {
            j++;
        }
        else if(Arr1[i] < Arr2[j]) 
        {
           i++;
        }
        else
        {
            vobj.push_back(Arr1[i]);
        }
    }
   
    return vobj;
}

int main() 
{
    int *Arr1 = NULL;
    int *Arr2 = NULL;
    int n1 = 0,n2 = 0;
    cout<<"Enter the size of first array : \n";
    cin>>n1;
    cout<<"Enter the size of Second Array : \n";
    cin>>n2;
    Arr1 = new int[n1];
    Arr2 = new int[n2];
    cout<<"Enter the first array elements : \n";
    for(int i=0;i<n1;i++)
    {
        cin>>Arr1[i];
    }
    cout<<"Enter the Second Array elements : \n";
    for(int i=0;i<n2;i++)
    {
        cin>>Arr2[i];
    }   
    vector<int>vobj;
    vobj =  Union(Arr1,n1,Arr2,n2);
    cout<<"Union Array : \n";
    for(int i=0;i<vobj.size();i++)
    {
        cout<<vobj[i]<<" ";
    }
    cout<<"\n";
    vector<int>v;
    v = Intersection(Arr1,n1,Arr2,n2);
    cout<<"Intersection Array : \n";
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<"\n";
    
    return 0;
}
