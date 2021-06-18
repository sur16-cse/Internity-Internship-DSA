// Given an array which consists of only 0, 1 and 2. Sort the array    without using any sorting algo
#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[10]={0,0,2,1,2,2,2,1};
    int n=sizeof(a)/sizeof(a[0]);
    //common stl sort takes O(nlgn)
    sort(a,a+n);
    cout<<"stl sort"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //three pointer approach
    int l=0,m=0,h=n-1;
    while(m<=h){
        if(a[m]==0)
        {
            swap(a[l],a[m]);
            l++;
            m++;
        }
        if(a[m]==1)
        {
            m++;
        }
        if(a[m]==2)
        {
            swap(a[m],a[h]);
            h--;
        }
    }
    cout<<"three pointer approach"<<endl;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    //traverse and assign array till count 0 then 1 then 2
    int count0=0,count1=0,count2=0;
    for(int i=0;i<n;i++){
        if(a[i]==0)
        count0++;
        if(a[i]==1)
        count1++;
        if(a[i]==2)
        count2++;
    }
    //trverse till count0 and assign 0
    for(int i=0;i<count0;i++)
    a[i]=0;
    //trverse till count1 and assign 1
    for(int i=count0;i<count1;i++)
    a[i]=1;
    //trverse till count2 and assign 2
    for(int i=count0+count1;i<n;i++)
    a[i]=2;
    
    cout<<"traverse array two times"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";

    //count sort
}