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

}