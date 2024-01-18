#include<iostream>
using namespace std;

// link = https://www.geeksforgeeks.org/write-a-program-to-reverse-an-array-or-string/

void reverse(int *A, int n) {
    int start = 0;
    int end = n-1;
    while(end > start) {
        swap(A[start], A[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6}; 
    int n = sizeof(arr)/sizeof(arr[0]);
    reverse(arr, n);

    return 0;
}

// Only arr means address of 1,
// so here arr is storing the address, and we are passing that address to reverse function. 
// pointer varible is taking address in itself. 