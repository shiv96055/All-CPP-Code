#include<iostream>
#include<stack>
 using namespace std ;

    class Node{
        public :
        int data;
        Node* next;
        Node* prev ;
        Node(int data){
            this->data = data;
            this->next = NULL;
            this->prev = NULL;
        }
    };
    void insertAtHead(Node* &head, int data){
        Node* temp = new Node(data);

        temp->next = head ;
        head->prev = temp ;
        head = temp ;
    }

    void print(Node* head){
        while(head != NULL){
            cout<<head->data<<" ";
            head = head ->next ;
        }
        cout<<endl;
    }

 int main(){
     stack<int> s;
     Node* node1 = new Node(8);
     Node* head = node1 ;
     cout<<head->data <<endl;
     cout<<head->next<<endl;
     cout<<head->prev<<endl;
     insertAtHead(head, 7);
     insertAtHead(head, 10);
     insertAtHead(head, 15);
     insertAtHead(head, 18);
     insertAtHead(head, 20);
     print(head);

     cout<<head->data<<endl;
     
     Node* curr = head ;
     Node* temp  ;

     while(curr != NULL){
         temp = curr->next;
         curr->next = curr->prev ;
         curr->prev  = temp ;
         head = curr ;
         curr = temp ;

        //  if(curr ->next == NULL){
        //      curr->next = curr->prev ;
        //      curr->prev = NULL ;
        //      break;
        //  }
     }
   
      //  head = curr ;
        print(head);
        cout<<head->data<<endl;




     /* // approach -1
    Node* curr = head ;
    // push element into stack
    while(curr != NULL){
        s.push(curr->data);
        curr = curr->next ;
    }
        //again initlize the head 
        curr = head;
        // push element from stack to doubly linked list 
    while(curr!=NULL){
        curr->data = s.top();
        curr = curr->next ;
        s.pop(); 
    }
    // print
     print(head); */
     
     }
 