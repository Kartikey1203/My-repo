#include <iostream>
#include <vector>
#include<bits/stdc++.h>
using namespace std;

int getMax(int arr[],int n)
{
    int Max=INT_MIN;
   for(int i=0;i<n;i++)
   {
       if(arr[i]>Max)
       {
           Max=arr[i];
       }
   }
    return Max;
}

int getMin(int arr[],int n)
{
    int Min=INT_MAX;
    for(int i=0;i<n;i++)
   {
       if(arr[i]<Min)
       {
           Min=arr[i];
       }
   }
    return Min;
}

int main()
{
    int size; cin>>size;
    int arr[1000];
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    
    cout<<"Max is "<<getMax(arr,size)<<endl;
    cout<<"Min is "<<getMin(arr,size)<<endl;
}
