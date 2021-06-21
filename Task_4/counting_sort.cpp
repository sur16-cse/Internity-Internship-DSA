#include<bits/stdc++.h>
using namespace std;
void count_sort(int arr[],int n){
    int max=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }

    int *freqArray=new int[max+1];
    memset(freqArray,0,sizeof(freqArray));

    for(int i=0;i<n;i++){
        freqArray[arr[i]]++;
    }

    int i,j=0;
    
    while(i<max+1){
        while(freqArray[i]>0)
        {
             arr[j]=i;
             j++;
             freqArray[i]--;
        }
        i++;
    }
   
}
int main(){
int n;
cin>>n;
int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    count_sort(arr,n);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }

}