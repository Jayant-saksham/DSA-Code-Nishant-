// link = https://www.geeksforgeeks.org/count-of-subsets-with-sum-equal-to-x/

// include + in place of || to make the count
// agar counting krni hai to use +, aur agar srif batana hai ki true ya flase to use || 

#include<iostream>
using namespace std;
int target_sum(int A[], int n, int target) {
    int dp[1+n][1+target];
    for(int j=0;j<=target;j++) {
        dp[0][j] = 0;
    }
    for(int i=0;i<=n;i++) {
        dp[i][0] = 1;
    }
    for(int i=1;i<=n;i++)  {
        for(int j=0;j<=target;j++) {
            if(j>=A[i-1]) {
                dp[i][j] = dp[i-1][j-A[i-1]] + dp[i-1][j];
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][target];
}

int main() {
    int A[] = {1, 5, 11, 5};
    int n = 4;
    return 0;
}