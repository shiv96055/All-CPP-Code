#include<iostream>

using namespace std ;

class Node{

    public :
    int data;
    Node* next ;

    Node(int data){
        this->data = data ;
        this->next = NULL;
    }
};
    void insertAtTail(Node* &tail, int element, int data){

        if(tail == NULL){
            Node* newNode = new Node(data);
            newNode ->next = newNode ;
        }
        Node* curr = tail;
        while(curr->data != element){
            curr = curr->next ;
    }
        Node* temp = new Node(data);

        temp->next = curr->next ;
        curr->next = temp ;

    }

    bool detectLoop(Node* tail){
        Node* slow = tail ;
        Node* fast = tail ;

        while(slow !=NULL && fast != NULL){
            fast = fast->next ;
            if(fast != NULL){
                fast = fast->next ;
            }
            slow = slow ->next ;

            if(fast == slow){

                cout<<fast->data <<endl;
                return true ;
            }
        }
        return false ;
    }

    void print(Node* tail){
        while(1){
            cout<<tail->data<<" ";
            tail = tail->next ;
        }
    }

    Node* floydDetect(Node* tail){
          Node* slow = tail ;
        Node* fast = tail ;

        while(slow !=NULL && fast != NULL){
            fast = fast->next ;
            if(fast != NULL){
                fast = fast->next ;
            }
            slow = slow ->next ;

            if(fast == slow){

                cout<<fast->data <<endl;
                return fast ;
            }
        }
        return NULL ;

    }

    Node* startNode(Node* tail){
        Node* interSection = floydDetect(tail) ;

        Node* slow = tail ;
        while(slow != interSection){
            slow  = slow->next ;
            interSection = interSection->next ;
        }
        return slow ;
    }

    void removeLoop(Node* &tail){
        Node* startnode = startNode(tail) ;
        Node* curr = startnode ;

        while(curr->next != startnode){
            curr = curr->next ;
        }

        curr->next = NULL ;


    }
int main(){
    Node* node1 = new Node(8);

    Node* tail = node1 ;
    node1->next = node1 ;
    insertAtTail(tail, 8, 60);
    insertAtTail(tail, 60, 20);
    insertAtTail(tail, 8, 19);
    insertAtTail(tail, 19, 25);
    insertAtTail(tail, 20, 30);
    insertAtTail(tail, 25, 14);
    insertAtTail(tail, 30, 10);
    insertAtTail(tail, 14, 90);
    //print(tail);
    Node* curr = tail ; 
    while(curr ->data !=10){
        curr = curr->next ;
    }

    curr ->next = tail->next->next ;

    //print(tail);

    if(detectLoop(tail)){
        cout<<"loop is present "<<endl;
    }else{
        cout<<"loop is not present "<<endl;
    }

    Node* start = startNode(tail);
    cout<<"starting node "<<start->data <<endl;

    removeLoop(tail);
    print(tail);
}