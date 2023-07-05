#include<iostream>
#include<map>

using namespace std ;

class Node{
    public :
    int data ;
    Node* next ;

    Node(int data){
        this->data = data ;
        this->next = NULL;
    }
};

void insertAtTail(Node* &tail, int element , int data){
    // empty list 

    if(tail == NULL){
        Node* newNode = new Node(data);
        tail = newNode ;
        newNode ->next = newNode ;
    }

    Node* curr = tail ;
    // find position where you insert the element
    while(curr->data != element){
        curr = curr->next ;
    }
    // insert the element
    Node* temp = new Node(data) ;
    temp->next = curr->next ;
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

    bool floydDetectLoop(Node* tail){
        Node* slow = tail;
        Node* fast = tail;

        while(slow != NULL && fast != NULL){
            fast = fast->next ;
            if(fast != NULL){
                fast = fast ->next ;
            }
            slow = slow->next ;

            if(slow == fast){
                cout<<slow->data<<endl;
                return true ;
            }


        }
        return false ;
    }

int main(){
    Node* node1 = new Node(7);

    Node* tail = node1 ;
    node1 ->next = node1 ;
    print(tail);
    insertAtTail(tail, 7, 9);
    insertAtTail(tail, 9,10);
    insertAtTail(tail,7,17);
    insertAtTail(tail,10,123); 
    insertAtTail(tail,17,170);
    print(tail);
     Node* curr = tail ;
     while(curr->data != 123){
         curr = curr->next ;
     }
    curr->next = tail->next->next ;
    //print(tail);
    if(floydDetectLoop(tail)){
        cout<<"loop is presnt "<<endl;
    }else{
        cout<<"loop is not present "<<endl;
    }

   
}