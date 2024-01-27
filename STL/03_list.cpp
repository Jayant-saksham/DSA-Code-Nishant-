#include<iostream>
#include<list>
using namespace std;
int main() {

    // Here list means linked list 
    // Linked list is favourite topic of various top companies including microsoft 

    list<int> list;

    list.push_front(1);
    list.push_back(2);
    list.push_front(3);

    list.pop_front();
    list.pop_back();


    cout<<list.empty()<<endl;

    cout<<list.front()<<endl;

    cout<<list.back()<<endl;


    return 0;
}