// check whether the given linked list is palindrome or not.
//approach--> find middle 
//at middle where slow pointer stop 
//at next step reverse right half entirely
// then orginal array from middle again increment slow pointer and taken one 
// dummy node to store left half node and check at each increment of dummy and 
// slow node data matches and increment it till slow point to null. 
// then its palindrome 
//if want to remodify then again slow fast and find middle and then again
// reverse

//tc o(n/2) o(n/2)  o(n/2)      o(n/2)       o(n/2)
//   middle  reverse compare again find middle  again reverse

#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node *link;
        Node(int x)
        {
            data=x;
            link=NULL;
        }
};


void insert(Node* &head,int data)
{
    
    if(head==NULL){
        head=new Node(data);
        return;
    }

    Node *temp=head;
    while(temp->link!=NULL)
        temp=temp->link;
    temp->link=new Node(data);
    return;
}



Node* reverse(Node* head){
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr;

    while(currptr!=NULL){
        nextptr=currptr->link;
        currptr->link=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }
    return prevptr;
}

bool palindrome(Node* head)
{
    if(head==NULL || head->link==NULL)
        return true;
    
    Node *slow=head;
    Node *fast=head;

    
    
    while(fast->link!=NULL && fast->link->link!=NULL)
    {
        slow=slow->link;
        fast=fast->link->link;
    }
    // return slow->data;

    slow->link=reverse(slow->link);

    slow=slow->link;

    Node *dummy=head;
    while(slow!=NULL)
    {
        if(dummy->data!=slow->data)
            return false;
        dummy=dummy->link;
        slow=slow->link;

    }
    return true;
}

int main()
{
    Node *head=NULL;
    int n;
    cin>>n;
    while(n--)
    {
        int data;
        cin>>data;
        insert(head,data);
    }
    cout<<palindrome(head);
}
