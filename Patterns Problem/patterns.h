#include<iostream>
using namespace std;

void pattern1(int n){
   
   int i = 1;
   while(i<=n){
        int j = 1;
        while (j<=n){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
   }
}

void pattern2(int n){
   int i = 1;
   while(i <= n){
        int j = n;
        while(j){
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
   }
}

void pattern3(int n){
   int i  = 1;
   while(i<=n){
        int j = 1;
        while(j <= n-i+1){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern4(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j <= n-i+1){
            cout << n-j+1 << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern5(int n){
    int i = 1;
    int cnt = 1;
    while(i<=n){
        int j = 1;
        while(j <= n){
            cout << cnt++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern6(int n){
   int i = 1;
   while(i<=n){
        int j = 1;
        while(j<=n){
            cout << i << " ";
            j++;            
        }
        cout << endl;
        i++;
   }
}

void pattern7(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j <= (n-i+1)){
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern8(int n){ 
   int i = 1;
   while(i<=n){
        int j = 1;
        while(j<=i){
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
   }
}

void pattern9(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern10(int n){
    int i = 1;
    int cnt = 1;
    while (i<=n){
        int j = 1;
        while(j<=i){
            cout << cnt++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern11(int n){}

void pattern12(int n){}

void pattern13(int n){}

void pattern14(int n){}

void pattern15(int n){}

void pattern16(int n){}

void pattern17(int n){}

void pattern18(int n){}

void pattern19(int n){}

void pattern20(int n){}

void pattern21(int n){}

void pattern22(int n){}

void pattern23(int n){}

void pattern24(int n){}

void pattern25(int n){}

void pattern26(int n){}

void pattern27(int n){}

void pattern28(int n){}

void pattern29(int n){}

void pattern30(int n){}

void pattern31(int n){}

void pattern32(int n){}

