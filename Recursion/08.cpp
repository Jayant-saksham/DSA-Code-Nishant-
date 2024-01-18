#include<iostream>
using namespace std;

// Question = You will be given n, You have to give nth fibonaaci number 
// 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...
// input n = 1, ans = 0
// n = 2, ans = 2 
// n = 3, ans = 2 


int fibonaaci(int n) {
    if(n == 1) {
        return 0;
    }
    if(n == 2) {
        return 1;
    }
    int ans = fibonaaci(n-1) + fibonaaci(n-2);
    return ans;
}


int main() {
    int n = 9;
    cout<<fibonaaci(n)<<endl;
    return 0;
}