
/*
Array is a data structure

it takes the memory in contiguous fashion


If I am taking about (32 bit) and normal compiler 64 bits

[]    []      [] 
4bytes 4bytes 4bytes

12bytes/4->3

2001 2002 2003 2004 2005 2006 (hexadecimal)


arr->size 3


arr[0 + 1]



at which block I have to shift that is 


base address of array + 1*4


1. Random access is easy and O(1)
2. It takes memory in a contiguous fashion
3. deletion is based upon requirements like if we are deleting from end it is constant operation otherwise it is O(n) operation
4. Means to expand the array is a constly operation O(n).

*/

int n;
cin>>n;

int arr[n]; 

int[] arr = new int[n]; // Java

If we declare it like this then it is going to be store in stack memory;

int arr[] = {1,2,3,4}

int *arr = new int[n]; // C++

delete arr; // destructor will be invoked

free(arr); //then descturor won't be invoked



int n,m;

int solve(int arr[][m]){

}

int n,m;
cin>>n>>m;

int arr[n][m];

solve(arr);


arr->*[memory location]


int **arr = new int*[n];
for(int i=0;i<n;i++){
	arr[i] = new int[m];
}


int solve(int **arr){
	int len = sizeof(arr)/sizeof(arr[0]);
}

solve(arr)


//3d array
//Templates in C++


C++ STL


#include<vector>

template typename<T>
class Vector{
	T data;
};

vector<int>v; currently size of v is zero

vector<vector<int> >v;



RAM
/*


*/


int n;
cin>>n;
for(int i=0;i<n;i++){
	//v[i] = something; like this it will throw error
	int x;
	cin>>x;
	v.push_back(x);
}




























