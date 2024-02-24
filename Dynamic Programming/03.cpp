// link = https://leetcode.com/problems/min-cost-climbing-stairs/description/


// Time Limit Exceeded = The solution is correct, but it is taking a lot of time
// The time duration is longer becuase of the recursion 
// And therefore we need to convert it into dp 


#include<iostream>
#include<vector>
using namespace std;


int minimumCost(vector<int> &cost, int i) {
    if(i == cost.size()-1) {
        return 0;
    }
    else if(i == cost.size() - 2) {
        return min(cost[i], cost[i+1]);
    }
    int ans1 = cost[i] + minimumCost(cost, i+1);
    int ans2 = cost[i+1]+ minimumCost(cost, i+2);
    return min(ans1, ans2);
}
int minCostClimbingStairs(vector<int>& cost) {
    return minimumCost(cost, 0);
}

int minimumCostDynamicProgramming(vector<int>& cost) {
    int n = cost.size();
    int dp[n];
    dp[n-1] = cost[n-1];
    dp[n-2] = cost[n-2];

    for(int i=(n-3);i<=0;i--) {
        dp[i] = cost[i] + min(dp[i+1], dp[i+2]);
    }
    return min(dp[0], dp[1]);
}
int main() {
    vector<int> cost;
    cost.push_back(10);
    cost.push_back(15);
    cost.push_back(20);

    cout<<minimumCostDynamicProgramming(cost)<<endl;

    return 0;
}