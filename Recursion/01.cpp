#include<iostream>
using namespace std;

// Question - Print from 1 to n using recursion 
void printIncreasing(int n) {
    if(n == 1) {
        cout<<1<<endl;
        return;
    }
    printIncreasing(n-1);
    cout<<n<<endl;
}

int main() {
    printIncreasing(10);
    return 0;
}