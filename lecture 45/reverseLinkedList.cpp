#include<iostream>
using namespace std ;

class Node{

    public:
    int data ;
    Node* next ;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

    void insertAtHead(Node* &head, int data){
     Node* temp = new Node(data) ;
     temp ->next = head ;
     head = temp ;
 }

    Node* reverse(Node* &head){
        if(head == NULL || head ->next == NULL){
            return head ;
        }

        Node* chotahead = reverse(head ->next);
        cout<< head->next->next<<endl;
        cout<<head->next->data<<endl;
        head->next->next = head ; 
        head->next = NULL ;
        cout<<chotahead<<endl;
        cout<<chotahead->data<<endl;
        return chotahead ;

    }

 void print(Node* head){
     while(head != NULL){
         cout<<head ->data<<" ";
         head = head ->next ;
     }cout<<endl;

 }

int main(){
    Node* node1 = new Node(8) ;
    Node* head = node1 ;
   
    insertAtHead(head, 9);
    insertAtHead(head,10);
    insertAtHead(head, 34);
    print(head);

    head = reverse(head);
    print(head);
}