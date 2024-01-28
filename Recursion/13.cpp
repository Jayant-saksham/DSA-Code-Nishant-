#include<iostream>
#include<vector>

using namespace std;
vector<string> keypadCombination(string s, string codes[]) {
    if(s.empty()) {
        vector<string> base;
        base.push_back("");
        return base;
    }
    char ch = s[0];
    string rem = s.substr(1);
    vector<string> smallAnswer = keypadCombination(rem, codes);
    vector<string> ans;
    string target = codes[ch - '0'];
    for(int i=0;i<target.size();i++) {
        char c = target[i];
        for(int j=0;j<smallAnswer.size();j++) {
            ans.push_back(c + smallAnswer[j]);
        }
    }
    return ans;
}

int main() {
    string s;
    cin>>s;
    string codes[] = {
        "",     // 0 index
        "",     // 1 index
        "abc",  // 2 index
        "def",  // 3 index
        "ghi",  // 4 index
        "jkl",  // 5 index
        "mno",  // 6 index
        "pqrs", // 7 index
        "tuv",  // 8 index
        "wxyz"  // 9 index
    };

    vector<string> ans = keypadCombination(s, codes);
    for(int i=0;i<ans.size();i++) {
        cout<<ans[i]<<endl;
    }
    return 0;
}

// link = https://www.geeksforgeeks.org/find-possible-words-phone-digits/
// This is facebook question 

// Learning = recursion call at the last, first extract the items that you need
