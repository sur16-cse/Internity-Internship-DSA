//Reverse a linked list in the group of k
//1->2->3->4->5->6->7 k = 3

#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node *next;
        Node(int x)
        {
            data=x;
            next=NULL;
        }
}