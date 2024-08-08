#include<iostream>
#include<deque>
using namespace std;
 
int main(){
    deque<int> d;

    cout << "Deque size : " << d.size() << endl;
    
    d.push_back(10);
    d.push_front(20);

    cout << "Print Deque using loop : " << d.size() << endl;
    for(int i:d){
        cout << i << " ";
        
    }
    cout << endl;

    cout << "First element of deque using front() : " << d.front() << endl;
    cout << "Last element of deque using back() : " << d.back() << endl;
    cout << "Access element by index at 1 using at() : " << d.at(1) << endl;
    cout << "Deque is empty or not : " << d.empty() << endl;
    cout << "Erase deque : " << endl;
    d.erase(d.begin(),d.end());

    cout << "Print Deque using loop : " << d.size() << endl;
    for(int i:d){
        cout << i << " ";
        
    }
    cout << endl;

    return 0;
}