#include<iostream>
using namespace std;
int traverse(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int binarySearch(int arr[],int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(arr[j]>arr[j+1])
            swap(arr[j],arr[j+1]);
        }
    }
}
int main()
{
    int arr[]={5,4,3,2,1},n;
    n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting: ";
    traverse(arr,n);
    cout<<"After Sorting: ";
    binarySearch(arr,n);
    traverse(arr,n);


}