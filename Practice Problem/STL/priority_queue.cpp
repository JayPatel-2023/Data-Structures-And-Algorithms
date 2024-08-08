#include<iostream>
#include<queue>
using namespace std;
 
int main(){

    priority_queue<int> pq;
    priority_queue<int, vector<int>, greater<int>> minPQ; 

    pq.push(10);
    pq.push(40);
    pq.push(50);
    pq.push(30);
    pq.push(20);
   
    cout << "Size of priority queue : " << pq.size() << endl;
    cout << "Top element of priority queue : " << pq.top() << endl;
    while(!pq.empty()){
        cout << pq.top() << " ";
        pq.pop();
    }
    cout << endl;   

    minPQ.push(10);
    minPQ.push(40);
    minPQ.push(50);
    minPQ.push(30);
    minPQ.push(20);
   
    cout << "Size of min priority queue : " << minPQ.size() << endl;
    cout << "Top element of min priority queue : " << minPQ.top() << endl;
    while(!minPQ.empty()){
        cout << minPQ.top() << " ";
        minPQ.pop();
    }
    cout << endl;

    return 0;
}