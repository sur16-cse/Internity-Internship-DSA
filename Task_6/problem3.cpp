//Implement Redix Sort

#include<bits/stdc++.h>
using namespace std;

void countSort(int a[],int n,int exp){
    int output[n];
    int i,count[10]={0};
    for(i=0;i<n;i++)
        count[(a[i]/exp)%10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];

    for (i = n - 1; i >= 0; i--) {
        output[count[(a[i] / exp) % 10] - 1] = a[i];
        count[(a[i] / exp) % 10]--;
    }

    for (i = 0; i < n; i++)
        a[i] = output[i];
}


void radixSort(int a[],int n){
    int max=*max_element(a,a+n);

    for(int exp=1;max/exp>0;exp*=10)
        countSort(a,n,exp);
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    radixSort(a,n);

    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}