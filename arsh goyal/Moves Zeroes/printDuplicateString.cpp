#include<iostream>
#include <iterator>
#include <map>
using namespace std;

void printDupls(string str){
    map <char, int> mpp;
    for (int i = 0; i < str.length(); i++){
        mpp[str[i]]++ ;
    }

    for (auto  i : mpp){
        if(i.second > 1){
            cout << i.first << " " << i.second << endl;
        }
    }
    
    
}

int main(){

    string str = "geeksforgeeks";
    printDupls(str);
    return 0;
}