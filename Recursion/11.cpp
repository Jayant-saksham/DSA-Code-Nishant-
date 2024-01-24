#include<iostream>
#include<vector>
using namespace std;

vector<string> getSubsequences(string s) {
    if(s.size() == 0) {
        vector<string> base;
        base.push_back("");
        return base;
    }
    char ch = s[0];
    string smallString = s.substr(1);
    vector<string> smallAns = getSubsequences(smallString);  
    vector<string> ans;
    for(auto i = smallAns.begin(); i != smallAns.end();i++) {
        ans.push_back(ch + (*i));
        ans.push_back(*i);
    }
    return ans;
}

int main() {
    string s;
    cin>>s;

    vector<string> ans = getSubsequences(s);
    for(auto i = ans.begin();i != ans.end();i++) {
        cout<<(*i)<<endl;
    }
    return 0;
}