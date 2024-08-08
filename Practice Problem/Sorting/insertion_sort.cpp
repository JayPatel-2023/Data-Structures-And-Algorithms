#include<iostream>
using namespace std;

void printArray(int v[],int n){

    cout << "Array : ";
    for(int i = 0; i < n; i++){
        cout << v[i] << " ";
        
    }
}

int* insertionSort(int v[],int n){
    for(int i = 1 ; i < n; i++){
        int temp = v[i];
        int j = i - 1;
        while(j>=0){
            if(v[j] > temp){
                v[j+1] = v[j];
                j--;
            }
            else break;

        }
        v[j+1] = temp;
    }
    return v;
}
 
int main(){
    int v[] = {7,1,9,2,3,0};
    
    printArray(v,6);
    insertionSort(v,6);
    cout << endl;
    printArray(v,6);

    return 0;
}