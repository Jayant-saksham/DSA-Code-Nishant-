// link = https://www.geeksforgeeks.org/next-smaller-element/


#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> next_nearest_smaller_to_right(int A[], int n) {
    vector<int> v;
    stack<int> s;
    for(int i=(n-1);i>=0;i--) {
        if(s.empty()) {
            v.push_back(-1);
        }
        else if(!s.empty() && s.top()<A[i]) {
            v.push_back(s.top());
        }
        else if(!s.empty() && s.top()>=A[i]) {
            while(!s.empty() && s.top()>=A[i]) {
                s.pop();
            }
            if(s.empty()) {
                v.push_back(-1);
            }
            else {
                v.push_back(s.top());
            }
        }
        s.push(A[i]);
    }
    reverse(v.begin(), v.end());
    return v;
}

int main() {
    int arr[] = {4, 8, 5, 2, 25};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans = next_nearest_smaller_to_right(arr, n);
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}