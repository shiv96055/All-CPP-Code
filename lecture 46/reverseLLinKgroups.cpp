#include<iostream>

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

 void insertAtHead(Node* &head, int data) {
     Node* temp = new Node(data);
     temp->next = head ;
     head = temp ;
 }

 void print(Node* head){
     while(head != NULL){
         cout<<head->data<<" ";
         head = head->next ;
     }cout<<endl;
 }

 Node* kReverse(Node* head, int k){
        Node* prev = NULL;
        Node* curr = head ;
        int cnt = 0;
        Node* next=NULL ;

        while(curr != NULL && cnt<k){
             next = curr->next ;
            curr->next = prev ;
            prev = curr ;
            curr = next ;
            cnt++;
        }
            if(next!=NULL)
        head->next = kReverse(next, k);
         return prev ;
 }


int main(){
    Node* node1 = new Node(8);

    Node* head = node1 ;
    insertAtHead(head, 6);
    insertAtHead(head, 9);
    insertAtHead(head, 10);
    insertAtHead(head, 11);
    insertAtHead(head, 17);
    print(head);
    Node* ans ;
    ans = kReverse(head, 2);

    print(ans);
    

}