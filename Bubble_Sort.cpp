#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void swap(unsigned long long  int *var1, unsigned long long  int *var2)
{
    unsigned long long  int temp;
    temp = *var1;
    *var1 = *var2;
    *var2 = temp;
}

void bubble_sort(int n, unsigned long long  int arr[])
{

    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                swap(&arr[j+1],&arr[j]);
            }
        }
    }
}
int main()
{
    int n;
    cout<<"Enter the size of the array ";
    cin>>n;
    unsigned long long int arr[n];
    cout<<"Enter the elements of the array "<<"\n";
    for(int i=0;i<n;i++)
    {
 cin>>arr[i];
    }
    bubble_sort(n, arr);
    cout<<"After Bubble sort "<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}