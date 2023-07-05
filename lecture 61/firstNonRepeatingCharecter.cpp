#include<iostream>
#include<queue>
#include<unordered_map>
using namespace std ;

int main(){
    string str = "aaabcdehhee" ;
    unordered_map<char, int> count ;
    for(int i = 0; i<str.length(); i++){
    char ch = str[i];
    count[ch]++;
}
    
}