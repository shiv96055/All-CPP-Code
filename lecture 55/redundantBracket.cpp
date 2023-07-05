#include<iostream>
#include<stack>
using namespace std ;

bool checkRedundant(string str){
    stack<char> s ;
    for(int i = 0 ; i < str.length() ; i++){
        char ch = str[i] ;
        if(ch == '('||ch == '+'|| ch == '-'|| ch == '*'|| ch == '/'){
            s.push(ch);
        }
        else{
            // lower case or )
             
            if(ch == ')'){
               
                bool redundant = true ;
                while(!s.empty() && s.top()!= '('){
                    
                    char top = s.top() ;
                    if(top == '+'||top == '-'|| top == '*'|| top == '/'){
                        redundant = false ;
                       
                    }
                     s.pop();

                }
                if(redundant == true){
                    return true ;
                }
                s.pop();
            }
        }

    }
   
    return false ;
   
   
}
int main(){
    string str = "((a+b))";
   int ans = checkRedundant(str);
    cout<<ans ;

}