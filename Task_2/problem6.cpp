// Move all the negative elements to one side of the array
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    cout<<"stl sort"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    //using partition
    int i=0;
    for(int j=0;j<n;j++)
     {
         if(a[j]<0)
         {   if(j!=i)
             swap(a[j],a[i]);
         i++;
         }
     }
     cout<<"partition"<<endl;
    for(int j=0;j<n;j++)
    cout<<a[j]<<" ";
}