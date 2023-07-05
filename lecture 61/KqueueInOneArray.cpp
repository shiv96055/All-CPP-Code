#include<iostream>
#include<queue>

using namespace std;

class Kqueue{

    public:
    int *arr ;
    int *front;
    int *rear ;
    int freespot;
    int *next;
    public:
    Kqueue(int n, int k){
        arr = new int[n];
        front = new int[k];
        rear = new int[k];
        next = new int[n];
        for(int i = 0;i<k; i++){
            front[i] = -1;
            rear[i] = -1;
        }

        for(int i = 0; i<n ; i++){
            next[i]= i+1;
        }
        next[n-1] = -1;
        freespot = 0;
    }

    void enqueue(int data, int k){
        // first check overflow condition
        if(freespot == -1){
            cout<<"queue is overflow "<<endl;
            return ;
        }
        
        // find index where you insert data
        int index = freespot ;

        // update free freespot 
        freespot = next[index];

        // first element 
        if(front[k-1] == -1){
            front[k-1] = index ;

        }
        else{
            next[rear[k-1]] = index ;
        }
        // next ko update krdo
        next[index] = -1;

        // rear ko update krdo
        rear[k-1]= index;

        //data push krdo
        arr[index] = data ;

    }

    int dequeue(int k){

        // check underflow condition
        if(front[k-1]==-1){
            cout<<"queue is underflow "<<endl;
            return -1;
        }
        
        // find index where you want to pop ;
        int index = front[k-1];

        // update front 
        front[k-1] = next[index] ;

        // freespot ko mange krdo
        next[index] = freespot ;
        freespot = index ;

        return arr[index];

    }


};
int main(){

    Kqueue q(10, 3);
    q.enqueue(23,1);
     q.enqueue(28,1);
      q.enqueue(12,2);
       q.enqueue(25,1);
        q.enqueue(20,2);
         q.enqueue(33,3);
    q.enqueue(28,2);
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(3)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
}