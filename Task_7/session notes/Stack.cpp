/***********************************Stack**********************************/


/*


What is stack

Stack is a special kind of data structure which allwed us to insert and delete element from one end only..


..... --> LIFO (Last In first Out)
..... --> FILO (First In Last Out)
.....
.....
.....
.....


1. In Undo Redo we could stack
2. In Recursion 
3. Stack Memory
4. Function call --> context switch --> previous states we save into our stack so we could retrieve all the prior states if current processing is finished.
5.Backtracking--need to access most recent data element in a series of elements.
6.Dfs
7. parsing-syntax analysis of compiler uses stack in parsing the program
8. web browsers stores the address of recently visited sites on a stack.
9.Expression evaluation.
10.Reversing a list- first push all the elements of string in stack an then pop elements.
11.Expression conversion.
12.tower of hanoi.
13.computation of cycle in graph.

void solve1(){
	solve2();
}

void solve(int a){
	//cdncdcndun
	solve1()
}


void main(){
	int a = 10;
	solve(a); --> Context switching 
}

1->2->3->4->5

at one end we are going and returning from the same end
main()


******************************************Implementation************************************

push(int x)

pop()

peek() --> which element is there on top do not remove the element

isEmpty() --> our stack is empty or not

isFull() --> If our stack size is full and no space is left;



All these operations are O(1) operations

Only one variable is needed to maintain all the functions

**/

/*Array based implementation of stack */


#define n 100;

class Stack
{
	int *arr;
	int top;
public:
	void push(int x);
	int pop();
	bool isFull();
	bool isEmpty();
	int peek();

	Stack(){
		arr = new int[n];
		top = -1;
	}

	void push(int ele){
		if(isFull())
		{
			cout<<"Stack Overflow"<<endl;
			return;
		}
		top++;
		arr[top] = ele;
	}

	int pop(){
		if(isEmpty()){
			cout<<"Stack is empty or underflow"<<endl;
			return -1;
		}
		int ele = arr[top];
		top--;
		return ele;
	}

	int peek(){
		if(isEmpty()){
			cout<<"Stack is empty or underflow"<<endl;
			return -1;
		}
		return arr[top];
	}

	bool isFull(){
		if(top==n-1)
			return true;
		return false;
	}

	bool isEmpty(){
		if(top==-1)
			return true;
		return false;
	}
};

/*Linked List based approach*/

/*Surbhi will take session*/


//Question 1: Next Greater element to the right in an Array;


Input array : - 3 2 1 -2 4 5 6

Output array:-  4 4 4 4 5 6 -1

Naive approach / brute force approach;


vector<int> nextGreaterElementInanArray(vector<int>& arr, int n){
	vector<int>ans(n)
	for(int i=0;i<n;i++){
		bool flag = false;
		for(int j = (i+1);j<n;j++){ //--> 99% case hai ki apna stack lagega if our j is dependent 
			if(arr[j]>arr[i]){
				ans[i] = arr[j];
				flag = true;
				break;
			}
		}
		if(flag==false){
			ans[i] = -1;
		}
	}
return ans;
}


Naive approach Time Complexity O(N^2);



array 

3 2 1 -2 4 5 6
4 4 4  4 5 6 -1

[4, 5, 6 ]

current implementation time Complexity is O(n)

why it is O(n) because each index is being traverse only once;

space Complexity is O(n) because of stack size;



vector<int> nextGreaterElementInanArray(vector<int>& arr, int n){
	vector<int>ans(n);
	stack<int>stk;
	if(n==0){
		return ans;
	}
	ans[n-1] = -1;
	stk.push(n-1);
	for(int i=n-2;i>=0;i--){
		while(stk.empty()!=1 && arr[stk.top()]<=arr[i])
			stk.pop();
		if(stk.empty()==1){
			ans[i] = -1;
			continue;
		}
		ans[i] = arr[stk.top()];
		stk.push(i);
	}
	return ans;
}



1. Nearest Greater to left
2. Nearest smaller to left
3. Nearest smaller to right
4. Stock span problem. //(Amazon Interview Question)
5. Maximum area of histogram. //(This is also Famous problem)
6. Rain water trapping. //(Imp problem)
7. max area of rectangle in binary matrix
8. Implementation of min stack //(This is also imp Question)
9. The celebrity problem //(VVIMP and Famous also)
10. Longest valid parentesis
11. minimum number of deletion required to balance the parantesis
12. Stack using queue
13. queue using stack
14. Implement two stacks in one array







