#include<iostream>
using namespace std;

// Question = Last index 
// Find the 'index' where you got the element last time 
// ex = {2,3,6,4,1,8,4,0,2,4,7,5,0,1,3}; key = 3, 

int lastIndex(int A[], int n, int key, int index) {
    if(index < 0) {
        return -1;
    }
    if(A[index] == key) {
        return index;
    }
    int ans1 = lastIndex(A, n, key, index-1);
    return ans1;
}


int main() {
    int A[] = {2,3,6,4,1,8,4,0,2,4,7,5,0,1,3};
    int n = sizeof(A) / sizeof(A[0]);
    int key = 3;
    cout<<lastIndex(A, n, key, n-1)<<endl;
    return 0;
}