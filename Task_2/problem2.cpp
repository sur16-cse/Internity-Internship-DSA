//Reverse the array
#include <iostream>
using namespace std;

int main() {
	int a[7]={34,56,67,98,90,45,90};
    int n= sizeof(a)/sizeof(int);
    cout<<"reverse the array:-"<<endl;
    for(int i=n-1;i>=0;i--){
    cout<<a[i]<<" ";
    }
	return 0;
}