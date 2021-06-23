// delete a specific node from a given linked list.
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

void print(Node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
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

void deleteATMiddle(Node* &head,int m){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    for(int i=0;i<m-1;i++){
        temp=temp->next;
    }
    Node* todelete=temp->next;
    temp->next=todelete->next;
    delete todelete;
}
    
int main(){
    Node*head=NULL;
    insert(head,12);
    insert(head,1);
    insert(head,19);
    insert(head,0);
    insert(head,7);
    insert(head,8);
    print(head);
    int m;
    cout<<"position at which element is deleted"<<endl;
    cin>>m;
    deleteATMiddle(head,m);
    print(head);  
}