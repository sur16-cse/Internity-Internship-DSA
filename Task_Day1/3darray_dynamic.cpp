#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,l;
    cin>>n>>m>>l;
    int ***arr=new int**[n];
    for(int i=0;i<n;i++){
        arr[i]=new int*[m];
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            arr[i][j]=new int[l];
        }
    }
   for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<l;k++){
                cin>>arr[i][j][k];
            }
        }
    }
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           for(int k=0;k<l;k++){
               cout<<arr[i][j][k]<<" ";
           }
       }
   }

}