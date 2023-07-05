#include<iostream>
using namespace std;
    class node{
        public:
        int data ;
        node *next;
        node *prev;

        // constructor 
        node(int data){
            this ->data = data ;
            this->next = NULL ;
           this-> prev = NULL;
        }
        ~node(){
                int value = this->data;
                if(this->next == NULL){
                    delete next ;
                    next = NULL ;
                }

                cout<<"memory is free "<<value<<endl;
        }

    };

    void insertAtHead(node* &head, node* &tail, int d){

        if(head == NULL){
            node* temp = new node(d);
            head = temp ;
            tail = temp ;

        }else{

        node *temp = new node(d);
        temp ->next = head;
        head-> prev = temp;
        head = temp;
        }
    }

    void insertAtTail(node* &head, node* &tail, int d){
        node* temp = new node(d);
        if(head == NULL){
            tail = temp;
            head = temp;
        }else{
            tail ->next = temp;
            temp->prev = tail;
            tail = temp;
        }
    }

    void insertAtPosition(node* &head, node* &tail, int data, int position){
        node* curr = head ;
        node* temp = new node(data);
        int k = 1;

        // insert at head 
        if(position == 1){
            insertAtHead(head, tail,data);
            return;
        }

    //  find position where insert
        while(k<position-1){
            curr = curr->next;
            k++;
        }

        // insert at tail
        if(curr->next == NULL){
            insertAtTail(head, tail, data);
            return ;
        }

        // insert number at general case

        curr->next->prev = temp;
        temp->next = curr->next;
        curr->next = temp;
        temp ->prev = curr ;


    }

    void deleteNode(node* &head, node* &tail, int position){
        node* prev = NULL ;
        node* curr = head ;

        // first position 
        if(position == 1){
            head = head->next ;
            curr->next = NULL;
            delete curr;
            return ;
        }

        // find the position which you want to delete
        int cnt = 1;
        while(cnt<position){
            prev = curr;
            curr = curr->next ;
            cnt++ ;
        }

        // last position delete 
        if(curr->next == NULL){
            tail = curr->prev ;
            curr->prev->next =NULL;
            curr->prev = NULL;
            delete curr ;
            return ;
        }

        prev->next = curr->next;
        curr->next->prev = prev ;
        curr->next = NULL;
        curr->prev = NULL;
        delete curr ;
    }

    void print(node* &head){
        node* temp = head ;

        while(temp != NULL){
            cout<<temp->data<<" ";
            temp = temp ->next ;
        }
        cout<<endl;
    }

 int main(){
     node *node1 = new node(9) ;
     cout<<node1->data<<endl;
     cout<<node1->prev<<endl;
     cout<<node1->next<<endl;
     node *head = node1;
     node *tail = node1;

     insertAtHead(head, tail,8);
      print(head);
     insertAtHead(head, tail,10);
      print(head);
     insertAtHead(head,tail, 89);
     print(head);
     insertAtTail(head, tail, 78);
     print(head);
    insertAtTail(head, tail, 80);
    print(head);
    insertAtPosition(head, tail,100,3);
    print(head);
    insertAtPosition(head, tail,1,1);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
      insertAtPosition(head, tail, 333,9);
      print(head);
      cout<<head->data<<endl;
      cout<<tail->data<<endl;
      deleteNode(head,tail,1);
       print(head);
      cout<<head->data<<endl;
      cout<<tail->data<<endl;

       deleteNode(head,tail,5);
       print(head);
      cout<<head->data<<endl;
      cout<<tail->data<<endl;
     
      deleteNode(head,tail,7);
       print(head);
      cout<<head->data<<endl;
      cout<<tail->data<<endl;
    
     return 0;
 }