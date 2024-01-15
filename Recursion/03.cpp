#include<iostream>
using namespace std;

// Question - Print from n to 1 then 1 to n using recursion
// Example
// input n = 5, output = 5 4 3 2 1 2 3 4 5
// input n = 6, output = 6 5 4 3 2 1 2 3 4 5 6 

void printDecreasingIncreasing(int n) {
    if(n == 1) {
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    printDecreasingIncreasing(n-1);
    cout<<n<<endl;
}

int main() {
    printDecreasingIncreasing(6);
    return 0;
}