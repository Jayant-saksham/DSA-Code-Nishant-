#include<iostream>
#include<queue>
using namespace std;
int main() {
    priority_queue<int> pq; //  Here on the top, the greatest element will be present
    priority_queue <int, vector<int>, greater<int>> min_heap; // here on the top, smallest element will be present

    pq.push(3);
    pq.push(2);
    pq.push(1);

    cout<<pq.top()<<endl;

    pq.pop();
    // The deletion will be of the top element not of the first element 

    cout<<pq.top()<<endl;

    return 0;
}

// Priority queue is also called as "Max heap"
// Min heap
