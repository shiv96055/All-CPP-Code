#include<iostream>
#include<vector>
using namespace std;

void print(vector<int> op){
    for (int i = 0; i < op.size(); i++){
        cout << op[i] << " ";
    }
    cout << endl;

}
bool solve(int index, vector<int> ip, vector<int> op, int sum, int s, int n){

if(index >= n){
    
    if (s == sum)
    {
       print(op);
       return true;
     }
     return false;
}
s = s + ip[index];
op.push_back(ip[index]);

 if(solve(index + 1, ip, op, sum, s, n) == true)
     return true;
s = s - ip[index];
op.pop_back();
 if(solve(index + 1, ip, op, sum, s, n) == true)
     return true;

 return false;
}

int main(){

    vector<int> ip = {1, 2, 1};
    int sum = 5;
    vector<int> op;
    

    cout<<solve(0, ip, op, 5, 0, 3);
    return 0;
}