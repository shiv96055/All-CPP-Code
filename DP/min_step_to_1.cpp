#include<bits/stdc++.h>

using namespace std;

int  minStep(int n){

    if(n <= 1){
        return 0;
    }

     int x = minStep(n - 1);
     int y = INT_MAX, z = INT_MAX;
     if (n % 3 == 0)
     {
         y = minStep(n / 3);
    }

     if( n% 2 == 0){
       z = minStep(n / 2);
    }

   int  ans = min(x, min(z, y)) + 1;
     return ans;
}

int minStep_DP(int n){

    vector<int> v(n + 1, -1);

    //initilize array
    v[0] = 0;
    v[1] = 0;
    v[2] = 1;
    v[3] = 1;

    for (int i = 4; i <= n; i++){

        int x = INT_MAX, y = INT_MAX, z = INT_MAX;
        x = v[i - 1];
        if(i%2 == 0){
            y = v[i / 2];
        }
        if(i % 3 == 0){
            z = v[i / 3];
        }

        int ans = min(x, min(y, z)) + 1;
        v[i] = ans;
    }

    return v[n];
}
int minStep_memoization(int n, vector<int> &v){
    
    if(n == 1){
        v[1] = 0;
        return 0;
    }
    
    if(v[n] != -1)
        return v[n];

    int x = minStep_memoization(n - 1, v);
    int y = INT_MAX, z = INT_MAX;

    if(n % 2 == 0){
           y = minStep_memoization(n/2, v);
    }

    if(n % 3 == 0){
        z = minStep_memoization(n / 3, v); 
    }

    int ans = min(x, min(y, z)) + 1;

    v[n] = ans;
    return v[n];
}
int main(){

    int n;
    cin >> n;
    // by recurssion
     int ans = minStep(n);
    cout << ans << endl;

    // DP - Buttom - Up Approach
    int ans1 = minStep_DP(n);
    cout << ans1 << endl;

    //top - down Approach (Memoization)
    vector<int> v(n + 1, -1);
     minStep_memoization(n, v);
    cout << v[n] << endl;

    for (int i = 0; i <= n; i++)
        cout << v[i] << " ";
        return 0;
}