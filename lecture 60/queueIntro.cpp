#include<iostream>
#include<queue>
using namespace std ;

int main(){

   /* deque<int> d;
    d.push_front(23) ;
    d.push_back(76);
    cout<<d.size()<<endl;
    
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_back();
    cout<<d.front()<<endl;
    cout<<d.back()<<endl;
    d.pop_front() ;
    if(d.empty()){
        cout<<"deque is empty "<<endl;

    }else{
        cout<<" deque is not empty "<<endl;
    }
    cout<<d.size()<<endl;

 */


    
    queue<int> q;
    q.push(78);
    cout<<"front of queue "<<q.front()<<endl;
    q.push(32);
    q.push(12);
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.push(232);
    cout<<q.size()<<endl;
      if(q.empty()){
          cout<<"q is empty"<<endl;
      }
      else{
          cout<<"q is not empty"<<endl;
      }
      cout<<q.back()<<endl;
      q.pop();
      q.pop();
      q.pop();
         cout<<q.size()<<endl;
      if(q.empty()){
          cout<<"q is empty"<<endl;
      }
      else{
          cout<<"q is not empty"<<endl;
      }

}