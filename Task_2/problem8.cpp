//8. Given an array of digits check if the array is palindrome or not.
#include <iostream>
using namespace std;
 
void palindrome(int arr[], int n)
{
    int flag = 0;
 
    for (int i = 0; i <= n / 2 && n != 0; i++) {
 
        if (arr[i] != arr[n - i - 1]) {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
        cout << "Not Palindrome";
    else
        cout << "Palindrome";
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
 
    palindrome(arr, n);
    return 0;
}