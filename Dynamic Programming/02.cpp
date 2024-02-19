// link = https://leetcode.com/problems/climbing-stairs/description/
#include<iostream>
using namespace std;
int climbStairs(int n) {
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    for(int i=2;i<=n;i++) {
        dp[i] = dp[i-1] + dp[i-2];
    }
    return dp[n];
}

int climbStairs3jumps(int n) {
    int dp[n+1];
    dp[0] = 1;
    dp[1] = 1;
    dp[2] = 2;
    for(int i=3;i<=n;i++) {
        dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    }
    return dp[n];
}

int main() {
    int n = 5;
    vector<int> dp(n+1, -1);
    return 0;
}