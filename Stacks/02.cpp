// link = https://www.callicoder.com/nearest-greater-to-left/


#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> next_nearest_greater_to_left(int A[], int n) {
    vector<int> v;
    stack<int> s;
    for(int i=0;i<n;i++) {
        if(s.empty()) {
            v.push_back(-1);
        }
        else if(!s.empty() && s.top()>A[i]) {
            v.push_back(s.top());
        }
        else if(!s.empty() && s.top()<=A[i]) {
            while(!s.empty() && s.top()<A[i]) {
                s.pop();
            }
            if(!s.empty()) {
                v.push_back(s.top());
            }
            else {
                v.push_back(-1);
            }
        }
        s.push(A[i]);
    }
    return v;
}

int main() {
    int arr[] = { 11, 13, 21, 3 };
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<int> ans = next_nearest_greater_to_left(arr, n);
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<" ";
    }
    return 0;
}