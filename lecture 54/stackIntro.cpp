#include<iostream>
#include<stack>
using namespace std ;

    int main(){
    cout<<"love shiv " <<endl;
    // creation of stack 
    stack<int> s ;

    // push operation 
    s.push(7) ;
    s.push(8);

    // pop operation 
    s.pop() ;

    // see top element 
    cout<<s.top()<<endl;
    cout<<s.size()<<endl;
    cout<<s.empty()<<endl;
    //cout<<s.swap()
    if(s.empty()){
        cout<<" stack is  empty "<<endl;
    }
    else{
        cout<<"stack is not empty "<<endl;
    }


} 

