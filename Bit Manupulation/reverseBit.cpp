#include<bits/stdc++.h>

using namespace std;

void printBits(int n){

    
    bool flag = false;
    for (int i = 31; i >= 0; i--){
       int mask = (1 << i);
        if(flag){

            if((mask & n) !=0){
                cout << 1 << " ";
            }else{
                cout << 0 << " ";
            }
        }else{

            if((mask & n) !=0){
                flag = true;
                cout << 1 << " ";
            }
        }
    }
    cout << endl;
}

void printReverseBits(int n){
     bool flag = false;
     int rev =0;
     int j = 0;
     for (int i = 31; i >= 0; i--)
     {
         int mask = (1 << i);
         if (flag){

             if ((mask & n) != 0){
                int smask = (1 << j);
                rev |= smask;             
            }
            j++;
        }else{

            if((mask & n) !=0){
                flag = true;
                int smask = (1 << j);
                rev |= smask;
                j++;
            }
        }
    }

    rev |= (1 >> j);
    cout << rev << endl;
}
int main(){

    int n;
    cin >> n;
    printBits(n);
    printReverseBits(n);
    //43261596
    return 0;
}