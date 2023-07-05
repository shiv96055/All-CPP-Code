#include<iostream>

using namespace std ;
    class Node{
        public :
        int data ;
        Node* next ;
        Node(int data){
            this ->data = data ;
            this ->next = NULL ;
        } 
    };

    void insertAtTail(Node* &tail, int element, int data){
        
        // if list is empty 
        if(tail == NULL){
            Node* newNode = new Node(data);
            tail = newNode ;
            newNode->next = newNode ;
        }

        // general case 
        Node* curr = tail;

        while(curr->data != element){
            curr = curr->next ;
        }

        Node* temp = new Node(data);
        temp ->next = curr->next ;
        curr->next = temp ;
      

    }

    void print(Node* tail){

        Node* temp = tail;

        do{
            cout<<tail->data <<" ";
            tail = tail->next;
        }while(temp != tail && tail !=NULL);
       cout<<endl;
    }

    bool checkCircular(Node* tail){

        if(tail == NULL){
            cout<<" list is empty "<<endl;
            return true ;
        }

        Node* curr = tail->next ;

        while(tail != curr && curr != NULL){
            curr = curr->next ;
        }
        if(curr == tail){
            return true ;
        }
        else{
            return false ;
        }
    }

    


int main(){
    Node* node1 = new Node(8);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
    Node* tail = node1 ;
    print(tail);

    //cout<<"shiv "<<endl;
    if(checkCircular(tail)){
       cout<<"list is circular "<<endl;
   }else{
       cout<<"list is not circular "<<endl;
   }
    node1->next = node1 ;

    if(checkCircular(tail)){
       cout<<"list is circular "<<endl;
   }else{
       cout<<"list is not circular "<<endl;
   }

    insertAtTail(tail, 8, 89);
    insertAtTail(tail,89, 67);
    insertAtTail(tail,89,45);
    insertAtTail(tail,89,60);
   
   print(tail);

   if(checkCircular(tail)){
       cout<<"list is circular "<<endl;
   }else{
       cout<<"list is not circular "<<endl;
   }
    return 0;
}