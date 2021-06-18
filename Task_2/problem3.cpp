#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
    int maximum=INT_MIN;
    int minimum=INT_MAX;
    for(int i=0;i<n;i++){
    if(a[i]>maximum)
    maximum=a[i];
    if(a[i]<minimum)
    minimum=a[i];
   }
cout<<"minimum"<<" "<<minimum<<" "<<"maximum"<<" "<<maximum<<endl;
cout<<"minimum"<<" "<<*min_element(a,a+n)<<" "<<"maximum"<<" "<<*max_element(a,a+n)<<endl;
for(int i=0;i<n;i++)
{
maximum=max(a[i],maximum);
minimum=min(a[i],minimum);
}
cout<<"minimum"<<" "<<minimum<<" "<<"maximum"<<" "<<maximum<<endl;
}