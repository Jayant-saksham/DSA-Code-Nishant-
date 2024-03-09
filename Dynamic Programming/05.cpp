// link = https://www.geeksforgeeks.org/0-1-knapsack-problem-dp-10/


#include<iostream>
#include<vector>
using namespace std;

int zero_one_knapsack_max_profit(int W, int n , int wt[], int profit[]) {
    if(n == 0 || n == W) {
        return 0;
    }
    if(wt[n-1] > W) {
        return zero_one_knapsack_max_profit(W, n-1, wt, profit);
    }
    else {
        int ans1 = profit[n-1] +  zero_one_knapsack_max_profit(W - wt[n-1], n-1, wt, profit);
        int ans2 = zero_one_knapsack_max_profit(W, n-1, wt, profit);
        return max(ans1, ans2);
    }
}

int knapSackDP(int n, int W, int wt[], int profit[]) {
    int dp[1+W][1+n];
    for(int i=0;i<=W;i++) {
        dp[i][0] = 0;
    }
    for(int j=0;j<=n;j++) {
        dp[0][j] = 0;
    }
    for(int i=1;i<=W;i++) {
        for(int j=1;j<=n;j++) {
            if(i >= wt[i-1]) {
                dp[i][j] = max(dp[i][j-1], profit[i-1] + dp[i-wt[i-1]][j-1]);
            }
            else {
                dp[i][j] = dp[i][j-1];
            }
        }
    }
    return dp[W][n];
}

// Follow this 
int knapSack2(int n, int W, int wt[], int profit[]) {
    int dp[1+n][1+W];
    for(int i=0;i<=n;i++) {
        dp[i][0] = 0;
    }
    for(int j=0;j<=W;j++) {
        dp[0][j] = 0;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=W;j++) {
            if(j >= wt[i-1]) {
                dp[i][j] = max(dp[i-1][j], profit[i-1] + dp[i-1][j-wt[i-1]]);
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][W];
}

int main() {
    int profit[] = { 60, 100, 120 }; 
    int weight[] = { 10, 20, 30 }; 
    int W = 50; 
    int n = sizeof(profit) / sizeof(profit[0]); 
  
    cout << knapSack2(n, W, weight, profit) << endl; 
    return 0;
}