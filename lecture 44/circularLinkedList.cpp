#include<iostream>

using namespace std ;

class Node {
    public :
    int data ;
    Node* next ;
    Node(int data){
        this -> data = data ;
        this -> next = NULL ;
    }
    ~Node(){
        int val = this ->data ;
        if(this ->next != NULL){
            delete next ;
            next = NULL ;
        }
        cout<<"memory free from heap "<<val<<endl;
    }

};
void insertNode(Node* &tail, int element, int data){
    
    // empty list k liye 
    if(tail == NULL){
        Node* newNode = new Node(data) ;
        tail = newNode ;
        newNode ->next = newNode ;

    }

    else{
        // assuming element is present in list 
        // non-empty list
        Node* curr = tail ;
        while(curr ->data != element) {
            curr = curr->next ;
        }

        Node* temp = new Node(data) ;
        temp ->next = curr ->next ;
        curr ->next = temp ;

    }
    
}

    void print(Node* tail){

        Node* temp = tail ;
       if(tail == NULL){
           cout<<"empty list "<<endl;
       }
        do{
            cout<<tail ->data<<" " ;
            tail = tail ->next ;
        } while(tail != temp) ;
         cout<<endl ;
    }
    
    void deleteNode(Node* &tail, int element){
        // empty list
        if(tail == NULL){
            cout<<"list is empty check again "<<endl;
            return ;
        }
        Node* prev = tail ;
        Node* curr = prev ->next ;
        if(curr == prev){

        }
        while(curr ->data != element ){
            prev = curr ;
            curr = curr ->next ;

        }
        prev ->next = curr ->next ;
        // node =1

        if(curr == prev){
            tail = NULL ;
        }
        //node >= 2

        if(tail == curr)
        {
            tail = prev ;
        } 

        curr ->next = NULL ;
        delete curr ;

    }

int main(){
    Node* tail = NULL ;
    insertNode(tail, 34, 54);
    print(tail);

   insertNode(tail, 54, 46);
    print(tail);
    
    /*insertNode(tail, 46, 94);
    print(tail);
    insertNode(tail, 94, 100);
    print(tail);
     insertNode(tail, 46, 10);
    print(tail);
     insertNode(tail, 100, 110);
    print(tail);
     insertNode(tail, 54, 53);
    print(tail);*/
    deleteNode(tail, 46);
    print(tail);



}