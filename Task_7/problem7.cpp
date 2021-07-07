//max area of rectangle in binary matrix
//same as MAH --> Maxm area Histogram
#include <bits/stdc++.h>
using namespace std;
#define MAX 100

int MAH(vector<int>&h)
{
    int n=h.size();
    stack<int>s;
    vector<int>left,right;
    
    for(int i=0;i<n;i++)
    {
      while(!s.empty() && h[s.top()]>=h[i])
         s.pop();
    
      if(s.empty())
         left.push_back(-1);    
      else
        left.push_back(s.top());
        
    s.push(i);
   }
    
    while(!s.empty())
        s.pop();
    
     for(int i=n-1;i>=0;i--)
    {
      while(!s.empty() && h[s.top()]>=h[i])
         s.pop();
    
      if(s.empty())
         right.push_back(n);    
      else
        right.push_back(s.top());
        
    s.push(i);
   }
    
    int area=0,max_area=0;
    for(int i=0;i<n;i++)
    {
        area=h[i]*(right[n-i-1]-left[i]-1);
        max_area=max(max_area,area);
    }
    return max_area;
    
}
    int maxArea(int A[MAX][MAX], int n, int m) {
        
        int r =n;
    if(r==0)
        return 0;
    int c =m;
    
    vector<int>hist;
    
    for(int j=0;j<c;j++)
        hist.push_back(A[0][j] -0);
    
    int mx = MAH(hist);
    
    for(int i=1;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(A[i][j]==0)
                hist[j]=0;
            else
                hist[j]+=A[i][j]-0;
        }
        mx = max(mx,MAH(hist));
    }
    return mx;
    }

int main() {
   
   int M[MAX][MAX];

        int n, m;
        cin >> n >> m;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> M[i][j];
            }
        }
        cout << maxArea(M, n, m) << endl;

}