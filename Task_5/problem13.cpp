//  3->2->1->6->5->4->7
// given a linked list arrange it in the below fashion
// L0->Ln-1->L1->Ln-2->L2->Ln-3->null;

#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int x)
        {
            data=x;
            next=NULL;
        }
};

Node* reverse(Node* mid){
    Node* prev=NULL;
    Node* curr=mid;
    while(curr!=NULL){
        Node* fur=curr->next;
        curr->next=prev;
        prev=curr;
        curr=fur;
    }
    return prev;
}
 Node* middle(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
    } 
    return slow;
 }
Node* solve(Node* head){
//CODE HERE 
    if(head==NULL || head->next==NULL) 
        return head;
    Node* mid=middle(head);
    Node* first=head;
    Node* second=reverse(mid);
    while(second->next!=NULL){
         Node* temp=first->next;
         first->next=second;
         first=second;
         second=temp;
    }
    return head;
}

void insert(Node* &head,int data){
    if(head==NULL){
        head=new Node(data);
        return;
    }
    Node* tail=head;
    while(tail->next!=NULL){
        tail=tail->next;
    }
    tail->next=new Node(data);
    return;
}

void display(Node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}

int main(){
    Node* head=NULL;
    insert(head,3);
    insert(head,2);
    insert(head,1);
    insert(head,6);
    insert(head,5);
    insert(head,4);
    insert(head,7);
    display(head);
    solve(head);
    display(head);
}
