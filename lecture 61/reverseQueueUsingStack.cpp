#include<iostream>
#include<stack>
#include<queue>

using namespace std ;
void reverseQueue(queue<int> &q){
    stack<int> s;
    while(!q.empty()){
        int val = q.front();
        q.pop();
        s.push(val);

    }
    while(!s.empty()){
        q.push(s.top());
        s.pop();
    }


}
int main(){
    queue<int> q ;
    q.push(12);
    q.push(56);
    q.push(76);
    q.push(34);
    q.push(14);
    
    reverseQueue(q);
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
}