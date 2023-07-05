#include<bits/stdc++.h>

using namespace std;


int fib_top_down(int n, vector<int> ans){

    if(n<=1){
        return n;
    }

    // if check output already is exist
    if(ans[n] != -1){
        return ans[n];
    }else{

        int a = fib_top_down(n - 1, ans);
        int b = fib_top_down(n - 2, ans);
        // save the output for future use 
        ans[n] = a + b;

        // return final output
        return ans[n];
    }
}

int fib_buttom_up(int n){

     int arr[n+1];
    // Initilize Smallest Case
    arr[0] = 0;
    arr[1] = 1;

    // Buttom - Up Approach
    for (int i = 2; i <=n; i++){
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    return arr[n];
}

int fib_recur(int n){

    if(n<=1)
        return n;

    return fib_recur(n - 1) + fib_recur(n - 2);
}
int main(){

    int n;
    cin >> n;
   
   // by recurssion -> 1 // TC - O(2^n)
    int ans1 = fib_recur(n);
    cout << ans1 << endl;

    // Memoizations - top - down approach -> 2 // TC -> O(n)
     vector<int> ans(n + 1, -1);
    int ans2 = fib_top_down(n, ans);
    cout << ans2 << endl;

    // buttom - up approach (Dynamic Programming)-> 3 // TC -> O(n)
    int ans3 = fib_buttom_up(n);
    cout << ans3 << endl;

    return 0;
}