#include<iostream>
using namespace std ;

class Node{
    public :
    int data ;
    Node* next ;
    Node(int data){
        this->data = data ;
        this->next = NULL ;
    }
};
    Node* findMid(Node* head){
        Node* slow = head ;
        Node* fast = head->next ;

        while(fast != NULL && fast ->next !=NULL){
            slow = slow->next ;
            fast = fast -> next ->next ;
        }
        return slow ; 
    }

    Node* merge(Node* left, Node* right){

        if(left == NULL){
            return right ;
        }
        if(right == NULL){
            return left ;
        }
        Node* temp = new Node(-1) ;
        Node* ans  = temp ;

        while(left != NULL && right != NULL){
            if(left->data < right ->data){
                temp->next = left ;
                temp = left ;
                left = left->next ;
            }else{
                temp->next = right ;
                temp = right ;
                right = right->next ;
            }
        }

        while(left != NULL){
              temp->next = left ;
                temp = left ;
                left = left->next ;
        }

        while(right != NULL){
              temp->next = right ;
                temp = right ;
                right = right->next ;
        }
        ans = ans ->next ;
        return ans ;
    }



    Node* mergeSort(Node* head){

        // base case 
        if(head == NULL || head ->next == NULL){
            return head ;
        }

        // find mid and break LinkedList in two halves 
        Node* mid = findMid(head) ;
        Node* left = head ;
        Node* right = mid->next ;
        mid->next = NULL ;

        // sort left and right part 
        left = mergeSort(left) ;
        right = mergeSort(right) ;


        // merge sorted left and right part 
        Node* result = merge(left, right) ;

        return result ;


    }

    void insertAtHead(Node* &head, int data){
        Node* temp = new Node(data);
        temp->next = head ;
        head = temp;
    }

    void print(Node* head){
        while(head != NULL){
            cout<<head->data<<" ";
            head = head->next ;
        }
        cout<<endl;
    }
int main (){
    Node* node1 = new Node(8);
    cout<<node1->data<<endl;
    Node* head1 = node1 ;

    insertAtHead(head1, 10);
    insertAtHead(head1, 15);
    insertAtHead(head1, 12);
    insertAtHead(head1, 67);
    print(head1);
    Node* head2 =new Node(4) ;
    insertAtHead(head2, 19);
    insertAtHead(head2, 18);
    insertAtHead(head2, 50); 
    insertAtHead(head2, 17);
    print(head2);
   Node* ans =  mergeSort(head1);
   print(ans);

   Node* ans2 = mergeSort(head2) ;
   print(ans2);


}
