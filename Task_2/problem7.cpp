// Find the Union and Intersection of the two sorted arrays.

//this can be solved using merge sort
#include<bits/stdc++.h>
using namespace std;
void intersection(int a[],int b[],int n,int m){
//intersection
cout<<"intersection"<<endl;
    int i=0,j=0;
        while(i<n && j<m){
        if(a[i]<b[j])
        i++;
        else if(a[i]>b[j])
        j++;
        else{
        cout<<b[j++]<<" ";
        i++;
        }
    } 
}
void union_array(int a[],int b[],int n,int m){
    int i=0,j=0;
    cout<<"union"<<endl;
    while(i<n && j<m){
      if(a[i]<b[j])
      {
       cout<<a[i++]<<" ";
      }
      if(a[i]>b[j]){
          cout<<b[j++]<<" ";
      }
      if(a[i]==b[j]){
        cout<<a[i++]<<" ";
        j++;
      }
    }
    while(i<n){
        cout<<a[i++]<<" ";
    }
    while(j<m){
        cout<<b[j++]<<" ";
    }
    cout<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    sort(a,a+n);
    int m;
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
    cin>>b[i];
    sort(b,b+m);
    
    union_array(a,b,n,m);
    intersection(a,b,n,m);
}