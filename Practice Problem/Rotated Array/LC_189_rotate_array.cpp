#include<iostream>
#include<vector>
using namespace std;
 
 void rotate(vector<int>& nums, int k) {
    vector<int> temp(nums);
    for(int i = 0; i<nums.size(); i++){
        temp[(i+k) % nums.size() ] = nums[i];
    }
    nums = temp;
}
 
int main(){
    vector<int> v = {1,2,3,4,5,6,7};
    int k = 3;

    cout << "Original Array : " << endl;
    for(int i:v){
        cout << i << " ";
    }
    cout << endl;
    
    rotate(v,k);

    cout << "Rotated Array : " << endl;
    for(int i:v){
        cout << i << " ";
    }
    return 0;
}