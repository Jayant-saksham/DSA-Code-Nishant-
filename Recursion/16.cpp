// link = https://www.geeksforgeeks.org/number-of-ways-to-calculate-a-target-number-using-only-array-elements/

#include<iostream>
#include<vector>

using namespace std;

int targetSum(vector<int> v, int index, int current, int target) {
    if(current == target && index == v.size()) {
        return 1;
    }
    if(index >=v.size()) {
        return 0;
    }
    int possible1 = targetSum(v, index+1, current + v[index], target);
    int possible2 = targetSum(v, index+1, current - v[index], target);
    return possible1 + possible2;
}

int main() {
    vector<int> v;
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);
    v.push_back(1);

    int target = 3;
    cout<<targetSum(v, 0, 0, target)<<endl;

    return 0;
}

