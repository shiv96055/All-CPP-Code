#include<iostream>
#include<map>
#include<unordered_map>
using namespace std ;

int fun(int n,int k){

    if(n==0 || n==1){
        return k;
    }
   // int prodt = k*n;
   // cout<<prodt<<endl;
   //int ans = fun(n-1, prodt); 
  // cout<<ans<<endl;
    return fun(n-1,k*n) ; 
}

int fun1(int n, unordered_map<int, int> mpp){

    if(n == 0 || n == 1){
        return n;
    }
     
    
    int num1 = fun1(n - 1, mpp);
    mpp[n] = num1;

    auto it = mpp.find(n - 2);
    if(it != mpp.end()){
        return num1 + it->second;
    }else{
        int num2 = fun1(n - 2, mpp);
        mpp[n] = num2;

        return num1 + num2;
    }
}
int main(){
    int n = 7;
  // cout<< fun(n, 1);

    unordered_map<int, int> mpp;

  int ans =  fun1(n, mpp);
  cout << ans;
}