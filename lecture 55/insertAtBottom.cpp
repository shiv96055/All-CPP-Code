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
void insertAtBottom(stack<int>&s , int key){
   print(s);
    if(s.empty()){
        s.push(key);
        return ;
    }
   
    int  n = s.top();
    s.pop();
    insertAtBottom(s ,key) ;
    print(s);
    s.push(n);
    

}


int main(){
    stack<int> s ;
    s.push(3);
    s.push(4);
    s.push(2);
    s.push(1);
    s.push(5);
    s.push(9);
    
   insertAtBottom(s,12);
    print(s);
   
  

}