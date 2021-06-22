


/**********************Session On Sorting Part 2***************************/

A conveyor belt has packages that must be shipped from one port to another within d days.

The ith package on the conveyor belt has a weight of weights[i]. Each day, we load the ship with packages 
on the conveyor belt (in the order given by weights). We may not load more weight than the maximum weight 
capacity of the ship.

Return the least weight capacity of the ship that will result in all the packages on the conveyor belt 
being shipped within d days.



ship --> packets load kr sakte hai 


[2,3,2,2] --> 2 days ship

ship ki capacity is given to us 

bool isPossibletoShipWithinDdaysWithGivenCapacity(vector<int>& weights, int days, int capacity){
	int currDays = 1;
	int ans = 0;
	for(int i=0;i<weights.size();i++){
		if(weights[i]>capacity){
			return false;
		}
		if((ans+weights[i])<=capacity){
			ans = ans + weights[i];
		}else{
			currDays++;
			ans = weights[i];
		}
	}
	return currDays<=days;
}

int findTheCapacityFortheShip(vector<int>weights, int days){
	int low = 1;
	int high = INT_MAX;
	while(low<=high){
		int mid = low + (high-low)/2;
		if(isPossibletoShipWithinDdaysWithGivenCapacity(weights,days,mid)){
			high = mid;
		}else{
			low = mid+1;
		}
	}
}

//Painters Partition
//you are given one sorted array and given one element elements could be repeated any number of times
// starting index and ending index



// BS On answers

// even odd, even odd, odd even, odd even


// if(mid%2){
// 	if(){

// 	}else{

// 	}
// }else{
// 	if(){

// 	}else{

// 	}
// }



/****************************Insertion Sort*****************************/

 0 1 2 3 4 5
[5,2,3,4,1,2] // Insertion Sort

1. We always treat that our first element is always sorted


int curr = 2

j = currPos -1;

while(j>=0 && arr[j]>curr){
	arr[j+1] = arr[j];
	j--;
}
arr[j+1] = curr;


[5,5,3,4,1,2]


 0 1.   2 3 4 5
[2,5, | 3,4,1,2] --> After first Iteration


curr = 3
j = currPos -1;
   j 
[2,5,5,4,1,2]
 j
arr[1] = curr;


   j
[2,3,5, | 4,1,2] --> 2nd Iteration

[2,3,5,5,1,2]

arr[2] = curr; //4

[2,3,4,5, | 1,2] --> 3rd Iteration 
       j

currPos = 4

curr = 1

j = 3
[2,3,4,5, 5,2]
	 j

[2,3,4,4, 5,2]
   j

[2,3,3,4, 5,2]
 j

 [2,2,3,4,5,2]
j

arr[-1+1] = arr[0] = curr = 1

[1,2,3,4,5, | 2]


currPos = 5
curr = 2


j = 4

[1,2,3,4,5,2]
         j

[1,2,3,4,5,5]
       j

[1,2,3,4,4,5]
     j

[1,2,3,3,4,5]
   j

arr[j+1] = arr[2] = curr = 2

[1,2,2,3,4,5] //final Outcome

Time Complexity is O(N^2)

worst case is my array is sorted in desending order main sort hai but I will have to sort it in assending order


Best Case Time Complexity already sorted in our desired order so inner loop will never run so TC is O(N);

Space Complexity is O(1);

/***************************************Merge Sort************************************/


1. Divide and Conquer

when Divide and Conquer gets apply when there are the similiar kind of subproblems

Binary Search is also a part of Divide and Conquer





												 [5,2,3,4,1,2]
 												 /   	    \	       
  											 [5,2,3]		[4,1,2]
  											 /    \  		/    \
  										    [5,2]  [3]    [4,1]   [2]
  										    /   \     /.   /. \.    /
 (merge two sorted arrays) 				  [5].  [2]   /.  [4] [1]. /
  										     \ /.     /.    \ /.   /
  										     [2,5].   /.   [1,4]   /
  										     	\	 /.      \    /
  										     	 \	/
  										     	 [2,3,5]	[1,2,4]
  										     	 	\.        /
 													[1,2,2,3,4,5]



// [1,2,3,4,5]
// [1,2,3]

// 1,1,2,2,3,3
//Merge two sorted arrays
void merge(int *arr, int s, int e, int n){
	int mid = s + (e-s)/2;
	int i = 0;
	int j = mid+1;
	int k = 0;
	int *temp = new int[n];
	while(i<=mid && j<=e){
		if(arr[i]<arr[j]){
			temp[k++] = arr[i++];
		}else
		{
			temp[k++] = arr[j++];
		}
	}
	while(i<=mid){
		temp[k++] = arr[i];
		i++;
	}
	while(j<=e){
		temp[k++] = arr[j];
		j++;
	}
	k = 0;
	for(int i=s;i<=e;i++){
		arr[i] = temp[k];
		k++;
	}	
}

void mergeSort(int *arr, int s, int e, int n){
	if(s>=e)
		return;
	int mid = s + (e-s)/2;
	mergeSort(arr,s,mid,n);
	mergeSort(arr,mid+1,e,n);
	merge(arr,s,e,n); // this is my O(N) operation
}


TimeComplexity of Merge Sort ? --> O(NLogN) in every case

What is space Complexity ? --> O(N) in every case;



/*
Linked List 

1. Link hogi isme

why Linked List

1. variable length
2. It takes more memory
3. Random access not allowed
4. non contiguous
5. Insertion at specific postion is costly if that specific position is not beginning
6. Replacement of element is costly if position of the node is given.
7. Deletion is costly if position of the node is given.

head
1->2->3->4->5 (Talking about singly linked list)

//C++
Class Node{
	public:
		int data;
		Node *next;
}

//Java
Class Node{
	Integer data;
	Node next;
}

*/









