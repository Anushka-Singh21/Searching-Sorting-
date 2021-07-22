#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int binary_search(int arr[],int n,int key)
{
   int s=0, e=n;
   while(s<n)
   {
       int mid=s+e/2;
       if (arr[mid]==key)
       return mid;
       else if(arr[mid]>key)
       return e=mid-1;
       else if(arr[mid]<key)
       return s=mid+1;
   }
   return -1;
 
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
    int key;
    cin>>key;
    cout<<binary_search(arr,n,key);
    return 0;
}
   
