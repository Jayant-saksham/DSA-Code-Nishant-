#include<iostream>
using namespace std;

// Question = Factorial of n using recursion
// ex = n = 4, ans = 4 x 3 x 2 x 1 = 24
// n = 5,  ans = 120 

int factorial(int n) {
    if(n == 0 || n == 1) {
        return 1;
    }
    int smallAnswer = factorial(n-1);
    return n * smallAnswer;
}

int main() {
    int n = factorial(5);
    cout<<n<<endl;
    return 0;
}