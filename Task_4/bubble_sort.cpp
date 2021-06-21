#include<bits/stdc++.h>
using namespace std;
void bubble_sort_while(int a[],int n){
int swapped;
    do{
        swapped=false;
        for(int i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                swap(a[i],a[i+1]);
                swapped=true;
            }
        }
    }while(swapped);
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
}

void bubble_sort_for(int a[],int n){
    int flag=0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                flag=1;
                swap(a[j],a[j+1]); 
            }
        }
        if(flag==0)
         return;
    }
  for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //implementation
    bubble_sort_while(a,n);
    cout<<endl;
    bubble_sort_for(a,n);
}