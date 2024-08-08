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
    * * * *
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

    /*
    1
    2 3
    3 4 5  
    */
    cout << "Pattern 11" << endl;
    pattern11(5);
    cout << endl;

    /*
    1
    2 1
    3 2 1 
    */
    cout << "Pattern 12" << endl;
    pattern12(5);
    cout << endl;

    /*
    A A A
    B B B
    C C C
    */
    cout << "Pattern 13" << endl;
    pattern13(5);
    cout << endl;

    /*
    A A A
    B B B
    C C C
    */
    cout << "Pattern 14" << endl;
    pattern14(5);
    cout << endl;

    /*
    A B C
    A B C
    A B C
    */
    cout << "Pattern 15" << endl;
    pattern15(5);
    cout << endl;

    /*
    A B C
    A B C
    A B C
    */
    cout << "Pattern 16" << endl;
    pattern16(5);
    cout << endl;

    /*
    A B C
    D E F
    G H I
    */
    cout << "Pattern 17" << endl;
    pattern17(5);
    cout << endl;

    /*
    A B C
    B C D
    C D E
    */
    cout << "Pattern 18" << endl;
    pattern18(5);
    cout << endl;

    /*
    A 
    B B
    C C C
    */
    cout << "Pattern 19" << endl;
    pattern19(5);
    cout << endl;

    /*
    A
    B C
    C D E
    */
    cout << "Pattern 20" << endl;
    pattern20(5);
    cout << endl;

    /*
    A
    B C
    C D E
    */
    cout << "Pattern 21" << endl;
    pattern21(5);
    cout << endl;

    /*
    D
    C D
    B C D
    A B C D
    */
    cout << "Pattern 22" << endl;
    pattern22(5);
    cout << endl;

    /*
          *
        * *
      * * * 
    * * * * 
    */
    cout << "Pattern 23" << endl;
    pattern23(5);
    cout << endl;

    /*
    * * * *
    * * *
    * * 
    *  
    */
    cout << "Pattern 24" << endl;
    pattern24(5);
    cout << endl;

    /*
    * * * *
      * * *
        * * 
          *  
    */
    cout << "Pattern 25" << endl;
    pattern25(5);
    cout << endl;
    
    /*
    1 1 1 1
      2 2 2
        3 3
          4
    */
    cout << "Pattern 26" << endl;
    pattern26(5);
    cout << endl;

    /*
          1 
        2 2
      3 3 3
    4 4 4 4
    */
    cout << "Pattern 27" << endl;
    pattern27(5);
    cout << endl;

    /*
    1 2 3 4
      2 3 4
        3 4
          4
    */
    cout << "Pattern 28" << endl;
    pattern28(5);
    cout << endl;

    /*
          1
        2 3
      4 5 6
    6 7 8 9
    */
    cout << "Pattern 29" << endl;
    pattern29(5);
    cout << endl;

    /* 
          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
    */
    cout << "Pattern 30" << endl;
    pattern30(5);
    cout << endl;

    return 0;
}

