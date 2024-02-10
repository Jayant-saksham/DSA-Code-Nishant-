// link = https://www.geeksforgeeks.org/largest-rectangular-area-in-a-histogram-using-stack/

#include<iostream>
#include<stack>
#include<algorithm>
#include<vector>
using namespace std;

vector<int> NNSL(vector<int> v) {
    stack<pair<int,int> > s;
    vector<int> ans;
    int n = v.size();
    for(int i=0;i<n;i++) {
        if(s.empty()) {
            ans.push_back(-1);
        }
        else if(!s.empty() && s.top().first < v[i]) {
            ans.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first > v[i]) {
            while(!s.empty() && s.top().first >= v[i]) {
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
    return ans;
}

vector<int> NNSR(vector<int> v) {
    stack<pair<int,int> > s;
    vector<int> ans;
    int n = v.size();
    for(int i=(n-1);i>=0;i--) {
        if(s.empty()) {
            ans.push_back(-1);
        }
        else if(!s.empty() && s.top().first < v[i]) {
            ans.push_back(s.top().second);
        }
        else if(!s.empty() && s.top().first > v[i]) {
            while(!s.empty() && s.top().first >= v[i]) {
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
    reverse(ans.begin(), ans.end());
    return ans;
}

int max_area(vector<int> v) {
    vector<int> nnsl = NNSL(v);
    vector<int> nnsr = NNSR(v);

    int max_area = 0;

    int n = nnsl.size();
    for(int i=0;i<n;i++) {
        int w = nnsr[i] - nnsl[i]- 1;
        int height = v[i];
        int area = height * w;  
        max_area = max(area, max_area);
    }
    
    return max_area;
}
int main() {
    vector<int> v;

    v.push_back(6);
    v.push_back(2);
    v.push_back(5);
    v.push_back(4);
    v.push_back(5);
    v.push_back(1);
    v.push_back(6);

    cout<<max_area(v);
    return 0;
}