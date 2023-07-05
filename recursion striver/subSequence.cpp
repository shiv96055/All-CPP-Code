#include<iostream>
#include<vector>

using namespace std ;


    void print( vector<int>ans){

        for (int i = 0; i < ans.size(); i++){

                cout << ans[i] << " ";
            }
            cout << endl;
        }

void solve(vector<int> ip, vector<int> op, vector<vector<int>> &ans){

    if(ip.size() == 0){
        ans.push_back(op);
        print(op);
        return;
    }

    vector<int> op1 = op;
    vector<int> op2 = op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin() + 0);

    solve(ip, op1, ans);
    solve(ip, op2, ans);
}

    void solve1(vector<int> ip, vector<int> op, int index, int n){

        if(index==2){
            print(op);
            return;
        }
        if(index >= n)
            return;

        op.push_back(ip[index]);

        solve1(ip, op, index + 1, n);
          op.pop_back();
        solve1(ip, op, index + 1, n);
      
    }

 int main()
{
    vector<int> ip = {4,4,3,2,1};

    vector<vector<int>> ans;
    vector<int> op;

   //solve(ip, op, ans);

    solve1(ip, op, 0, ip.size());

    //print(ans);
}