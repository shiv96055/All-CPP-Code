#include<iostream>
#include<stack>
using namespace std ;
void deleteMiddle(stack<int>&s, int size, int count){
	
   // Write your code here
    if(count == size/2){
        s.pop();
        return ;
    }
    int num = s.top();
    s.pop();
    deleteMiddle(s,  size, count +1);

    s.push(num);
   
}
int main(){
    stack<int>s ;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.push(5);
    s.push(6);
    int count = 0 ;
    deleteMiddle(s,6,count) ;
    for(int i = 0; i<5; i++){
        cout<<s.top()<<" ";
        s.pop() ;
    }
   

} 

