#include<iostream>
using namespace std;
#define INT_MAX 2147483647;
int traverse(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int selectionSort(int arr[],int n)
{
   for(int i=0;i<n-1;i++)
   {
    int min=INT_MAX;
    int mindx=-1;
    for(int j=i;j<n;j++)
    {
        if(arr[j]<min)
        {
            min=arr[j];
            mindx=j;
        }
    }
    swap(arr[i],arr[mindx]);
   }
    
}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting: ";
    traverse(arr,n);
    cout<<"After Sorting: ";
    selectionSort(arr,n);
    traverse(arr,n);
}