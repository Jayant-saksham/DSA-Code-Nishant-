#include<iostream>
using namespace std;

int fib(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    return fib(n-1) + fib(n-2);
}

int fib_dp(int n, vector<int> &dp) {
    if(n == 0 | n == 1) {
        return n;
    }
    if(dp[n]!=-1) {
        return dp[n];
    }

    int fib1 = fib_dp(n-1, dp);
    int fib2 = fib_dp(n-2, dp);
    int ans = fib1 + fib2;
    dp[n] = ans;
    return ans;
}

int fib2(int n)  {
    int dp[n+1];
    dp[0] = 0;
    dp[1] = 1;
    for(int i=2;i<=n;i++) {
        dp[n] = dp[n-1] + dp[n-2];
    }
    return dp[n];
}

int main() {
    int n = 5;
    vector<int> dp(n+1, -1);
    return 0;
}