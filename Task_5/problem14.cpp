//merge two sorted linked list
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

void insertATTail(Node* &head,int data){
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

Node* merge(Node* &head1,Node* &head2)
{
    Node *p1=head1;
    Node *p2=head2;
    Node *dummy=new Node(-1);
    Node *p3=dummy;

    while(p1!=NULL && p2!=NULL)
    {
        if(p1->data<p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else
        {
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }

    while(p1!=NULL)
    {
        p3->next=p2;
        p1=p1->next;
        p3=p3->next;
    }

    while(p2!=NULL)
    {
        p3->next=p1;
        p1=p2->next;
        p3=p3->next;
    }

    return dummy->next;
}

Node* mergeRecursive(Node* &head1,Node* &head2)
   {
       if(head1==NULL)
        return head2;
       if(l2==NULL)
        return head1;
       Node *result;
       if(head1->data<head2->data)
       {
           result=head1;
           result->next=mergeRecursive(head1->next,head2);
       }
       else
       {
           result=head2;
           result->next=mergeRecursive(head1,head2->next);
       }
       return result;
   }

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node *head1=NULL;
    Node *head2=NULL;
    int arr1[4]={1,4,5,7};
    int arr2[3]={2,3,6};
    for(int i=0;i<4;i++)
    {
        insertATTail(head1,arr1[i]);
    }
    for(int i=0;i<3;i++)
    {
        insertATTail(head2,arr2[i]);
    }
    display(head1);
    cout<<endl;
    display(head2);

    Node *newhead=merge(head1,head2);
    display(newhead);
    cout<<endl;

    Node *mergeR=mergeRecursive(head1,head2);
    display(mergeR);
}
