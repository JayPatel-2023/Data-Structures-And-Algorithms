#include<iostream>
#include<stack>
using namespace std;
 
int main(){
    stack<int> s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);

    cout<<"Size of stack : "<<s.size()<<endl;
    cout<<"Top element of stack : "<<s.top()<<endl;
    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
    
    return 0;
}