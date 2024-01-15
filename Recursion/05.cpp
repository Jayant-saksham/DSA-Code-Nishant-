#include<iostream>
using namespace std;

// Question - Print the array using recursion
void printArray(int A[], int n) {
    if(n == 0) {
        return;
    }
    if(n == 1) {
        cout<<A[0]<<" ";
        return;
    }
    printArray(A, n-1);
    cout<<A[n-1]<<" ";
}


int main() {
    int A[] = {1,3,5,7,4,3,7,8,8,7,5,3,2};
    int n = sizeof(A) / sizeof(A[0]);
    printArray(A, n);
    return 0;
}