#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node(int d)
        {
            data=d;
            next=NULL;
        }
};

int getintersection(int d,Node* head1,Node* head2);
int getcount(Node* head);
int intersection(Node* head1,Node* head2);

void insert(Node* &head,int data)
{
    if(head==NULL)
    {
        head=new Node(data);
        return;
    }
    Node *temp=head;

    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new Node(data);
    return;
    
}



int intersection(Node* head1,Node* head2)
{
    int a=getcount(head1);
    int b=getcount(head2);
    int d;
    if(a>b)
    {
        d=a-b;
        return getintersection(d,head1,head2);
    }
    else
    {
        d=b-a;
        return getintersection(d,head2,head1);
    }
}

int getcount(Node* head)
{
    int count=0;
    Node *current=head;
    while(current!=NULL)
    {
        count++;
        current=current->next;
    }
    return count;
}

int getintersection(int d,Node* head1,Node* head2)
{
    Node* current1=head1;
    Node* current2=head2;
    for(int i=0;i<d;i++)
    {
        if(current1==NULL)
        {
            return -1;
        }
        current1=current1->next;
    }
    while(current1!=NULL && current2!=NULL){
        if(current1==current2)
            return current1->data;

        current1=current1->next;
        current2=current2->next;
    }

    return -1;
}

void intersect(Node* &head1,Node* & head2,Node* &head3)
{
    Node *temp1=head1;
    Node *temp2=head2;
    while(temp1!=NULL && temp1->next!=NULL)
        temp1=temp1->next;
    temp1->next=head3;
    while(temp2!=NULL && temp2->next!=NULL)
        temp2=temp2->next;
    temp2->next=head3;
}

int main()
{
    Node *head1=NULL;
    Node *head2=NULL;
    Node *head3=NULL;
    int n,m,common;
    cout<<"how many input want to insert"<<endl;
    cin>>n>>m>>common;
    while(n--)
    {
        int data;
        cin>>data;
        insert(head1,data);
    }
    while(m--)
    {
        int data;
        cin>>data;
        insert(head2,data);
    }
    while(common--)
    {
        int data;
        cin>>data;
        insert(head3,data);
    }
    intersect(head1,head2,head3);
    cout<<intersection(head1,head2);
}