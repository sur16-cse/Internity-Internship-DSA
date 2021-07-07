// 1.Nearest Greater to left 
#include<bits/stdc++.h>
using namespace std;

void greaterLeft(int a[],int n,vector<int>&b){
    stack<int>s;
    for(int i=0;i<n;i++){
        if(s.size()==0)
            b.push_back(-1);
        else if(s.size()>0 && s.top()>a[i])
            b.push_back(s.top());
        else if(s.size()>0 && s.top()<=a[i])
        {
                while(s.size()>0 && s.top()<=a[i])
                {
                    s.pop();
                }
                if(s.size()==0)
                    b.push_back(-1);
                else 
                    b.push_back(s.top());
        }
        s.push(a[i]);
    } 
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    vector<int>b(0);

    greaterLeft(a,n,b);

    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
 
}