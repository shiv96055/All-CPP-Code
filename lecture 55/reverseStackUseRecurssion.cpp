#include<iostream>
#include<stack>
using namespace std ;
void print(stack<int>&s){

    stack<int> str;
    
    str = s;
    
    cout<<endl;
    
     while(!str.empty()){
    
        cout<<str.top()<<" ";
    
        str.pop();
    }
    cout<<endl;
}

void solve(stack<int>&s,int num){

    if(s.empty()){
   
    s.push(num);
   
    return ;
}
   
    int num1 = s.top();
   
    s.pop();
   
    solve(s,num);
   
    s.push(num1);
    

}
void reverseStack(stack<int>&s ){
   print(s);

    if(s.empty()){

        return ;
    }
   
    int  n = s.top();

    s.pop();

    reverseStack(s ) ;

    solve(s,n);
    print(s);

}

int main(){
    stack<int> s ;
    s.push(3);
    s.push(4);
    s.push(2);
    s.push(1);
    s.push(5);
    s.push(9);
    reverseStack(s);
    print(s);
   
  

}