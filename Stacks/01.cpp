// link = https://www.geeksforgeeks.org/next-greater-element/

#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> next_nearest_greater_to_right(int A[], int n) {
    vector<int> ans;
    stack<int> s;
    for(int i=(n-1);i>=0;i--) {
        if(s.empty()) {
            ans.push_back(-1);
        }
        else if(!s.empty() && s.top()>A[i]) {
            ans.push_back(s.top());
        }
        else if(!s.empty() && s.top()<A[i]) {
            while(!s.empty() && s.top()<=A[i]) {
                s.pop();
            }
            if(!s.empty()) {
                ans.push_back(s.top());
            }
            else {
                ans.push_back(-1);
            }
        }
        s.push(A[i]);
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int arr[] = { 11, 13, 21, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans = next_nearest_greater_to_right(arr, n);
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}