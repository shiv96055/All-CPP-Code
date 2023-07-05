
#include<iostream>
#include<stack>
using namespace std ;
int validString(string str ){
    if(str.length()&1){
        return -1 ;
    }
    // valid part remove
    stack<char> s ;
    for(int i = 0; i < str.length() ; i++){
        char ch = str[i] ;
        if(ch == '{'){
            s.push(ch);
        }
        else{
            if(!s.empty() && s.top() == '{'){
                s.pop();
            }
            else{
                s.push(ch);
            }
        }
    }
    // count opening bracket = a ;
    // count closing bracket = b ;
    int a = 0;
    int b = 0 ;
    while(!s.empty()){
        if(s.top()=='{'){
            a++ ;
            s.pop();
        }
        else{
            b++;
            s.pop();
        }
    }
    int ans = (a + 1) / 2 + (b + 1) / 2 ;
    return ans ;

}


int main(){
    string str = "{{{{}}}{}}{{{{" ;
   int ans = validString(str);
   cout<<ans<<endl;
}