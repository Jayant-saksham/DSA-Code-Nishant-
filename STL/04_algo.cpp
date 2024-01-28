#include<iostream>
#include<algorithm>
using namespace std;
int main() {
    int A[] = {4,7,9,9,4,2,4,6,9,1};
    int n = sizeof(A) / sizeof(A[0]);
    // cout<<(*(A+4))<<endl;

    // if you print only A, it will give you address 
    // if you print *A, it will give you value (not address)

    sort(A , A+n);

    vector<int> v;
    v.push_back(1);
    v.push_back(67);
    v.push_back(7);
    v.push_back(670);
    v.push_back(3);
    v.push_back(0);
    sort(v.begin(), v.end());

    reverse(v.begin(), v.end());

    for(int i=0; i<v.size(); i++) {
        cout<<v[i]<<endl;
    }

    return 0;
}