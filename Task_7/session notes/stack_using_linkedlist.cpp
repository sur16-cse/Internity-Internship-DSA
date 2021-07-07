#include<iostream>
using namespace std;
class Node{
    public:
     int data;
     Node* next;
};

class stack{
    public:
     Node* head;
     stack()
     {
         head=NULL;
     }
    void push(int);
    int  pop();
    int top();
    bool isempty();
    void display();
};

void stack::push(int d){
    Node* temp;
    temp=new Node();
    temp->data=d;
    if(head==NULL){
        temp->next=NULL;
    }
    else{
        temp->next=head;
    }
    head=temp;
}

int stack::pop(){
    if(isempty())
        return -1;  
    Node* temp=head;
    head=head->next;
    int ele=temp->data;
    delete(temp);
    return ele;
}

int stack::top(){
    return head->data;
}

bool stack::isempty(){
    if(head==NULL)
        return true;
    return false;
}

void stack::display(){
    Node* temp;
    temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    stack s;
    s.push(11);
    s.push(10);
    s.push(12);
    cout<<s.top()<<endl;
    s.pop();
    s.display();
    s.isempty();
    
}



