#include<iostream>
using namespace std ;

class Node {
    public :
    int data ;
    Node *next ;

    Node (int data){

        this -> data = data ;
        next = NULL ; 
    }

    ~Node(){
        int value = this ->data ;
        if(this ->next = NULL){
            delete next ; 
            this ->next = NULL ;
            cout<<"shiv "<<endl;
        
        }
        cout<<" memory is free from node with data "<<value <<endl;
    }
   
    
};

    void inserAtHead(Node* &head, int data){
        Node* temp = new Node(data);
        temp->next = head ;
        head = temp ;
    }

    void insertAtTail(Node* &tail, int data){
        // create temp node 
        Node* temp = new Node(data) ;
        tail ->next = temp ;
        tail = tail->next ; // tail = temp
    }

    void insertAtPosition(Node* &tail ,Node* &head, int position, int data){

        if(position == 1){
            inserAtHead(head, data);
            return ;
        }
        Node* temp = head ;
        int cnt = 1;
        while(cnt < position - 1){
            temp = temp ->next ;
            cnt++ ;
        }
        if(temp ->next == NULL){
            insertAtTail(tail , data);
            return ;
        }
        Node* nodeToInsert = new Node(data) ;
        nodeToInsert -> next = temp -> next ;
        temp -> next = nodeToInsert ;
    }

    void print(Node* &head){
        Node* temp = head ;
        while(temp != NULL){
            cout<<temp->data <<" " ;
            temp = temp->next ;
        }
        cout<<endl;
    }

    void deleteNode(Node* &head, int position){
        // first position delete
        if(position == 1){
             Node* temp = head ;
            head = head ->next ;
            // memory free start node 
            temp  ->next = NULL ;
            delete temp ;
            

        }
        else {
        Node* curr = head ;
        Node* prev = NULL ;
        int cnt = 1 ;
        while(cnt < position ){
            prev = curr ;
            curr = curr ->next ;
            cnt++ ;
        }
        prev -> next = curr -> next ;
        curr ->next = NULL ;
        delete curr ;
    }


    }

int main(){
    // create a new node 
    Node* node1 = new Node(12) ;
    //cout<<node1->data<<endl;
    //cout<<node1->next<<endl;

    // head pointed to node1 
     Node* head = node1 ;
     Node* tail = node1 ;
    //cout<<head->data<<endl;
    //cout<<head->next<<endl;
   
   print(head) ;
   insertAtTail(tail, 13) ;
   print(head);
   insertAtTail(tail, 45) ;
   print(head);
   insertAtTail(tail, 67) ;
   print(head);
   insertAtPosition(tail, head, 4, 34);
   print(head);
    insertAtPosition(tail, head, 3, 32);
    print(head);
    insertAtPosition(tail, head, 1, 10);
    print(head);
   insertAtPosition(tail ,head, 8, 80);
   print(head) ;
   cout<<"head "<<head->data<<endl;
   cout<<"Tail "<<tail -> data <<endl;

cout<<endl<<endl;
print(head);
deleteNode(head, 3);
print(head) ;
deleteNode(head, 7);
print(head);
deleteNode(head, 1);
print(head);



    // print(head);
    // inserAtHead(head, 13);
    // print(head);
    // inserAtHead(head, 45);
    // print(head);
    // inserAtHead(head, 67);
    // print(head);
 }