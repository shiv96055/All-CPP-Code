#include<bits/stdc++.h>

using namespace std;

class node{
public:
int data;
node*next;

node(int data){
    this->data = data;
    this->next = NULL;
}
};

void takeInput(node* &head, node* &tail){

    cout << "enter data " << endl;
    int data;
    cin >> data;
    while( data != -1){

        node *temp = new node(data);
        if(head == NULL){
            head = temp;
            tail = temp;
        }else{
            tail->next = temp;
            tail = temp;
        }

        cin >> data;
    }
}

void insertAtHead(node* &head, int data){
    node *temp = new node(data);
    temp->next = head;
    head = temp;
}

void insertAtTail(node* &tail, int data){

    node *temp = new node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(node* &head, node* &tail, int position , int value){

    node *newNode = new node(value);
    if(p)
}
void print(node* head){

    node *curr = head;
    while(curr != NULL){
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
}
int main(){
    cout << "shiv kumar" << endl;
    node *head = NULL;
    node *tail = NULL;
    takeInput(head, tail);
    print(head);

    insertAtHead(head, 95);
    insertAtTail(tail, 70);
    insertAtPosition(head, tail, 1, 10);
    print(head);
    cout << tail->data;
    return 0;

}