#include<iostream>
#include<vector>
using namespace std;

void moveZeroes(vector<int>& nums) {
    int i = 0;
    for(int j=0; j < nums.size(); j++){
        if(nums[j] != 0) swap(nums[j],nums[i++]);
    }
}
 
int main(){
    vector<int> v = {0,1,0,3,12,0,5,6,0};
    
    cout << "UnSorted Array : " << endl;
    for(int i:v){
        cout << i << " ";   
    }
    cout << endl;

    moveZeroes(v);


    cout << "Sorted Array : " << endl;
    for(int i:v){
        cout << i << " ";
    }
    return 0;
}