//The celebrity problem
/*In a party of N people, only one person is known
to everyone. Such a person may be present in the party
if yes, (s)he doesn't know anyone in the party
we can only ask questions like  does 'A' know 'B'.
Find the stranger celebrity in minimum number of questions*/

#include<bits/stdc++.h>
using namespace std;

void celebrity(vector<vector<int>>&M,int n){
    stack<int>st;
    for(int i=0;i<n;i++){
        st.push(i);
    }
    
    while(st.size()>=2){
        int i=st.top();
        st.pop();
        int j=st.top();
        st.pop();

        if(M[i][j]==1){
            //if i knows j-->i not a celebrity
            st.push(j);
        }else{
            //if i does not j --> j not a celebrity
            st.push(i);
        }

    }
    int pot=st.top();
    for(int i=0;i<n;i++){
        if(i!=pot){
            if(M[i][pot]==0 || M[pot][i]==1){
                cout<<"none"<<endl;
                return;
           }
        }
    }
    cout<<pot<<endl;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>M(n,vector<int>(n,0));
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>M[i][j];
        }
    }
    celebrity(M,n);
}