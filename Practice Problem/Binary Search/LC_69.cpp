#include<iostream>
using namespace std;
 
int binarySearch(int x){
        if(x == 0 || x == 1) return x;
        int start = 0;
        int end = x;
        long long int ans = -1;
        long long int mid = start + ((end-start)/2);
        while(start <= end){
            long long int square = mid * mid;
             if(square == x){
                return mid;
            }
            if(square > x){
                end = mid - 1;
            }else{
                ans = mid;
                start = mid + 1;
            }
            mid = start + ((end-start)/2);
        }
        return ans;
}

double preciseSquareRoot(int x,int precision, int tempSol){
    double factor = 1;
    double ans = tempSol;
    for(int i = 0; i<precision; i++){
        factor /=10 ;
        for(double j = ans; j*j< x; j += factor){
            ans = j;
        }
    }
    return ans;
}

int main(){

    int intSol = binarySearch(37);    
    cout << "Square root of 37 is : " << preciseSquareRoot(37,3,intSol) << endl;
    
    return 0;
}