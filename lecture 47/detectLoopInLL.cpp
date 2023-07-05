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

    bool loopDetection(Node* tail){

        map<Node*, bool> visited ;
        Node* temp = tail ;

        while(temp != NULL){

            // cycle is present
            if(visited[temp] == true){
                cout<<temp->data<<endl;
                return true ;
            }
            visited[temp] = true ;
            temp = temp ->next ;
        }
        return false ;

    }

int main(){
    Node* node1 = new Node(7);

    Node* tail = node1 ;
    if(loopDetection(tail)){
        cout<<"loop is present "<<endl;
    }else{
        cout<<"loop is not present "<<endl;
    }
    node1 ->next = node1 ;
    print(tail);
    insertAtTail(tail, 7, 9);
    insertAtTail(tail, 9,10);
    insertAtTail(tail,7,17);
     insertAtTail(tail,10,123); 
     insertAtTail(tail,17,170);
    print(tail);

    if(loopDetection(tail)){
        cout<<"loop is present "<<endl;
    }else{
        cout<<"loop is not present "<<endl;
    }

     Node* curr = tail ;
     while(curr->data != 123){
         curr = curr->next ;
     }


    curr->next = tail->next->next ;

    if(loopDetection(tail)){
        cout<<"loop is present "<<endl;
    }else{
        cout<<"loop is not present "<<endl;
    }
   
}
