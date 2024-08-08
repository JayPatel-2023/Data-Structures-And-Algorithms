#include<iostream>
#include<vector>
using namespace std;
 
bool check(vector<int>& nums) {
    int cnt = 0;
    for(int i = 1; i <nums.size(); i++){
        if(nums[i-1] > nums[i]) cnt++;
    }
    if(nums[nums.size()-1] > nums[0]) cnt++;
    return cnt<=1;
}

int main(){
    vector<int> v = {1,2,3,4,5,6};
    vector<int> v2 = {4,5,1,2,3,6};
    vector<int> v3 = {4,5,6,1,2,3};
    cout << "Check if Array Is Sorted and Rotated : " << check(v) << endl;
    cout << "Check if Array Is Sorted and Rotated : " << check(v2) << endl;
    cout << "Check if Array Is Sorted and Rotated : " << check(v3) << endl;
    return 0;
}