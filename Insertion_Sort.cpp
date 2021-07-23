#include<iostream>
using namespace std;

int insertion_sort(int n,int arr[])
{
  for(int i=0;i<n;i++)
  {
      int current=arr[i];
      int j=i-1;
      while(arr[j]>current && j>=0)
      {
          arr[j+1]=arr[j];
          j--;
      }
      arr[j+1]=current;
  }
  return 0;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array"<<"\n";
    for(int i=0;i<n;i++)
    {
 cin>>arr[i];
    }
    insertion_sort(n,arr);
    cout<<"After Insertion sort "<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

}