#include<bits/stdc++.h>

using namespace std;

int main(){

    string s = "sh";
    string t = "vishal manish shurbh";

    cout << t.substr(2, 1)<<endl;
    cout << t.substr(5)<< endl;

    for (int i = 0; i < t.length() - s.length() + 1; i++)
    {

        if(t.substr(i, 2) == s){

            cout << "fount at index " << i << endl;
        }
    }
        return 0;
}