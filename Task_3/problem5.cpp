//Find given element in sorted array using ternary search
#include<bits/stdc++.h>
using namespace std;
int ternary_search(int a[],int l,int h,int k){
    while(l<=h){

	int mid1 = l + (h-l)/3;
	int mid2 =  h- (h-l)/3;

	if(a[mid1]==k)
		return mid1;
	if(a[mid2]==k)
		return mid2;

	if(k<a[mid1])
		h = mid1 -1;

	else if(k>a[mid2])
		l = mid2 + 1;
	else{
		l = mid1 + 1;
		h = mid2 -1;
    }
    }
return -1;
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;
    int left=0,right=n-1;
    cout<<ternary_search(a,left,right,k);
}