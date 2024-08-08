#include<iostream>
#include<list>
using namespace std;
 
int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);
    l.push_back(3);
    l.push_front(4);

    cout << "List size : " << l.size() << "" << endl;
    for(int i:l){
        cout << i << " ";   
    }
    cout << endl;

    cout << "List is empty or not : " << l.empty() << endl;
    cout << "Pop element from list front : " << endl;
    cout << "Pop element from list back : " << endl;
    l.pop_front();
    l.pop_back();

    cout << "List size : " << l.size() << "" << endl;
    for(int i:l){
        cout << i << " ";   
    }
    cout << endl;

    cout << "List Front and Back element : " << l.front() << " " << l.back() << endl;
    
    l.erase(l.begin(),l.end());
    cout << "List size : " << l.size() << "" << endl;
    for(int i:l){
        cout << i << " ";   
    }
    cout << endl;
    
    return 0;
}