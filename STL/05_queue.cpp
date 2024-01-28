#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<int> queue;
    queue.push(1);
    queue.push(10);
    queue.push(3);
    queue.push(4);
    queue.push(5);

    queue.pop(); // it is deleted from front 

    cout<<queue.front()<<endl;

    cout<<queue.back()<<endl;

    cout<<queue.empty()<<endl;

    cout<<queue.size()<<endl;

    return 0;
}