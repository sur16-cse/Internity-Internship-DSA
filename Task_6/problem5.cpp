//sort doubly linked list
#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *prev;
        Node *next;
    Node(int x){
        data=x;
        next=NULL;
        prev=NULL;
    }
};

Node* split(Node* &head){
    Node *fast=head;
    Node *slow=head;
    while(fast->next && fast->next->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    Node *temp=slow->next;
    slow->next=NULL;
    return temp;
}

Node* merge(Node *first,Node *second){
    if(!first)
        return second;
    if(!second)
        return first;
    if(first->data < second->data){
        first->next=merge(first->next,second);
        first->next->prev=first;
        first->prev=NULL;
        return first;
    }
    else{
        second->next=merge(first,second->next);
        second->next->prev=second;
        second->prev=NULL;
        return second;
    }
}

Node* sort(Node* &head){
    if(!head || !head->next)
        return head;
    Node *second=split(head);

    head=sort(head);
    second=sort(second);

    return merge(head,second);
}


void insert(Node* &head,int data){
    Node *n=new Node(data);
    n->next=head;
    if(head!=NULL)
        head->prev=n;

    head=n;
}

void print(Node* head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    Node *head = NULL;
    insert(head, 5);
    insert(head, 20);
    insert(head, 4);
    insert(head, 3);
    insert(head, 30);
    insert(head, 10);
    head = sort(head);
    cout << "Linked List after sorting\n";
    print(head);
}