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

void pattern11(int n){
    int i = 1;
    while (i<=n){
        int j = 1;
        while(j<=i){
            cout << (i+j-1) << " ";
            j++;
        }
        cout << endl;   
        i++;
    }
    
}

void pattern12(int n){
    int i = 1;
    while(i<=n){
        int j = i;
        while(j>0){
            cout << j << " ";
            j--;
        }
        cout << endl;
        i++;
    }
}

void pattern13(int n){
    int i = 1;
    while (i<=n){
        int j = 1;
        char c = 'A' + i - 1;
        while(j<=n){
            cout << c << " ";
            j++;
        }
        cout << endl;
        i++;
    }
    
}

void pattern14(int n){
    int i = 1;
    while (i<=n){
        int j = 1;
        while (j<=n){
            cout << static_cast<char>('A' + i - 1) << " ";
            j++;
        }
        cout << endl; 
        i++;       
    }
}

void pattern15(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            char c = 'A' + j - 1;
            cout << c << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern16(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << static_cast<char>('A' + j - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern17(int n){
    int i = 1;
    int cnt = 0;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << static_cast<char>('A'+ cnt++ ) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern18(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=n){
            cout << static_cast<char>('A'+ i + j - 2 ) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern19(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << static_cast<char>('A' + i - 1) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern20(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << static_cast<char>('A' + i + j - 2) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern21(int n){
    int i = 1;

    while(i<=n){
        int j = 1;
        while(j<=i){
            cout << static_cast<char>('A' + i + j - 2) << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern22(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while (j<=i){
           cout << static_cast<char>('A' + n + j - i - 1 ) << " ";
           j++;
        }
        cout << endl;
        i++;
    }
}

void pattern23(int n){
    int i = 1;
    while(i<=n){
        // Print Space
        int space = n - i;
        while(space){
            cout << " " << " ";
            space--;
        }
        
        // Print *
        int j = 1;
        while(j<=i){
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern24(int n){
    int i = 1;
    while(i<=n){
        int j = 1;
        while(j <= (n-i+1)){
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern25(int n){
    int i = 1;
    while(i<=n){
        int space = i - 1;
        while(space){
            cout << " " << " ";
            space--;
        }

        int j = i;
        while(j<= n){
            cout << "*" << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern26(int n){
    int i = 1;
    while(i<=n){
        int space = i - 1;
        while(space){
            cout << " " << " ";
            space--;
        }

        int j = i;
        while(j<=n){
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern27(int n){
    int i = 1;
    while(i<=n){
        int space = n - i;
        while(space){
            cout << " " << " ";
            space--;
        }

        int j = 1;
        while(j<=i){
            cout << i << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern28(int n){
    int i = 1;
    while(i<=n){
        int space = i - 1;
        while(space){
            cout << " " << " ";
            space--;
        }

        int j = i;
        while(j<=n){
            cout << j << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern29(int n){
    int i = 1;
    int cnt = 1;
    while(i<=n){
        int space = n - i;
        while(space){
            cout << " " << " ";
            space--;
        }

        int j = 1;
        while(j<=i){
            cout << cnt++ << " ";
            j++;
        }
        cout << endl;
        i++;
    }
}

void pattern30(int n){
    int i = 1;
    while(i<=n){
        // T1  - Left Top Space Triangle
        int space = n - i;
        while(space){
            cout << " " << " ";
            space--;
        }

        // T2 - Left Bottom Numbers Triangle
        int j = 1;
        while(j<=i){
            cout << j << " ";
            j++;
        }

        // T3 - Right Bottom Numbers Triangle
        j = i - 1;
        while(j){
            cout << j << " ";
            j--;
        }

        // T4 - Right Top Space Triangle (Optional)
        space = n - i;
        while(space){
            cout << " " << " ";
            space--;
        }
        cout << endl;
        i++;
    }
}

void pattern31(int n){}

void pattern32(int n){}

void pattern33(int n){}

void pattern34(int n){}

void pattern35(int n){}

void pattern36(int n){}

void pattern37(int n){}

void pattern38(int n){}

void pattern39(int n){}

void pattern40(int n){}

void pattern41(int n){}

void pattern42(int n){}

void pattern43(int n){}

void pattern44(int n){}

void pattern45(int n){}

void pattern46(int n){}

void pattern47(int n){}

void pattern48(int n){}

void pattern49(int n){}

void pattern50(int n){}
