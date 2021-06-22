// find the length of linked list
#include<iostream>
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
        //int length()
};

int length(Node* head)
{
    int cnt=0;
    while(head!=NULL)   
    {
        cnt++;
        head=head->next;
    }
    return cnt;
}

void insert(Node* &head,int data)
{
    if(head==NULL)
    {
        head=new Node(data);
        return;
    }
    Node *temp=head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next=new Node(data);
    return;
    
}

int main()
{
    Node *head=NULL;

    int n;
    cout<<"how many numbers want to inser"<<endl;
    cin>>n;
    while(n--)
    {
        int data;
        cin>>data;
        insert(head,data);
    }

    cout<<length(head);

}