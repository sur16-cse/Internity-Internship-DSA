#include<bits/stdc++.h>
using namespace std;

class PriorityQueue{
private:
	vector<int>list;
	void upHeapify(int ind){
		if(ind==0)
			return;
		int pi = (ind-1)/2;
		if(list[pi]>list[ind])
			swap(list[pi],list[ind]);
		upHeapify(pi);
	}

	void downHeapify(int ind){
		int mini = ind;
		int lchild = 2*ind+1;
		int rightchild = 2*ind+2;
		if(lchild<list.size() && list[lchild]<list[mini])
			mini = lchild;
		if(rightchild<list.size() && list[rightchild]<list[mini])
			mini = rightchild;
		swap(list[ind],list[mini]);
		if(mini==ind)
			return;
		downHeapify(mini);
	}
public:
	void push(int num){
		list.push_back(num);
		upHeapify(list.size()-1);
	}

	void pop(){
		if(list.size()==0){
			cout<<"Underflow";
			return;
		}
		swap(list[0],list[list.size()-1]);
		list.pop_back();
		downHeapify(0);
	}

	int size(){
		return list.size();
	}

	int peek(){
		if(list.size()==0){
			cout<<"Underflow";
			return -1;
		}
		return list[0];
	}
};

int main(){
	PriorityQueue p1;
	p1.push(10);
	p1.push(20);
	p1.push(30);
	p1.push(4);
	p1.push(5);
	p1.push(6);
	while(p1.size()!=0){
		cout<<p1.peek()<<" ";
		p1.pop();
	}
}



/********************Heap Sort*******************/


/*
There are two types of heap
1. Min Heap (always minimum top element and its children are greater than its parent) [assending order array we will get]
2. Max Heap (always maximum top element and its children are smaller than its parent) [desending order array we will get]

[10,20,30,4,5,6]

Adding elemnt in last of our array is always O(1) operation and also poping it from the last is our O(1) operation Operation complexity gets reduce
because if we are popping element from the front of our array then complexity is going to be O(n-1) because of shifting.  

When I am pushing element

		 1	--> i		
		 4
	   /   \ 	
  (2) 5     6 (3) leftchild is 2*i, rightChild is 2*i+1 in case of 1 based indexing
	 / \    /      If I am talking about 0 based indexing (2*i+1) (left Child), (2*i+2) (right Child)
(4)	20  10 30
		(5) (6)

upheapify when we are pushing 

When I am popping element

When I am popping element as its time complexity is going to be greater because of array swapping
so swap the first element of heap with the last element and the pop it out because swap is O(1) operation and my pop also O(1) operation

4

		5
	   /  \
      10   6
     / \
    20 30

    This struture is not satisfying our heap property
    downheapify


In next iteration we will be popping 5

5

		6
	   /  \
      10   30
     / 
    20 

    This struture is not satisfying our heap property
    downheapify (0)

next Iteration we have 5

6		10
	   /  \
      20   30

    This struture is not satisfying our heap property
    downheapify (0)

next Iteration we have 10

10.     30
	   /  
      20 

 This struture is not satisfying our heap property
    downheapify (0)
 
   20
  /
 30

next Iteration we have 20

20

   30
   this struture is not satisfying our heap property
    downheapify (0)

 next iteration we are having 30

 30


Heap Sort

1. For heap sort first we have to create our heap from our given array
2. Pop element until and unless we are not having any element in heap
3. In resultant we will get our sorted array this is called heap sort.

Time Complexities --> 1 element insertion complexity is log(n) NLog(N)
deletion complexity is also logN in case of one element
if we are popping n elements then our complexity is going to be O(NLogN)

space complexity is ?

O(N) --> to store the heap;



LinkedList Questions
1. Detect cycle in a linked list
2. Return the start of the cycle.

*/




/* 3rd Approach Of Intersection of LinkedList;

  				4			 
  				 \		    
  				  2		   4	 
  				   \.     /
  				   	3    2
  					 \  /
					  6
					  |
					  4
					  |
					  5
					  |
					  4

*/











