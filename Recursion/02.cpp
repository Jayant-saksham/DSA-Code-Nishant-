#include<iostream>
using namespace std;

// Question - Print from n to 1 using recursion 
void printDecreasing(int n) {
    if(n == 1) {
        cout<<1<<endl;
        return;
    }
    cout<<n<<endl;
    printDecreasing(n-1);
}

int main() {
    printDecreasing(10);
    return 0;
}