// link = https://www.geeksforgeeks.org/partition-a-set-into-two-subsets-such-that-the-difference-of-subset-sums-is-minimum/

/*
S1 - S2 = min 
S1 + S2 = Total 
_________________ 

2S1 = min + total 
min = 2S1 - total 
*/

#include<iostream>
using namespace std;

int minimumDifference(int A[], int n) {
    int sum = 0;
    for(int i=0;i<n;i++) {
        sum += A[i];
    }
    int target = sum;
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
    int i = n;
    int s1 = 0;
    for(int j=(target/2);j<=target;j++) {
        if(dp[i][j] == true) {
            s1 = j;
            break;
        }
    }
    int minimum = 2*s1 - sum; 
    return minimum;
}
int main() {

    return 0;
}