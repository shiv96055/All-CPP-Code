#include<bits/stdc++.h>

using namespace std ;

 void solve(string textInput){

    stringstream s(textInput);
    map<string, int> mp;
    vector<string> answer;
    string word;

    while(s>>word){
        mp[word]++;
    }

    for(auto it : mp){
        if(it.second > 1){
            answer.push_back(it.first);
        }
    }

    
    return answer;
}
int main(){

   string  str = "cat batman latt matter cat matter cat";
    solve(str);
}