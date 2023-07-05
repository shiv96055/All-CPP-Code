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