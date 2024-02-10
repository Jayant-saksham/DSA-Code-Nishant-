// link = https://www.geeksforgeeks.org/the-stock-span-problem/

#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;
vector<int> stock_span(vector<int> v) {
    stack<pair<int,int> > s;
    vector<int> ans;
    int n = v.size();
    for(int i=0;i<n;i++) {
        if(s.empty()) {
            ans.push_back(-1);
        }
        else if(!s.empty() && s.top().first > v[i]) {
            ans.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first< v[i]) {
            while(!s.empty() && s.top().first <= v[i]) {
                s.pop();
            }
            if(s.empty()) {
                ans.push_back(-1);
            }
            else {
                ans.push_back(s.top().second);
            }
        }
        s.push(make_pair(v[i], i));
    }
    for(int i=0;i<n;i++) {
            ans[i] = i - ans[i];
    }
   return ans;
}

int main() {
    vector<int> v;
    v.push_back(10);
    v.push_back(4);
    v.push_back(5);
    v.push_back(90);
    v.push_back(120);
    v.push_back(80);

    vector<int> ans = stock_span(v);
    for(int i : ans) {
        cout<<i<<endl;
    }
    return 0;
}