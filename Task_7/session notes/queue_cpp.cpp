/*
Queue: It is a linear data structure which follows FIFO order.

    front-->| | | | | |
    rear-->

   Terms associated with queue:

   front 
   rear
   capacity


   operations queue:

   enqueue: insert an item
   dequeue: remove an item
   isempty: queue is empty or not
   isFull : to check if queue is full
   peek: return the element which is pointed by front


   examples:

   CPU shedulling
   Memory management
   traffic ligit

*/


// Array based implementation of queue:

#include<bits/stdc++.h>
using namespace std;
#define N 5
class Queue
{
   
    int myqueue[N], front, rear;
    public:
    Queue()
    {
        front=rear=-1;
    }
    
    bool isFull()
    {
        if(front==0 && rear == N-1)
        return true;
        else
        {
            return false;
        }
        
    }
    bool isEmpty()
    {
        if(front==-1)
        return true;
        else
        {
            return false;
        }
        
    }

    void enQueue(int x)
    {
        if(isFull())
        cout<<"overflow";
        else
        {
            if(front==-1)
            front=0;
            rear++;
            myqueue[rear]=x;
            cout<<x<<" is inserted"<<"\n";
        }
        
    }

    int deQueue()
    {
        int value=-1;

        if(isEmpty())
        {
            cout<<"Underflow";
            //return -1;
        }
        else
        {
            value=myqueue[front];
            front++;
            
        }
        return value;
        
    }

    void displayQueue()
    {
        if(isEmpty())
        {
            cout<<"empty";
        }
        else
        {
            for(int i=front;i<=rear;i++)
            cout<<myqueue[i]<<" ";
        }
        cout<<"\n";
    }

};

int main()
{
    Queue myq;
    myq.enQueue(10);
    myq.enQueue(20);
    myq.enQueue(30);
    myq.enQueue(40);

    myq.displayQueue();
    cout<<myq.deQueue()<<"\n";
    myq.displayQueue();
}

/* the above approach has some issues of space wastage */

/* O(1) is T.C for insertion and deletion */