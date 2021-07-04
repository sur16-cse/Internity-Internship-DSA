//Detect cycle in a linked list

//Floyd's Algorithm -- Hare and tortoise alorithm

#include<bits/stdc++.h>
using namespace std;

/*1->2->3->4->5
^       /    \
|      9      6
Head   \      /
        8<---7*/

//if tortoise and hare come at same pointer then cycle detect.

class Node{
    public:
     int data;
     Node* next;
};

void makeCycle(Node* &head,int pos)
{
  Node *temp=head;
  Node *startNode;

  int count=1;
  while(temp->next!=NULL){
    if(count==pos){
      startNode=temp;
    }
    temp=temp->next;
    count++;
  }
  temp->next=startNode;
}

bool detectCycle(Node* &head){
  Node *slow=head;
  Node *fast=head;
  while(fast!=NULL && fast->next!=NULL){
    slow=slow->next;
    fast=fast->next->next;
    if(fast==slow){
      return true;
    }
  }
  return false;
}

void insert(Node* &head,int data){
    Node* temp;
    temp=new Node();
    temp->data=data;
    if(head==NULL){
        temp->next=NULL;
    }
    else{
        temp->next=head;
    }
    head=temp;
}

void display(Node* head){
    while(head!=NULL){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<endl;
}

int main(){
  Node *head=NULL;
  int n;
  cout<<"number of element to be inserted"<<" "<<endl;
  cin>>n;
  while(n--){
    int data;
    cin>>data;
    insert(head,data);
  }

  cout<<"Node from where cycle form"<<endl;
  int pos;
  cin>>pos;
  makeCycle(head,pos);
  //display(head);
  cout<<detectCycle(head);
}