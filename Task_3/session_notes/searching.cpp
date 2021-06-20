/*
What is searching 

Searching is something in which we have to search something.

Larger the search space more is the search time.


1. Linear Search
2. Binary Search (Having limitation)
3. ternary Search (Having limitation)
4. K-d Search (Having limitation) (difficult to implement)
*/


// Lets take an example of array

/* Linear Search

int ele = 4

[1,2,4,5,6,3,4] // Have to search 4 in this array

what is the worst case O(N)

when we are getting the desired element in last of array 


Best Case O(1)

Got the element in first hit.
*/


/*
Binary Search 

My data should be in sorted order


ele = 7 I have to search 

 0  1  2  3  4  5  6
[1, 2, 3, 4, 5, 6, 7] array is 0 based indexed

l = 0
h = 6

int mid = l + (h-l)/2 = 0 + 3 = 3;

while(l<=h)

	4<ele

	l = 4, h = 6

	mid = 4 + (6-4)/2 = 4 + 1 = 5 
	arr[5] = 6

	arr[mid = 5] <ele

	l = 6, h = 6
	mid = 6 + 0/2 = 6
	arr[mid] = 7 and I will return from here.

Worst Case--> couldn't find element in an array
n
n/2
n/4
n/8
.....
Time Complexity
O(log2(N))


Space Complexity
O(1)

*/


/*
	Ternary Search array should be sorted in this also

ele = 7 I have to search 

 0  1  2  3  4  5  6
[1, 2, 3, 4, 5, 6, 7] array is 0 based indexed

l = 0;
h = 6;

while(l<=h){

	int mid1 = l + (h-l)/3;
	int mid2 = r - (h-l)/3;

	if(arr[mid1]==ele)
		return mid1;
	if(arr[mid2]==ele)
		return mid2;

	if(ele<arr[mid1])
		h = mid1 -1;

	else if(ele>arr[mid2])
		l = mid2 + 1
	else{
		l = mid1 + 1;
		h = mid2 -1;
}
return -1;


Time Comlexity of this
N
N/3
N/9
N/3^3
O(log3(N))

Space complexity 
O(1)
*/



/*
	Why to use binary search more than ternary search or N-d search
*/


/*
int **arr = new int*[n];
for(int i=0;i<n;i++)
	arr[i] = new int[m];
*/

/*
find the index of non repeated element in given array
array is sorted

O(N) --> XOR
O(N) --> in case of comparision

expected log2(N)
[1, 1, 2, 2, 3, 3, 4, 5, 5, 6, 6, 7, 7] 

*/






