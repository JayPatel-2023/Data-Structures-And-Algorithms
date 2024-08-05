#include<iostream>
#include<vector>
using namespace std;

int peakIndexInMountainArray(vector<int>& v) {
        int start = 0;
        int end = v.size()-1;
        int mid = start + ((end-start)/2);
        while(start < end){
            if(v[mid] < v[mid+1]) start = mid + 1 ; 
            else end = mid; 

            mid = start + ((end-start)/2);
        }
        return start;
}
 
int main(){
    vector<int> v = {24,69,100,99,79,78,67,36,26,19};

    cout << "Peak Element at " << peakIndexInMountainArray(v) << endl;
    cout << "Peak Element is " << v[peakIndexInMountainArray(v)] << endl;
    
    return 0;
}