//delete a node whose pointer to that node is given only.
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

void delete_node(Node* &node_ptr);
void print(Node* head);

void push(Node* &head_ref,int x)
{
    Node *temp=new Node(x);
    //temp->data=x;
    temp->next=head_ref;
    head_ref=temp;
}

void print(Node* head)
{
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->"<<" ";
        temp=temp->next;
    }
}

void delete_node(Node* &node_ptr)
{
    if(node_ptr->next==NULL)
    {
        free(node_ptr);
        return;
    }
    Node *temp=node_ptr->next;
    node_ptr->data=temp->data;
    node_ptr->next=temp->next;
    free(temp);
}

int main()
{
    Node *head=NULL;
    int n;
    cin>>n;
    while(n--){
        int data;
        cin>>data;
        push(head,data);
    }
    delete_node(head);
    print(head);
    cout<<endl;
    delete_node(head->next->next);
    print(head);
}
