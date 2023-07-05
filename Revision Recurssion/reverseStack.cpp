#include<iostream>
#include<stack>

using namespace std ;

    void insert(stack<int> &s, int temp){
        
        if(s.empty()){
            s.push(temp) ;
            return ;
        }
        int val = s.top();
        s.pop();
        insert(s, temp);
        s.push(val);
    }
    void reverseStack(stack<int> &s ){
      
        if(s.empty()){
            return ;
        }

        int temp = s.top();
        s.pop();
        reverseStack(s);

        insert(s, temp);
    }
     void print(stack<int> s){
        while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
        }
        cout<<endl;
    }
int main(){
    stack<int> s;
    s.push(5);
    s.push(9);
    s.push(4);
    s.push(7);
    s.push(72);
    s.push(71);

    print(s);
    reverseStack(s);
    print(s);
}