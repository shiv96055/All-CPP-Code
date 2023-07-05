#include<iostream>

using namespace std ;
class Node{
    public :
    int data ;
    Node* prev ;
    Node* next ;
    Node( int data){
    this ->data = data ;
    next = NULL;
    prev = NULL ;
 }
    ~Node(){
        int value = this ->data ;
        if(this ->next != NULL){
            delete next ;
            next = NULL ;
        }
        cout<<"memory is free "<<value<<endl;
    }


};

    void insertAtHead(Node* &head,Node* &tail, int data ) {
        //empty list
        if(head == NULL){
            Node* temp = new Node(data) ;
            head = temp ;
            tail = temp ;
        }
        else{
            Node* temp =new  Node(data) ;
            temp ->next = head ;
            head->prev = temp ;
            head = temp ;
        }

    }
    void insertAtTail(Node* &tail, Node* &head, int data){
        // empty list
        if(tail== NULL){
            Node* temp = new Node(data) ;
            tail = temp ;
            head = temp ;
        }
        else{
            Node* temp = new Node(data);
            temp ->prev = tail ;
            tail -> next = temp ;
            tail = temp ;
        }

    }
    void insertAtPosition(Node* &tail, Node* &head, int position, int data){
        if(position == 1){
        Node* temp =new  Node(data) ;
        temp ->next = head ;
        head->prev = temp ;
        head = temp ; 
        return ;
        }
         Node* temp = head ;
         int cnt = 1;
         while(cnt < position - 1){
             temp = temp ->next ;
             cnt ++ ;

         }
         if(temp->next == NULL){
        Node* temp = new Node(data);
        temp ->prev = tail ;
        tail -> next = temp ;
        tail = temp ;
        return ;
         }
         Node* insertNode = new Node(data) ;
         insertNode -> next = temp ->next ;
         temp ->next ->prev = insertNode ;
         insertNode ->prev = temp ;
         temp -> next = insertNode ;

    }

    void print(Node* head){
        Node* temp = head ;

        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp ->next ;
        }
        cout<<endl;
    }

    void deleteNode(Node* &head,Node* &tail, int position){
        // first position delete
        if(position == 1){
             Node* temp = head ;
            temp ->next ->prev = NULL ;
            head = temp -> next ;
           temp -> next = NULL ;
            // memory free start node 
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
         if (curr ->next == NULL){
         curr ->prev = NULL ;
        prev ->next = curr ->next ;
        tail = prev ;
        delete curr ;

        }
     else{
        curr ->prev = NULL ;
        prev ->next = curr ->next ;
        curr ->next = NULL ;
        delete curr ;
        }
    }
    }

int main(){
    Node* node1 = new Node(10) ;
   Node* head = NULL ;
   Node* tail = NULL  ;
   print(head);
   insertAtHead(head,tail,  12);
   print(head);
   insertAtTail(tail, head, 18);
   print(head);
   insertAtPosition(tail, head, 3, 22);
   print(head);
   insertAtPosition(tail, head, 2, 67);
   print(head);
   insertAtTail(tail, head, 9);
   print(head);
   cout<<head ->data<<endl;
    cout<<tail->data<<endl;
   insertAtTail(tail,head, 0);
   print(head);
   cout<<head ->data<<endl;
    cout<<tail->data<<endl;
    insertAtPosition(tail, head, 5, 100);
   print(head);
   cout<<head ->data<<endl;
    cout<<tail->data<<endl;
    deleteNode(head ,tail, 1);
    print(head);
    cout<<head ->data<<endl;
    cout<<tail->data<<endl;

    deleteNode(head,tail, 1);
    print(head);
     cout<<head ->data<<endl;
    cout<<tail->data<<endl;
    deleteNode(head,tail, 3);
    print(head);
     cout<<head ->data<<endl;
    cout<<tail->data<<endl;
    deleteNode(head,tail, 4);
    print(head);
     cout<<head ->data<<endl;
    cout<<tail->data<<endl;
  



}