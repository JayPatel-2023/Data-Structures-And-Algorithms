#include<iostream>
using namespace std;

int binarySearch(int arr[], int size, int key){
    int start = 0;
    int end = size - 1;

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
    
    int even[] = {2,4,6,8,12,18};
    int odd[] = {3,8,11,14,16};

    cout<< "Index for key 12 : " << binarySearch(even,6,12) << endl;
    cout<< "Index for key 3 : " << binarySearch(odd,5,3);

    return 0;
}

