#include<iostream>
#include<vector>

using namespace std;

vector<string> numberOfWaysToReachAtBottomPrinting(int rows, int cols, int initRow, int initCol) {
    if(initRow == rows - 1 && initCol == cols - 1) {
        vector<string> base;
        base.push_back("");
        return base;
    }
    if(initRow >= rows) {
        vector<string> base;
        return base;
    }
    if(initCol >= cols) {
        vector<string> base;
        return base;
    }
   
    vector<string> ans1 = numberOfWaysToReachAtBottomPrinting(rows, cols, initRow+1, initCol);
    vector<string> ans2 = numberOfWaysToReachAtBottomPrinting(rows, cols, initRow, initCol+1);
    vector<string> ans;
    for(string str : ans1) {
        ans.push_back("r"+str);
    }
    for(string str : ans2) {
        ans.push_back("d"+str);
    }
    return ans;
}


int main() {
    int row, col;
    cin>>row>>col;

    vector<string> ans = numberOfWaysToReachAtBottomPrinting(row, col, 0, 0);
    for(string str : ans) {
        cout<<str<<endl;
    }

    return 0;
}

