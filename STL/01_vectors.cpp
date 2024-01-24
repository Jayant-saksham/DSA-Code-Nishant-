#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector <int>v;
    
    // Add
    v.push_back(5);
    v.push_back(10);
    v.push_back(30);
    // Arr = 5, 10, 30

    // Delete
    v.pop_back();

    // Size 
    int n = v.size();
    cout<<n<<endl;


    // Printing using for loop 
    for(int i=0;i<n;i++) {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    // Printing using while loop 
    n = v.size();
    int i = 0;
    while(i<n) {
        cout<<v[i]<<endl;
        i++;
    }

    // Extra - Important 
    for(auto i=v.begin();i!=v.end();i++) {
        cout<<(*i)<<endl;
    }
    // Here i is the pointer
    // v.begin() = it returns the pointer to the first element of vector 
    // v.end() = it returns the pointer to the last element of vector 


    // Questions
    
    // 1. Print the last element of the vector = cout<<*v.end()<<endl;
    // 2. Print the first element of the vector= cout<<*v.begin()<<endl;



    
    return 0;
}