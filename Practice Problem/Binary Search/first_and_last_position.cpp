#include<iostream>
using namespace std;

int firstPosition(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int pos = -1;
    int mid = start + ((end-start)/2);

    while (start<=end){
        if(arr[mid] == key){
            pos = mid;
            end = mid-1;
        }else if(key > arr[mid]){
            start = mid + 1;
        }else{
            end = mid-1;
        }
        mid = start + ((end-start)/2);
    }
    return pos;
}

int lastPosition(int arr[], int size, int key){
    int start = 0;
    int end = size-1;
    int pos = -1;
    int mid = start + ((end-start)/2);

    while(start<=end){
        if(arr[mid] == key){
            pos = mid;
            start = mid+1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }else{
            end = mid-1;
        }
        mid = start + ((end-start)/2);
    }
    return pos;
}
 
int main(){
    int arr[] = {1,2,3,3,3,5};
    pair<int,int> p;
    p.first = firstPosition(arr,6,3);
    p.second = lastPosition(arr,6,3);

    cout << "First index is " << p.first << endl;
    cout << "Last index is " << p.second << endl;

    return 0;
}