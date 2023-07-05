#include<iostream>

using namespace std;

void fun(int i, int sum){

    if(i<1){
        cout << sum << endl;
        return;
    }

     return fun(i - 1, sum + i);
}

int fun1(int n){

    if(n == 1){
        return 1;
    }

    return n * fun1(n - 1);
}
int main(){

    int n = 4;

    fun(n, 0);

    cout << fun1(4);
    return 0;
}