#include<iostream>
using namespace std;
int traverse(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int insertionSort(int arr[],int n)
{
    for(int i=1;i<n;i++)
    {
        int j=i;
        while(j>=1)
        {
            if(arr[j]<arr[j-1])
            {
                swap(arr[j],arr[j-1]);
                j--;
            }
            else break;
        }
    }


}
int main()
{
    int arr[]={9,8,7,6,5,4,3,2,1};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<"Before Sorting: ";
    traverse(arr,n);
    cout<<"After Sorting: ";
    insertionSort(arr,n);
    traverse(arr,n);

}