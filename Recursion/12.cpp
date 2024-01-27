#include<iostream>
#include<vector>
using namespace std;

// Either 1 or 2 steps
int climbStairs(int stairs) {
    if(stairs < 0) {
        return 0;
    }
    if(stairs == 1 || stairs == 0) {
        return 1;
    }
    int ans1 = climbStairs(stairs-1);
    int ans2 = climbStairs(stairs-2);
    return ans1 + ans2;
}

vector<string> climbStairPath(int stairs) {
    if(stairs == 0) {
        vector<string> base;
        base.push_back("");
        return base;
    }
    else if(stairs < 0) {
        vector<string> base;
        return base;
    }
    vector<string> ans1 = climbStairPath(stairs-1);
    vector<string> ans2 = climbStairPath(stairs-2);
    vector<string> ans;
    for(auto i = ans1.begin(); i != ans1.end();i++) {
        ans.push_back("1 " + (*i));
    }
    for(auto i = ans2.begin(); i != ans2.end();i++) {
        ans.push_back("2 " + (*i));
    }
    return ans;
}


int main() {
    int n = 3;
    vector<string> v = climbStairPath(9);
    for(auto i = v.begin(); i != v.end();i++) {
        cout<< (*i)<< endl;
    }
    return 0;
}


// link = https://www.geeksforgeeks.org/count-ways-reach-nth-stair/


// Learning = If you want to make a sum and you have constraints to use 
// only 1 and 2, then use this question concept. 
// ex - Cricket, coin, balls, 