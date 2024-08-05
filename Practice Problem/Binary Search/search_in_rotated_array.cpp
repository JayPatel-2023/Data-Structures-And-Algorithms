#include<iostream>
#include<vector>
using namespace std;

int findMinimumPivot(vector<int> &v){
    int start = 0;
    int end = v.size() - 1;
    int mid = start + ((end-start)/2);

    while(start<end){
        if(v[mid] >= v[0]) start = mid + 1;
        else end = mid;

        mid = start + ((end-start)/2); 
    }
    return start;
}

int binarySearch(vector<int> &arr, int start, int end, int key){
    
    int mid  = start + ((end-start)/2);

    while(start<=end){
        if(arr[mid] == key){
            return mid;
        }else if(key > arr[mid]){
            start = mid +1;
        }else{
            end = mid - 1;
        }

        mid = start + ((end - start)/2);
    }
    return -1;
}
 
int main(){
    
    vector<int> v = {7,8,9,10,1,2,3};
    int key = 2;
    int index = -1;
    int pivot = findMinimumPivot(v);

    cout << "Pivot element at " << pivot << endl;
    cout << "Pivot element is " << v[findMinimumPivot(v)] << endl;

    if(key >= v[pivot] && key <= v[v.size()-1]){
        index = binarySearch(v,pivot,v.size()-1,key);
    }else{
        index = binarySearch(v,0,pivot-1,key);
    }

    cout << "Key found at " << index << endl;
    
    return 0;
}