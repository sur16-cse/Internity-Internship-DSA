//Longest valid parentesis
#include<bits/stdc++.h>
using namespace std;

bool isvalid(string s){
    int n=s.size();
    stack<char>st;
    bool ans =true;
    for(int i=0;i<n;i++){
        if(s[i]=='{' || s[i]=='(' || s[i]=='[')
            st.push(s[i]);
        else if(!st.empty() && s[i]==')'){
            if(st.top()=='(')
                st.pop();
            else{
                ans=false;
                break;
            }
        }
        else if(!st.empty() && s[i]=='}'){
            if(st.top()=='{')
                st.pop();
            else{
                ans=false;
                break;
            }
        }
        else if(!st.empty() && s[i]==']'){
            if(st.top()=='[')
                st.pop();
            else{
                ans=false;
                break;
            }
        }
    }
    if(!st.empty())
        return false;
    return ans;
}

int main(){
    string s="{([])}";
    cout<<isvalid(s);
}