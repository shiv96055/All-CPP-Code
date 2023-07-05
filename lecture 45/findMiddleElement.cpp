#include<iostream>

using namespace std ;
class Node{
    public:
    int data ;
    Node* next ;
    Node(int data){
        this->data = data ;
        this->next = NULL ;
    }
};
void insertAtHead(Node* &head, int data){
    Node* temp = new Node(data);
    temp ->next = head ;
    head = temp; 
}

    Node* findMiddle(Node* head){
        if(head == NULL || head->next== NULL){
            return head ;
        }
    }

    void print(Node* head){
        while(head != NULL){
            cout<<head->data<<" ";
            head = head->next ;
        }
        cout<<endl;
    }

int main(){
    Node* node1 = new Node(7);
    Node* head = node1 ;

    insertAtHead(head, 5);
    insertAtHead(head, 9);
    insertAtHead(head, 10);
    insertAtHead(head,20);
    print(head);

    Node* middle = findMiddle(head);
    cout<<middle->data <<endl;
}