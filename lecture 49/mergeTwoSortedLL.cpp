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

    int main(){
        Node* temp = new Node(8) ;
        Node* head = NULL ;
        cout<<head->data<<endl;
        cout<<temp->data<<endl;
        cout<<temp->next<<endl;
        cout<<"shiv"<<endl;
        // cout<<head->data<<endl;
        // cout<<head->next<<endl;
        head = temp;
        cout<<head->data<<endl;
        cout<<head->next<<endl;
    }