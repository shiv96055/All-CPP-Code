#include<bits/stdc++.h>

using namespace std;

int main(){

    string str = "this is shiv kumar";
    vector<string> v;
    stringstream s(str);

    string word;
    int count = 0;
    while(s >> word){
        count++;
        v.push_back(word);
    }

    reverse(v.begin(), v.end());

    for(auto it : v)
        cout << it << " ";
    cout << count << endl;
    return 0;
}