//Reverse a linked list in the group of k
//1->2->3->4->5->6->7 k = 3

//Reverse a linked list
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node*next;
    Node(int d){
        data=d;
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

Node* reversek(Node* &head,int k){
    Node* prevptr=NULL;
    Node* currptr=head;
    Node* nextptr;

    int count=0;
    while(currptr!=NULL && count<k){
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
        count++;
    }
    if(nextptr!=NULL)
        head->next=reversek(nextptr,k);
    return prevptr;
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
    int n;
    cout<<"how many numbers want to enter:"<<endl;
    cin>>n;
    while(n--)
    {
        int data;
        cin>>data;
        insert(head,data);
    }
    display(head);
    int k;
    cout<<"k from which Node reverse"<<endl;
    cin>>k;
    Node* newhead=reversek(head,k);
    display(newhead);
}