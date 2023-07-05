#include<bits/stdc++.h>

using namespace std;



int findMin(vector<int> &ans){

    int min1 = INT_MAX;

    for (int i = 0; i < ans.size(); i++){

        min1 = min(ans[i], min1);
    }

    return min1;
}
int minimumCountHelper(int n, vector<int> &ans){

     if(n<=0)
         return 0;

         if(n == 1)
             return 1;

         //int power = pow(n, (float)1 / 2);
         for (int i = 1; i <= pow(n, (float)1 / 2); i++){

             int x = minimumCountHelper(n - i * i, ans);
             ans.push_back(x);
         }
             
         int output = findMin(ans);
         ans.clear();
         return output +1;
}

int minimumCount(int n){

    vector<int> ans;
   return  minimumCountHelper(n, ans);
}



int minimumCountHelper_2(int n, vector<int> &ans, vector<int>&store_ans){

    if(n <= 0)
        return 0;

    if(n == 1)
        return 1;

        if(ans[n] != -1){
            return ans[n];
        }

        for (int i = 1; i <= pow(n, (float)1 / 2); i++){
            int x = minimumCountHelper_2(n - i * i, ans, store_ans);
            store_ans.push_back(x);
        }

        int output = findMin(store_ans);
        store_ans.clear();
        ans[n] = output + 1;
        return ans[n];
}

int minimumCount_2(int n){

    vector<int> ans(n + 1, -1);
    ans[0] = 0;
    ans[1] = 1;
    vector<int> store_ans;

    return minimumCountHelper_2(n, ans, store_ans);
}


int minimumCount_3(int n){

    vector<int> ans(n+1);
    ans[0] = 0;
    ans[1] = 1;
    ans[2] = 2;
    ans[3] = 3;

    for (int i = 4; i <= n; i++){

        int output = INT_MAX;
        for (int j = 1; j<= pow(i, (float)1/2); j++){

           output = min (ans[i - j * j], output);
        }

        ans[i] = output+1;
    }

    return ans[n];
}
int main(){

    int n;
    cin >> n;
   
   // by recurssive 
    int ans = minimumCount(n);
    cout << ans << endl;

    // by memoization

    int ans1 = minimumCount_2(n);
    cout << ans1 << endl;

    // by using buttom up approach (dynamic programming)

    int ans2 = minimumCount_3(n);
    cout << ans2 << endl;
    return 0;
}