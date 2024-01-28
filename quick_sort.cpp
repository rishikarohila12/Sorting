#include<iostream>
using namespace std;
int partition(int arr[],int si,int ei){
    int pivotElement=arr[si];
    int count=0;
    for(int i=si+1;i<=ei;i++)
    {
        if(arr[i]<=pivotElement)
        count++;
    }
    int pivotIdx=si+count;
    swap(arr[si],arr[pivotIdx]);
    int i=si;
    int j=ei;
    while(i<pivotIdx&&j>pivotIdx)
    {
        if(arr[i]<=pivotElement)i++;
        else if(arr[j]>pivotElement)j--;
        else if(arr[i]>pivotElement&&arr[j]<=pivotElement){  swap(arr[i],arr[j]);
        i++;
        j--;
        }

    }
    return pivotIdx;
}
void quicksort(int arr[],int si,int ei)
{
    if(si>=ei)return;
    int pi=partition(arr,si,ei);
    quicksort(arr,si,pi-1);
    quicksort(arr,pi+1,ei);

}
int main()
{
    int arr[]={98,7,-5,28,13,78,-2};
    int n=sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    quicksort(arr,0,n-1);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}