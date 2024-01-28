#include<iostream>
#include<vector>

using namespace std;

int numberOfWaysToReachAtBottom(int rows, int colms, int initRow, int initCol) {
    if(initRow == rows - 1 && initCol == colms - 1) {
        return 1;
    }
    if(initRow >= rows) {
        return 0;
    }
    if(initCol >= colms) {
        return 0;
    }
    int ans1 = numberOfWaysToReachAtBottom(rows, colms, initRow+1, initCol);
    int ans2 = numberOfWaysToReachAtBottom(rows, colms, initRow,initCol+1);
    return ans1 + ans2;
}

int main() {
    int row, col;
    cin>>row>>col;

    cout<<numberOfWaysToReachAtBottom(row, col, 0, 0)<<endl;

    return 0;
}

