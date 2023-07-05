#include<iostream>
#include<stack>
using namespace std ;
int main(){
    string str = "love" ;
    string ans = "";
    stack<char> s ;
    for(int i = 0 ; i <str.length() ; i++){
        char ch = str[i] ;
        s.push(ch) ;
    }
    cout<<s.empty()<<endl;
    
  //  for(int i= 0 ; i< str.length() ; i++ ){  //
     while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch) ;
        s.pop();
    }
    cout<<ans<<endl;
}