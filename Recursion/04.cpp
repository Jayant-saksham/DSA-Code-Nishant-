#include<iostream>
using namespace std;

// Question - a raise to the power b 
// 2^3 = 8
// 4^2 = 16

int power(int a, int b) {
    if(b == 0) {
        return 1;
    }
    int smallAns = power(a, b-1);
    int ans = smallAns * a;
    return ans;
}

int power2(int a, int b) {
    if(b == 0) {
        return 1;
    }
    int smallAns = power2(a, b/2);
    int ans = smallAns * smallAns;
    if(b%2!=0) {
        ans = ans * a;
    }
    return ans;
}

int main() {
    int ans = power2(2, 4);
    cout<<ans<<endl;
    return 0;
}