#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int selection_sort(int arr[],int n)
{
   for(int i=0;i<n-1;i++)
   {
       for(int j=i+1;j<n;j++)
       {
         if(arr[j]<arr[i])
         {
             int temp=arr[j];
             arr[j]=arr[i];
             arr[i]=temp;
         }
       }
   }
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   }
  cout<<endl;
  return 0;
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<selection_sort(arr,n);
}
   
