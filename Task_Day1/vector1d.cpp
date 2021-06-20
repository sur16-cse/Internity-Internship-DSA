#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v;
    //create one size vector becoz size not specified
    //  for(int i=0;i<v.size();i++){
    //     v.push_back(i);
    //  }
    //  for(int i=0;i<v.size();i++){
    //      cout<<v[i]<<" ";
    //  }
    //dynamic 
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        v.push_back(i);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }

    //static same as array
    int m;
    cin>>m;
    vector<int>a(m);
    for(int i=0;i<m;i++)
    {
        a[i]=i;
    }
    for(int i=0;i<m;i++){
        cout<<a[i]<<" ";
    }
}