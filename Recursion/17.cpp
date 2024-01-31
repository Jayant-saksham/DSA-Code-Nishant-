// link = https://www.geeksforgeeks.org/write-a-c-program-to-print-all-permutations-of-a-given-string/

#include<iostream>
#include<vector>

using namespace std;
vector<string> getPermutation(string s) {
    if(s.empty()) {
        vector<string> base;
        base.push_back("");
        return base;
    }
    vector<string> ans;
    for(int i=0;i<s.size();i++) {
        char ch = s[i];
        string rem = s.substr(0, i) + s.substr(i+1);
        vector<string> smallAns = getPermutation(rem);
        for(string str: smallAns) {
            ans.push_back(ch + str);
        }    
    }
    return ans;
}

int main() {
    string s;
    cin>>s;
    vector<string> v = getPermutation(s);
    for(string str: v) {
        cout<<str<<endl;
    }

    return 0;
}

