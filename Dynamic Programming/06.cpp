// link = https://www.geeksforgeeks.org/subset-sum-problem-dp-25/

#include<iostream>
using namespace std;

bool target_sum(int A[], int n, int target) {
    bool dp[1+n][1+target];
    for(int j=0;j<=target;j++) {
        dp[0][j] = false;
    }
    for(int i=0;i<=n;i++) {
        dp[i][0] = true;
    }
    for(int i=1;i<=n;i++) {
        for(int j=1;j<=target;j++) {
            if(j>=A[i-1]) { 
                dp[i][j] = dp[i-1][j-A[i-1]] || dp[i-1][j];
            }
            else {
                dp[i][j] = dp[i-1][j];
            }
        }
    }
    return dp[n][target];
}

int main() {
    int A[] = {3, 34, 4, 12, 5, 2};
    int sum = 9;
    int n = sizeof(A)/sizeof(A[0]);
    cout<<target_sum(A, n, sum)<<endl;

    return 0;
}