//Implement merge sort,
#include<bits/stdc++.h>
using namespace std;

void merge(int *arr,int low,int mid,int high)
{
    int i = low;
	int j = mid+1;
	int k = 0;
    int *temp=new int[high+1];

    while(i<=mid && j<=high)
    {
        if(arr[i]<arr[j])
            temp[k++]=arr[i++];
        else
            temp[k++]=arr[j++];

    }

    while(i<=mid)
    {
        temp[k++]=arr[i++];
    }

    while(j<=high)
    {
        temp[k++]=arr[j++];
    }

   k=0;
    for(int i=low;i<=high;i++)
        arr[i]=temp[k++];
}

void merge_sort(int *arr,int low,int high)
{
    if(low>=high)
        return;
    int mid=low+(high-low)/2;
    merge_sort(arr,low,mid);
    merge_sort(arr,mid+1,high);
    merge(arr,low,mid,high);
}

int main(){
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    merge_sort(arr,0,n-1);

    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
}