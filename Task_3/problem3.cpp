// Find  element in rotated sorted array.
int rotate_find(int a[],int s,int e,int k){
        if(s>e)
        return -1;
        int mid=(s+e)/2;
        if(a[mid]==k)
        return mid;
        if(a[s]<=a[mid]){
        if(k >= a[s] && k <= a[mid])
        return rotate_find(a,s,mid-1,k);
        return rotate_find(a,mid+1,e,k);
        }
        if((k >= a[mid]) && (k <= a[e]))
         return rotate_find(a,mid+1,e,k);
        return rotate_find(a,s,mid-1,k);
}
#include<bits/stdc++.h>
using namespace std;
int main(){
int a[8]={4,5,6,7,8,1,2,3};
int n=sizeof(a)/sizeof(a[0]);
int k;
cin>>k;
int s=0;
int e=n-1;
cout<<rotate_find(a,s,e,k);

}