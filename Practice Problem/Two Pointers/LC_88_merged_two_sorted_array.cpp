#include<iostream>
#include<vector>
using namespace std;

void merge(vector<int>& v1, int m, vector<int>& v2, int n) {
        int l=0, r=0;
        vector<int> ans = v1;
        int i = 0;
        while(l<m && r<n){
            if(ans[l] < v2[r]) v1[i] = ans[l++]; 
            else v1[i] = v2[r++];
            ++i;
        }
        
        for(int j=l; j<m; j++){
            v1[i++] = ans[j];
        }

        for(int j=r; j<n; j++){
            v1[i++] = v2[j];
        }
        
    }
 
int main(){

    vector<int> v1 =  {1,2,3,0,0,0};
    vector<int> v2 = {2,5,6};
    int m = 3;
    int n = 3;

    merge(v1,m,v2,n);
    
    cout << "Merged Array : " << endl;
    for(int i:v1){
        cout << i << " ";
        
    }
    
    return 0;
}