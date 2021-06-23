// Insert a specific node from a given linked list.
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

int length(Node* head);
void insertAThead(Node*&head,int d){
if(head==NULL){
    head=new Node(d);
    return;
}
Node*n=new Node(d);
n->next=head;
head=n;
}

void print(Node*head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}

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

void insertINMiddle(Node*&head,int data,int p){
    //corner case
    if(head==NULL or p==0){
        insertAThead(head,data);
    }
    else if(p>length(head)){
        insertATTail(head,data);
    }

    else{
        //take p-1 jumps
        int jump=1;
        Node*temp=head;
        while(jump<=p-1){
            temp=temp->next;
            jump++;
        }
        //create a new node
        Node* n=new Node(data);
        n->next=temp->next;
        temp->next=n;
    }
}

int length(Node* head){
    int cnt=0;
    while(head!=NULL){
        cnt++;
        head=head->next;
    }
    return cnt;
}

int main(){
    Node*head=NULL;
    insertAThead(head,12);
    insertAThead(head,1);
    insertAThead(head,19);
    insertAThead(head,0);
    int p;
    cout<<"positiotn at which element is inserted";
    cin>>p;
    insertINMiddle(head,7,p);
    insertATTail(head,8);
    print(head);   
}