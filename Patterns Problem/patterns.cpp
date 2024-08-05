#include<iostream>
#include "patterns.h"
using namespace std;

int main(){
     /*
    1 2 3 
    1 2 3 
    1 2 3
    */
    cout<<"Pattern 1 "<<endl;
    pattern1(5);
    cout<<endl;
    
     /*
    3 2 1 
    3 2 1
    3 2 1 
    */
    cout << "Pattern 2 " << endl;
    pattern2(5);
    cout << endl;

    /*
    1 2 3 
    1 2  
    1 
    */
    cout << "Pattern 3 " << endl;
    pattern3(5);
    cout << endl;

    /*
    3 2 1
    3 2  
    3 
    */
    cout << "Pattern 4 " << endl;
    pattern4(5);
    cout << endl;

     /*
    1 2 3
    4 5 6
    7 8 9
    */
    cout << "Pattern 5" << endl;
    pattern5(5);
    cout << endl;

    /*
    1 1 1
    2 2 2
    3 3 3    
    */
    cout << "Pattern 6" << endl;
    pattern6(5);
    cout << endl;

    /*
     1 1 1
     2 2
     3
    */
    cout << "Pattern 7" << endl;
    pattern7(5);
    cout << endl;

    /*
    * 
    * * 
    * * * 
    */
    cout << "Pattern 8" << endl;
    pattern8(5);
    cout << endl;

    /*
    1
    2 2
    3 3 3
    */
    cout << "Pattern 9" << endl;
    pattern9(5);
    cout << endl;

    /*
    1
    2 3
    4 5 6
    */
    cout << "Pattern 10" << endl;
    pattern10(5);
    cout << endl;

    return 0;
}

