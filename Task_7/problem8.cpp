//Implementation of min stack

#include<bits/stdc++.h>
using namespace std;

class MinStack {
    int stack[10000];
    int min[10000];
    int topPtr;
    int minPtr;
public:

    MinStack() {
        topPtr = -1;
        minPtr = -1;
    }
    
    void push(int x) {
        if(topPtr >= 10000)
            return;
        
        stack[++topPtr] = x;
        
        if(minPtr >= 0)
        {
            if(min[minPtr] > x)
                min[++minPtr] = x;
            else
            {
                min[minPtr+1] = min[minPtr];
                minPtr += 1;
            }
        }
        else
            min[++minPtr] = x;
                
    }
    
    void pop() {
        if(topPtr < 0)      //Underflow
            return;
        
        topPtr -= 1;
        minPtr -= 1;
    }
    
    int top() {        
        return stack[topPtr];
    }
    
    int getMin() {
        return min[minPtr];
    }
};

int main(){
    MinStack* obj=new MinStack();
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        obj->push(x);
    }
    int param_3 = obj->top();
    cout<<param_3<<endl;
    int param_4 = obj->getMin();
    cout<<param_4<<endl;
    obj->push(10);
    obj->push(17);
    cout<<obj->getMin()<<endl;
    obj->push(0);
    obj->push(1);
    cout<<obj->getMin()<<endl;
    cout<<obj->top()<<endl;
}