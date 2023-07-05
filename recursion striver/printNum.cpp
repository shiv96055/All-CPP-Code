#include<iostream>
using namespace std;

 int fun(int n){

     if (n < 0)
     {
         return 2;
    }
    cout << "fun ->" << n << endl;
    n = n - 1; 
    int k = fun(n);

    //cout << "k -> " << k << endl;
    cout<<"n -> " << n << endl;
   // cout << n + k << endl;
    return k;
}

int fun1(int n){
    if(n < 0){
        return 1;
    }
   
    int ans = fun1(n -1);
    cout << "n1 -> " << n <<endl;
   return ans;
}

int main(){
    int n = 5;
    fun(n);
    cout << endl;
    fun1(n);
    return 0;
}