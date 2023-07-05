#include<iostream>

using namespace std;

int LCS(string s, string t){

    // base case
    if(t.length() == 0 || s.length() == 0)
    {
        return 0;
    }

    // recursion 
    if(s[0] == t[0]){
        return 1 + LCS(s.substr(1), t.substr(1));
    }else{

        int a = LCS(s, t.substr(1));
        int b = LCS(s.substr(1), t);
        int c = LCS(s.substr(1), t.substr(1));

        return max(a, max(b, c));
    }
}

int LCS_Mem_Helper(string s, string t, int **output){

        if(s.length() == 0 || t.length() == 0)
            return 0;

        int m = s.length();
        int n = t.length();

        // check function
        if(output[m][n] != -1)
            return output[m][n];

        // recurssive call
        int ans;
        if(s[0] == t[0]){

            ans = 1 + LCS_Mem_Helper(s.substr(1), t.substr(1), output);

        }else{

            int a = LCS_Mem_Helper(s.substr(1), t, output);
            int b = LCS_Mem_Helper(s, t.substr(1), output);
            int c = LCS_Mem_Helper(s.substr(1), t.substr(1), output);

            ans = max(a, max(b, c));
        }

        // save ans
        output[m][n] = ans;
        return ans;
    }

void LCS_Mem(string s, string t){

    int m = s.length();
    int n = t.length();

    int **output = new int *[m+1];

    for (int i = 0; i <= m; i++)
    {
        output[i] = new int[n + 1];
        for (int j = 0; j <= n; j++){
            output[i][j] = -1;
        }
    }

   int ans =  LCS_Mem_Helper(s, t, output);
   cout << ans << endl;

    for (int i = 0; i <= m; i++)
    {
        
        for (int j = 0; j <= n; j++){
            cout<<output[i][j] <<" ";
        }
        cout << endl;
    }

}
int main(){

    string s, t;
    cin >> s >> t;

    // by recursion
     int ans = LCS(s, t);
     cout << ans << endl;

     // by memoization
     LCS_Mem(s, t);

     // dp 
     return 0;
}