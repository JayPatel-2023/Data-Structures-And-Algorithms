#include<iostream>
#include<utility>
using namespace std;

void reverseArray(int a[],int n){
    int start = 0;
    int end = n-1;
    while(start <= end){
        swap(a[start++],a[end--]);
    }
}
 
int main(){
    int a[] = {1,2,3,4,5};
    int size = sizeof(a)/sizeof(int);
    cout << "Array before reverse array : " << endl;
    for(int i:a){
        cout << i << " ";
        
    }
    cout << endl;

    reverseArray(a,size);

    cout << "Array after reverse array : " << endl;
    for(int i:a){
        cout << i << " ";
        
    }
    cout << endl;

    
    return 0;
}