// [10, 11]
// [10,10]

// union --> 10, 11

// intersection -> 10


/*

[1,2,3,4,5,6,7]

[1,3,4,5] --> this is a sub sequence in that order then it is subsequence
[2,4,5] --> this is sub sequence
[1,2,3] --> that is sub array we are slicing some portion of the array


What is sorting 

[3,1,2] (Wave sort) \/\/

Sorting is arranging the elements in some logical order, logical order could
be increasing or descreasing

data which I have to sort is having size -> 2kb, 10Kb

laptop's ram size is 2GB

data size is something which is 3GB

2GB 1GB


Types of sorting
1. Internal Sorting 

What is internal Sorting 
Internal Sorting is something in which our data size is less than the size of our RAM

2. External Sorting 
What is External Sorting 
External Sorting is something in which our data size is greater than the size of our RAM


Types of implementation of sorting 
1. Bubble Sort
2. Insertion Sort
3. Selection Sort
4. Quick Sort
5. Merge Sort
6. Counting Sort
7. Redix sort
8. Heap Sort
9. dutch national sort
10. Bucket Sort
11. BST Sort



1. Bubble Sort

Assending order
[9,8,7,6,5,4,3,2,1] --> Original Array

[8,7,6,5,4,3,2,1,9] --> 1st iteration


[7,6,5,4,3,2,1,8,9] --> 2nd Iteration

[6,5,4,3,2,1,7,8,9] --> 3rd Iteration

[5,4,3,2,1,6,7,8,9] --> 4th Itertion

..
..
..
[1,2,3,4,5,6,7,8,9] --> last Iteration 


bool isSorted(int *arr){
	int i = 0;
	for(i=0;i<n-1;i++)
	{
		if(arr[i]>arr[i+1])
			return false;
	}
	return true;
}



void bubbleSort(int *arr){
	int sizeOfArray = sizeof(arr)/sizeof(arr[0]); O(1) (Space)
	int *temp = new int[sizeof(arr)/sizeof(arr[0])];[][][][][]
	bool flag = false; --> O(1)
	for (int i=0; i<n-1;i++){ --> O(1)
		for(int j = 0; j<n-i-1; j++){ --> O(1)
			if(arr[j]<arr[j+1]){
				flag = true;
				swap(arr[j],arr[j+1]);
			}
		}
		if(flag==false)
			return;
	}
}

(N*(N-1))/2

Time Complexity

	In Worst case O(N^2)

	In best case O(N)

Space Complexity
	O(1)
*/


/*
	Selection Sort
	 0 1 2 3 4 5 6 7 8
	[9,8,7,6,5,4,3,2,1] --> original array
	
		minimum is 1
		minIndex = 8
	swap(arr[i],arr[minIndex])
	0 1 2 3 4 5 6 7 8
	[1,8,7,6,5,4,3,2,9] --> 1st Iteration

	Now search space is from i = 1 to 8
		minimum is 2
		minIndex = 7
	[1,2,7,6,5,4,3,8,9] --> 2nd Iteration
	
	Now search space is from i = 2 to 8
	 0 1 2 3 4 5 6 7 8
	[1,2,7,6,5,4,3,8,9]
		minimum is 3
		minIndex = 6
	[1,2,3,6,5,4,7,8,9] --> 3rd Iteration
	
	 0 1 2 3 4 5 6 7 8
	[1,2,3,6,5,4,7,8,9] i = 3 to 8
		minimum is 4
		minIndex = 5
	 0 1 2 3 4 5 6 7 8
	[1,2,3,4,5,6,7,8,9]
	
	 0 1 2 3 4 5 6 7 8
	[1,2,3,4,5,6,7,8,9] i = 4 to 8

	...
	...
	... Same Index swapping


pseudo code

void selectionSort(int *arr){
	int n = sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n-1;i++){
		int minIndex = -1;
		int minElement = INT_MAX;
		for(int j = i;j<n;j++){
			if(minElement>arr[j]){
				minIndex = j;
				minElement = arr[j];
			}
		}
		swap(arr[i],arr[midIndex]);
	}
}

Time Complexity --> O(N^2)

Space Complexity --> O(1)

Current Code constraint is arr[n-1]<INT_MAX;

*/

/*
I am considering that my elements are positive


	Counting Sort
	[1,1,2,4,5,4,2,2,3] --> originalArray

int *frequencyArray = new int[maximumElementOfArray(5+1)];

for(int i=0;i<6;i++){
	frequencyArray[i] = 0;
}

/*
memset(frequencyArray, 0, sizeof(frequencyArray));
*
/

     0 1 2 3 4 5 
	[0,2,3,1,2,1]

int j = 0;

int i = 0;

while(i<6){
	while(frequencyArray[i]>0){
		originalArray[j] = i;
		j++;
		frequencyArray[i]--;
	}
	i++;
}

TimeComplexities --> O(MaxImumElementOfarray)
Space Comlexty --> O(MaxImumElementOfarray)


DrawBacks

1. Space Amount is quite large [1,1,2,4,5,4,2,2,1000000] worst 
2. Only for positive elements   

*/

i,j,K

0->j 0's area
j to i 1's area
k to end 2's area

i to k area -> hidder

while(i<=k){
	
}







