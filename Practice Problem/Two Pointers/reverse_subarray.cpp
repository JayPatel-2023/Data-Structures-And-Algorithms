#include<iostream>
#include<utility>
using namespace std;

void reverseArray(int a[], int start, int end){
    while(start <= end){
        swap(a[start++],a[end--]);
    }
}
 
int main(){
    int a[] = {1,2,3,4,5,6,7,8,9,10};
    int size = sizeof(a)/sizeof(int);
    cout << "Array before reverse array : " << endl;
    for(int i:a){
        cout << i << " ";
        
    }
    cout << endl;

    reverseArray(a,2,6);

    cout << "Array after reverse array : " << endl;
    for(int i:a){
        cout << i << " ";
        
    }
    cout << endl;

    
    return 0;
}