#include<iostream>

using namespace std;
void fun(int n){
    if(n == 0){
        return;
    }
    cout << "shiv kumar " << endl;
    n--;
    return fun(n);
}
int main(){

    int n = 5;

    fun(n);
    return 0;
}