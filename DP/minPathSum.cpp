#include<bits/stdc++.h>

using namespace std;


// by dp
int minCostPath_3(int ** input, int m, int n){

    // declare 2D DP

    int **dp = new int *[m];

    for (int i = 0; i < m; i++){
        dp[i] = new int[n];

        for (int j = 0; j < n; j++){
            dp[i][j] = -1;
        }
    }

    dp[m - 1][n - 1] = input[m - 1][n - 1];

    for (int i = m-1; i >=0; i--){

        for (int j = n-1; j >=0; j--){

            if(i == m-1 && j == n-1){
                dp[i][j] = input[i][j];
            }else{

                int x = INT_MAX;
                int y = INT_MAX;
                int z = INT_MAX;

                if(j + 1 < n){
                    x = dp[i][j + 1];
                }

                if(i + 1 < m){
                    y = dp[i + 1][j];
                }

                if(j + 1 < n && i + 1 <m){
                    z = dp[i + 1][j + 1];
                }

                int ans = min(x, min(y, z)) + input[i][j];
                dp[i][j] = ans;
            }
        }
    }

    return dp[0][0];
}

// by memoization

int minCostPath_2_helper(int **input, int m, int n, 
    int i, int j, int **memo){

        if(i >= m || j >= n)
            return INT_MAX;

            if(i == m-1 && j == n-1)
                return input[i][j];

                if(memo[i][j] != -1)
                    return memo[i][j];

                int x = minCostPath_2_helper(input, m, n, i, j + 1, memo);
                int y = minCostPath_2_helper(input, m, n, i + 1, j, memo);
                int z = minCostPath_2_helper(input, m, n, i + 1, j + 1, memo);

                int ans = min(x, min(z, y)) + input[i][j];

                memo[i][j] = ans;
                return ans;
}


// by recursion

int minCostPath_2(int **input, int m, int n){

    int **memo = new int*[m];

    for (int i = 0; i < m; i++){
        memo[i] = new int[n];

        for (int j = 0; j < n; j++){
            memo[i][j] = -1;
        }
    }

   return minCostPath_2_helper(input, m, n, 0, 0, memo);
}
int minCostPath_helper(int **input, int m, int n, int i, int j){

        if(i >= m || j>= m)
            return INT_MAX;

            if(i == m-1 && j == n-1)
                return input[i][j];

            int x = minCostPath_helper(input, m, n, i, j + 1);
            int y = minCostPath_helper(input, m, n, i + 1, j);
            int z = minCostPath_helper(input, m, n, i + 1, j + 1);

            int ans = min(x, min(y, z)) + input[i][j];
            return ans;
}


int minCostPath(int **input, int m, int n){

    return minCostPath_helper(input, m, n, 0, 0);
}
int main(){
   
   // first declare 2d Array

   int m, n;
   cin >> m >> n;

   int **input = new int*[m];

   for (int i = 0; i < n;i++){

       input[i] = new int[m];
   }

   // taking input

   for (int i = 0; i < n; i++){

       for (int j = 0; j < m; j++){

           cin >> input[i][j];
       }
   }

   // solve by recursion

   int ans = minCostPath(input, m, n);
   cout << ans << endl;

   // solve by memoization
   int ans1 = minCostPath_2(input, m, n);
   cout << ans1 << endl;

   // solve by DP

   int ans2 = minCostPath_3(input, m, n);
   cout << ans2 << endl;
   return 0;
}