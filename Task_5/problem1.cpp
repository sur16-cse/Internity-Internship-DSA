// Implement quick sort,
#include<bits/stdc++.h>
using namespace std;

int partition(int *a,int s,int e){
    int pivot=a[e];
    int i=s-1;
    int j=s;
    for(j=s;j<e;j++)
    {
        if(a[j]<pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
    }
    swap(a[i+1],a[e]);
	return (i+1);
}

void quicksort(int a[],int s,int e)
{
    if(s>=e)
        return;
    int pIndex= partition(a,s,e);
    quicksort(a,s,pIndex-1);
    quicksort(a,pIndex+1,e);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    int s=0;
    int e=n-1;

quicksort(a,s,e);

    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}