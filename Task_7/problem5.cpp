//Maximum area of histogram.
#include<bits/stdc++.h>
using namespace std;

int maxHistArea(vector<int>a,int n){
    stack<int>st;
    int ans=0,i=0;
    a.push_back(0);
    while(i<n){
        while(!st.empty() and a[st.top()]>a[i])
        {
            int t=st.top();
            int h=a[t];
            st.pop();
            if(st.empty()){
                ans=max(ans,h*i);
            }
            else
            {
                int len=i-st.top()-1;
                ans=max(ans,h*len);
            }
        }
        st.push(i);
        i++;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>a(n,0);
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<maxHistArea(a,n);
}