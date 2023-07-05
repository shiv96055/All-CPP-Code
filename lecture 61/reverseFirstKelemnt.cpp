#include<bits/stdc++.h>
using namespace std;

void fun(int n){

    if(n == 0){
        return;
    }
    cout << n % 2 << " ";
    fun(n / 2);
}

int max(int *p, int n){

    int a = 0;
    int b = n - 1;

    while(b != a){
        if(p[a] <= p[b]){
            a++;
        }else{
            b--;
        }
    }

    cout << a << " " << b << endl;
    return p[a];
}
int main(){

    //fun(25);

   // char p[] = "%d\n";
   // p[1] = 'c';
   // printf(p, 65);

    int p[5] = {1, 2, 4, 5, 6};
    int a = max(p, 5);
    cout << a <<  endl;
    return 0;
} 