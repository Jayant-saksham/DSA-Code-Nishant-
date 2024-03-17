// link = https://www.geeksforgeeks.org/problems/subset-sum-problem2014/1

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
    for(int i=1;i<=n;i++)  {
        for(int j=0;j<=target;j++) {
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

bool equalSumPartition(int A[], int n){
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += A[i];
    }
    if(sum%2 == 0) {
        int target = sum/2;
        return target_sum(A, n, target);
    }
    return false;
}

int main() {
    int A[] = {1, 5, 11, 5};
    int n = 4;
    cout<<equalSumPartition(A, n)<<endl;
    return 0;
}