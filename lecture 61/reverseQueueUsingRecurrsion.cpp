#include<iostream>
#include<queue>

using namespace std ;
    void reverseQueue(queue<int> &q){
        if(q.empty()){
            return ;
        }
        int element = q.front();
        q.pop();
        reverseQueue(q);
        q.push(element);
    }
int main(){
    queue<int> q;
    q.push(12);
    q.push(56);
    q.push(76);
    q.push(34);
    q.push(14);
    q.push(67);
    
    reverseQueue(q);
     while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }

}