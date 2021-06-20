#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    //int arr[n][m];---> static 2d array creation
    //array creation dynamically 
    int **arr=new int*[n];
    for(int i=0;i<n;i++){
        arr[i]=new int[m];
    }
    //assign value in 2d array
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>arr[i][j];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
    }
}