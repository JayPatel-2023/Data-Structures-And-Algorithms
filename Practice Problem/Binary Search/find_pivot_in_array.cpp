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

int findMaximumPivot(vector<int> &v){
    int start = 0;
    int end = v.size() -1;
    int mid = start + ((end-start)/2);
    while(start<end){
       if (v[mid] > v[end]) {
            end = mid;
        } else {
            start = mid + 1 ;
        }
        mid = start + ((end-start)/2); 
    }
    return mid;
}
 
int main(){
    vector<int> v = {7,8,9,10,1,2,3};

    cout << "Min. Pivot element at " << findMinimumPivot(v) << endl;
    cout << "Min. Pivot element is " << v[findMinimumPivot(v)] << endl;

    cout << "Max. Pivot element at " << findMaximumPivot(v) << endl;
    cout << "Max. Pivot element is " << v[findMaximumPivot(v)]<< endl;
    
    return 0;
}