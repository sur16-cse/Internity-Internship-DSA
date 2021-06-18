//Find the "Kth" max and min element of an array
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    int kmax=a[n-k];
    int kmin=a[k-1];
    cout<<"kmax"<<" "<<kmax<<" "<<"kmin"<<" "<<kmin<<endl;
}