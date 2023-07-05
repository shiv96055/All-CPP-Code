#include<iostream>
#include<stack>
using namespace std ;

    void insert(stack<int> &s, int temp){
        if(s.empty() || s.top()>temp){
            s.push(temp) ;
            return ;
        }
        int val = s.top();
        s.pop();
        insert(s, temp);
        
        s.push(val);
    }
    void sort(stack<int> &s){
        if(s.empty()){
            return ;
        }

        int temp = s.top();
        s.pop();
        sort(s);

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
    s.push(7);
    s.push(4);
    s.push(2);
    s.push(8);
    s.push(12);
    s.push(10);

    sort(s) ;
    print(s) ;
}