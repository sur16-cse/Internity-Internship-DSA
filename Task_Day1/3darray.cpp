//3d array
//number of elements in 3d array -- multiplying the size of all dimensions
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,l;
    cin>>n>>m>>l;
    int a[n][m][l];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            for(int k=0;k<l;k++){
                cin>>a[i][j][k];
            }
        }
    }
   for(int i=0;i<n;i++){
       for(int j=0;j<m;j++){
           for(int k=0;k<l;k++){
               cout<<a[i][j][k]<<" ";
           }
       }
   }
}