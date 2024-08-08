#include<iostream>
#include<set>
using namespace std;
 
int main(){

    set<int> s;

    s.insert(1);
    s.insert(1);
    s.insert(1);
    s.insert(2);
    s.insert(3);    
    s.insert(4);

    cout << "Set size : " << s.size() << endl;
    for(int i:s){
        cout << i << " ";
    }
    cout << endl;

    cout << "Set is empty or not : " << s.empty() << endl;
    
    return 0;
}