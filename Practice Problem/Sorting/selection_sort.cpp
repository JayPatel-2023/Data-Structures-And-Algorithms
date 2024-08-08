#include<iostream>
#include<vector>

using namespace std;

void printArray(int v[],int n){

    cout << "Array : ";
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
        
    }
}

int* selectionSort(int v[],int n){
    for(int i = 0 ; i < n-1; i++){
        int minIndex = i;
        for(int j = i +1 ; j < n; j++){
            if(v[j] < v[minIndex]){
                minIndex = j;
            }
        }
        swap(v[i],v[minIndex]);
    }
    return v;
}
 
int main(){
    int v[] = {7,1,9,2,3,0};
    
    printArray(v,6);
    selectionSort(v,6);
    cout << endl;
    printArray(v,6);
    
    return 0;
}