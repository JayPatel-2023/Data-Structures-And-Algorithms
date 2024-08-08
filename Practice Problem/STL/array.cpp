#include<iostream>
#include<array>
using namespace std;
 
int main(){
    array<int,5> a = {1,2,3,4,5};

    cout << "Size of Array : " << a.size() << endl;
    cout << "Access element by index at 2 : " << a[2] << endl;
    cout << "Access element by index at 2 using at() : " << a.at(2) << endl;
    cout << "Array is empty or not : " << a.empty() << endl;
    cout << "First element of array using front() : " << a.front() << endl;
    cout << "Last element of array using back() : " << a.back() << endl;
     
    return 0;
}