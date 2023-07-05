#include<bits/stdc++.h>

using namespace std;

void subArray(vector<int> &v, vector<vector<int>>&ans,int ind, int n){

   if(ind == n)
       return;

   vector<int> op;
   for (int i = ind; i < n; i++){
       op.push_back(v[i]);
       ans.push_back(op);
   }

   subArray(v, ans, ind + 1, n);
}
int main(){
    int n = 4;
    vector<int> v{1, 2, 3, 4};
    
    

    vector<vector<int>> ans;
    vector<int> op;

    subArray(v, ans, 0, n);
   
    for(auto it : ans){
        for (auto ip: it){
            cout << ip << " ";
        }
        cout << endl;
    }
    return 0;
}