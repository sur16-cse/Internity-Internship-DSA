//Return the start of the cycle.
#include<bits/stdc++.h>
using namespace std;

/*1->2->3->4->5
^       /    \
|      9      6
Head   \      /
        8<---7*/

//after detection of fast and slow pointer at same node then break the loop 
// and  move aany of slow and fast to head and then move one step each time both 
//until both next pointer point to same node thsi sis the start of cycle
//say removal of cycle in linked list

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

Node* detectCycle(Node* &head){
  Node *slow=head;
  Node *fast=head;
  if (head == NULL || head->next == NULL)
        return NULL;
 
  while(fast!=NULL && fast->next!=NULL){
    if(fast==slow){
      break;
    }
    slow=slow->next;
    fast=fast->next->next;
    
  }
  if (slow != fast)
        return NULL;

  slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }
  return slow;
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
  Node* res = detectCycle(head);
    if (res == NULL)
        cout << "Loop does not exist";
    else
        cout << "Loop starting node is " << res->data;
  
}