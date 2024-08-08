#include<iostream>
#include<queue>
using namespace std;
 
int main(){
    queue<int> q;

    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);

    cout << "Size of queue : " << q.size() << endl;
    cout << "First element of queue : " << q.front() << endl;
    cout << "Last element of queue : " << q.back() << "" << endl;
    cout << "Queue is empty or not : " << q.empty() << endl;

    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}