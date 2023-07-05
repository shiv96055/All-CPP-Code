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

 void insertStack(stack<int> &s, int num1){
     if(s.empty() ||(!s.empty() && s.top() < num1)){
         s.push(num1);
         return ;
     }
      int n = s.top();

     s.pop();

     insertStack(s, num1);

     s.push(n);
   

    }

stack<int> sortStack(stack<int> s){
    if(s.empty()){
        return s ;
    }
    //print(s);
    int num = s.top();

    s.pop();

    sortStack(s);

    insertStack(s,num);
   // print(s);
    

}

int main(){
    stack<int> s ;
    stack<int> s1 ;
    s.push(3);
    s.push(4);
    s.push(2);
    s.push(1);
    s.push(5);
    s.push(9);
    s1 = sortStack(s);
    while(!s1.empty()){
        cout<<s1.top()<<endl;
        s.pop();
    }
   
  

}