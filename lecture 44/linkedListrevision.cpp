#include<iostream>

using namespace std ;

class LinkedlistkiNode {
    public :
    // data member
    int data  ;
    LinkedlistkiNode* next ;

    // constructor 
    LinkedlistkiNode(int data){
    this ->data = data ;
    this ->next = NULL;
    }

    // distructor
    ~LinkedlistkiNode(){
        int val = this ->data ;
        //memeory free krne k liye 
        if(this->next != NULL){
            delete next ;
           this -> next = NULL;
           
        }
        
        cout<<" memory free ho gya "<<val<<endl;

    }
};

void insertAtHead(LinkedlistkiNode* &Head, int data){
    // new node create krlo
    LinkedlistkiNode* temp = new LinkedlistkiNode(data);
    temp->next = Head ;
    Head = temp;  
}

void insertAtTail(LinkedlistkiNode* &Tail, int data){
    // create a node for data
    LinkedlistkiNode* temp = new LinkedlistkiNode(data);
    Tail->next = temp ;
    Tail = temp;

}
void insertAtMiddle(LinkedlistkiNode* &Head, LinkedlistkiNode* &Tail, int data, int position){

  
    // insert first position 
    if(position == 1){
        insertAtHead(Head, data);
        return ;
    }

      // create node for data
    LinkedlistkiNode* nodeToInsert = new LinkedlistkiNode(data) ;
    LinkedlistkiNode* temp = Head ;
    int cnt = 1 ;

    // get position to insert where 
    while(cnt<position-1){
        temp = temp ->next ;
        cnt++; 
    }

    // insert at last position
    if(temp ->next == NULL){
        insertAtTail(Tail, data);
        return ;
    }

    // general case 
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
    
}

void deleteNode(LinkedlistkiNode* &Head, LinkedlistkiNode* &Tail, int position){

    // create a new node
   
    LinkedlistkiNode* curr = Head ;
    LinkedlistkiNode* prev = NULL;

    // delete a first node 
    if(position == 1){
        LinkedlistkiNode* temp = Head ;
        Head = temp->next ;
       temp->next = NULL;
        delete temp;
        return ;
    }


    int cnt = 1;
    // traverse a loop 
    while(cnt<position){
        prev = curr ;
        curr = curr->next;
        cnt++;
    }

    // last node deletion 
    if(curr ->next == NULL){
        prev->next = NULL;
        Tail = prev ;
        return ;
    }
    // middle node delition
    prev->next = curr->next ;
    curr->next =NULL;
    delete curr ;

}

void print(LinkedlistkiNode* &Head){
    // create a new node 
    LinkedlistkiNode* temp =Head;

    while(temp !=NULL){
        cout<<temp->data<<" ";
        temp = temp ->next;
    }cout<<endl;
}



int main(){
    LinkedlistkiNode* node1 = new LinkedlistkiNode(19);
    cout<<node1->next<<endl;
    cout<<node1->data<<endl;

    LinkedlistkiNode* Head = node1 ;
    LinkedlistkiNode* Tail = node1 ;
    insertAtHead(Head, 60);
    print(Head);
    insertAtTail(Tail, 90);
    print(Head);
    cout<<Head->data<<endl;
    cout<<Tail->data<<endl;
    insertAtMiddle(Head, Tail, 40, 3);
    print(Head);

    insertAtMiddle(Head, Tail, 45, 4);
    print(Head);
     insertAtMiddle(Head, Tail, 9, 1);
    print(Head);

    insertAtMiddle(Head, Tail, 0, 7);
    print(Head);
    deleteNode(Head,Tail,2);
    print(Head) ;
    cout<<"Head ka data "<< Head->data<<endl;
    cout<<"Tail ka data "<<Tail->data<<endl;
    deleteNode(Head,Tail, 6);
    print(Head);
    cout<<"shiv"<<endl;
    cout<<"Head ka data "<< Head->data<<endl;
    cout<<"Tail ka data "<<Tail->data<<endl;

    return 0;


}