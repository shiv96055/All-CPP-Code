#include<bits/stdc++.h>

using namespace std;

int fun(int n, unordered_map<int, int> mp){

    if(n == 0|| n == 1){
        return n;
    }

  int num1 =  fun(n - 1, mp);

  mp[n] = num1;

  auto it = mp.find(n - 2);

  if(it != mp.end()){
      return num1 + it->second;
  }else{

      int num2 = fun(n - 2, mp);
      mp[n] = num2;

      return num1 + num2;
  }
}

int main(){

    int n = 7;

    unordered_map<int, int> mp;
    int ans = fun(n, mp);
    cout << ans << endl;
    return 0;
}