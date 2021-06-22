


/*

--> Quick Sort

Partiton algorithm

						smaller one 	|       larger one
				(follow same process)		(follow same process)		


  [1,2,4,5,6,7,8]
              j
 				i


int partition(int *arr, int s, int e){
	int pivot = arr[e];
	int i = s-1;
	int j = s;
	for(;j<e;j++){
		if(arr[j]<pivot)
		{
			i++;
			swap(a[i],a[j]);
		}
	}
	swap(a[i+1],a[e]);
	return (i+1);
}

void quickSort(int *arr, int s, int e){
	if(s>=e)
		return;
	int pIndex =  partition(arr, s, e);
	quickSort(arr,s,pIndex-1);
	quickSort(arr,pIndex+1, e);
}


Complexities 

Time --> O(N^2)


left skew tree

				/
			   /
			  /
			 /
			/

right skew tree

			\
		     \
			  \

when already sorted that is our worst case 

and average case is O(NLogN);

and best case is ? (when there is balanced tree) partition is exactly in between in each iteration 

Space complexity --> O(1) if not considering the stack space


stack space complexity --> O(logN) in average case

worst case stack space complexity --> O(N) in worst case


why N^2  problem is coming ? why my complexity is going to N^2;
because we are taking the elemnt from the fix position

How to overcome

Radmoized QuickSort to avoid N^2 problem (NLogN)


		4
1, 2, 3 , 5, 6, 7



1. Implement quick sort,
2. Implement merge sort,
3. Count Inversions of an array (Mare ko samjhana hai--> vikas)
4. find the intersection of two linked list
5. find the length of linked list
6. check whether the given linked list is palindrome or not.
7. Sort a linkedlist
8. Reverse a linked list
9. delete a specific node from a given linked list.
10. Insert a specific node from a given linked list.
11. delete a node whose pointer to that node is given only.
12. Reverse a linked list in the group of k
	1->2->3->4->5->6->7 k = 3
	3->2->1->6->5->4->7
13. given a linked list arrange it in the below fashion
	L0->Ln-1->L1->Ln-2->L2->Ln-3->null;
14. merge two sorted linked list
15. merge linkedlist alternatively
	l1->l11->l12->l13->l14
	l2->l21->l22->l23->l24
	result --> l11->l21->l12->l22->l13->l23->l14->l24



Linked List -->

head
1->2->3->4->5->6

struct Node{
	int data;
	Node *next;
};

void TraverseLinkedList(Node *head){
	if(head==NULL)
		return;
	Node *temp = head;
	while(temp!=NULL){
		cout<<temp->data<< " ";
		temp = temp->next;
	}
}



You are given two linked list you have to find the intersection point of these linked list
		(head1).   (head2)
			1	   
			 \	 	(temp2)
(temp1)		  2	  4	
			   \ /	
			    3
			    |
			    4
			    |
			    5
			    |
			    6



What is very first approach
N is the length of my first linked list and M is of 2nd Linked List
1 node pakad lo aur dusri main search kr lo --> N*M

what is 2nd approach
Store first linked list in set / HashSet and after that traverse on the 2nd list and find the address of it correspondingly
TC, O(max(N,M))
SC, O(min(N,M))

what is 3rd approach
based upon length and two pointer

Node * findIntersectionPoint(Node *head1, Node *head2){
	
}

1. By traversing
2. By recursion

int length(Node *head){
	if(head==NULL)
		return 0;
	return 1 + length(head->next);
}


void deleteGivenNode(Node *del){
		
}


**/ 
