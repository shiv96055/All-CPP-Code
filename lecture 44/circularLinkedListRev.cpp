#include<iostream>

using namespace std; 

    class Node{
        public :
        int data ;
        Node* next ;
        Node(int data){
            this->data = data ;
            this->next =NULL ;

        }

        ~Node(){
            int value = this->data ;
            if(this->next !=NULL){
                delete next ;
                next= NULL;
            }

            cout<<"memory is free"<<value <<endl;
        }
    };

    void insertAtTail(Node* &tail, int data,int element){
        Node* temp = new Node(element);
        if(tail==NULL){
            tail = temp;
            temp->next = temp;
        }
    }
int main(){
    Node* node1 = new Node(7);
    Node* tail = NULL ;
    cout<<tail->data<<endl;
    cout<<tail->next<<endl;
    insertAtTail(tail,7,6);
    cout<<tail->data<<endl;
    cout<<tail->next<<endl;
} 
