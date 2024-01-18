#include<iostream>
using namespace std;

// Question = First index 
// Find the 'index' where you got the element first time 
// ex = {2,3,6,4,1,8,4,0,2,4,7,5,0,1,3}; key = 3, ans = 1

int firstIndex(int A[], int n, int key, int index) {
    if(index == n) {
        return -1;
    }
    if(A[index] == key) {
        return index;
    }
    int ans1 = firstIndex(A, n, key, index+1);
    return ans1;
}


int main() {
    int A[] = {2,3,6,4,1,8,4,0,2,4,7,5,0,1,3};
    int n = sizeof(A) / sizeof(A[0]);
    int key = 3;
    cout<<firstIndex(A, n, key, 0)<<endl;
    return 0;
}