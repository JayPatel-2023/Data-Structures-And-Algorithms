#include<iostream>
#include<utility>
using namespace std;

void printArray(int v[],int n){

    cout << "Array : ";
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
        
    }
}

int* bubbleSort(int v[],int n){
    for(int i = 0 ; i < n-1; i++){
        bool isSwap = false;
        for(int j = 0 ; j < n-i ; j++){
            if(v[j] > v[j+1]){
                swap(v[j],v[j+1]);
                isSwap = true;
            }
        }
        if(isSwap == false) break;
    }
    return v;
}
 
int main(){
    int v[] = {7,1,9,2,3,0};
    
    printArray(v,6);
    bubbleSort(v,6);
    cout << endl;
    printArray(v,6);

    return 0;
}