// Count Inversions of an array 
#include<bits/stdc++.h>
using namespace std;

int merge(int *arr,int s,int mid,int e)
{
    int n1=mid-s+1;
    int n2=e-mid;
    
    int count=0;//inversion count

    int temp1[n1];
    int temp2[n2];

    for(int i=0;i<n1;i++)
    {
        temp1[i]=arr[s+i];
    }

    for(int i=0;i<n2;i++)
    {
        temp2[i]=arr[mid+1+i];
    }

    int i=0,j=0,k=s;
    while(i<n1 && j<n2)
    {
        if(temp1[i]<=temp2[j])
            arr[k++]=temp2[i++];
        else
        {
            arr[k++]=temp2[j++];
            count+=(n1-i);//inversion count
        }
    }
    
    while(i<n1)
        arr[k++]=temp1[i++];
    while(j<n2)
        arr[k++]=temp2[j++]; 
   
    return count;
}

int count_inversion(int *arr,int s,int e)
{
    int count=0;
    if(s>=e)
        return 0;
    int mid=s+(e-s)/2;
        count+=count_inversion(arr,s,mid);
        count+=count_inversion(arr,mid+1,e);
        count+=merge(arr,s,mid,e);
    return count;
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
   
   cout<<count_inversion(arr,0,n-1);
}