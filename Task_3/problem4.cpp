// Find minimum element in rotated sorted array.
#include<bits/stdc++.h>
using namespace std;
int find_min(int d[],int n){
if(n==0) return -1;
if(n==1) return d[1];
int left=0;
int right=n-1;
while(left<right){
    int mid=left+(right-left)/2;
    //mid >0 due array bound
    //if middle less than mid-1 --> 3,4,0,1,2 --> return mid
    if(mid>0 && d[mid]<d[mid-1])
    return d[mid];
    else if(d[left]<=d[mid] && d[mid]>d[right])
    left=mid+1;
    else
    right=mid-1;

}
return d[left];
}
int main(){
    int a[10]={4,5,6,7,8,9,0,1,2,3};
    int b[10]={9,0,1,2,3,4,5,6,7,8};
    int c[5]={3,4,0,1,2};
    int s[4]={3,4,1,2};
    cout<<find_min(a,10)<<endl;
    cout<<find_min(b,10)<<endl;
    cout<<find_min(c,5)<<endl;
    cout<<find_min(s,4)<<endl;
}