#include<bits/stdc++.h>
using namespace std;
void selectionSort(int *arr, int n)
    {
       //code here
       for(int j=0;j<n-1;j++){
             int imin=j;
           for(int i=j+1;i<n;i++){
            if(arr[i]<arr[imin])
                    imin=i;
        }
           if(imin!=j)
              swap(arr[j],arr[imin]);
       }
    }
int main(){
int n;
cin>>n;
int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];
        selectionSort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}