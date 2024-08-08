#include<iostream>
#include<vector>
using namespace std;
 
int main(){
    vector<int> v = {1,2,3,4,5};
    vector<int> v2(5,1);
    vector<int> v3(v2);
    
    cout << "Vector size : " << v.size() << endl;
    cout << "Vector capcity : " << v.capacity() << endl;
    cout << "Add element in vector : " << endl;
    v.push_back(6);

    cout << "Vector size : " << v.size() << endl;
    cout << "Access element by index at 5 using at() " << v.at(5) << endl;
    cout << "First element of vector using front() : " << v.front() << endl;
    cout << "Last element of vector using back() : " << v.back() << endl;
    cout << "Remove last Element from vector " << endl;
    v.pop_back();

    cout << "Last element of vector using back() : " << v.back() << endl;
    cout << "Remove all element from vector using clear() : " << endl;
    v.clear();

    cout << "Print vector using loop : " << v.size() << endl;
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;
    
    cout << "Print vector v2 using loop : " << v2.size() << endl;
    for(int i:v2){
        cout << i << " ";
    }
    cout << endl;

    cout << "Print vector v3 using loop : " << v3.size() << endl;
    for(int i:v3){
        cout << i << " ";
    }
    cout << endl;
    
    
    return 0;
}