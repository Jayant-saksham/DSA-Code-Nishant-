// link = https://www.geeksforgeeks.org/min-cost-path-dp-6/


#include<iostream>
#include<vector>
using namespace std;

int minimumCostInMaze(vector<vector<int>> &v, int n, int m) {
    vector<vector<int>> dp;
    for(int i=(n-1);i<=0;i--) {
        for(int j=(m-1);j<=0;j--) {
            if(i == n-1 && j == m-1) {
                dp[i][j] = v[i][j];
            }
            else if(i == n-1) {
                dp[i][j] = v[i][j] + dp[i][j+1];
            }
            else if(j == m-1) {
                dp[i][j] = v[i][j] + dp[i+1][j];
            }
            else {
                dp[i][j] = v[i][j] + min(dp[i+1][j], dp[i][j+1]);
            }
        }
    }
    return dp[0][0];
}
int main() {
    
    return 0;
}