//minimum number of deletion required to balance the parantesis
#include <bits/stdc++.h>
using namespace std;

int deletion(string s)
{
    int n = s.size();
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '{' || s[i] == '(' || s[i] == '[')
            st.push(i);
        else if (s[i] == ')')
        {
            if (st.empty()==0)
                st.pop();
            else
            {
                s[i] = '*';
            }
        }
         else if(s[i]=='}'){
            if(st.empty()==0)
                st.pop();
            else{
                s[i]='*';
            }
        }
        else if(s[i]==']'){
            if(st.empty()==0)
                st.pop();
            else{
                s[i]='*';
            }
        }
    }

    while (!st.empty())
    {
        s[st.top()] = '*';
        st.pop();
    }

    string ans = "";
    for (int i = 0; i < n; i++)
    {
        if (s[i] != '*')
            ans += s[i];
    }

    return n - ans.size();
}

int main()
{
    string s;
    cin >> s;
    int remove = deletion(s);
    cout << "minimum req. :" << remove << endl;
}