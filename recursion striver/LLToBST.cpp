#include<bits/stdc++.h>

using namespace std;

class node{

    public:
    int data;
    node *left;
    node *right;

    node(int data){

        this->data = data;
        left = NULL;
        right = NULL;
    }
};

class LLnode{
    public:
    int data;
    LLnode *next;

    LLnode(int data){
        this->data = data;
        this->next = NULL;
    }
};

// find mid of linked list
LLnode* findMid(LLnode* head, LLnode* tail){
    LLnode *slow = head;
    LLnode *fast = head;

    while(fast != NULL){
        slow = slow->next;
        fast = fast->next;

        if(fast != NULL){
            fast = fast->next;
        }
    }
    return slow;
}

node* buildSortedTree(LLnode* head, LLnode* tail){
    
    


}


node* buildTree( LLnode* head){


     if(head == NULL){
        return NULL;
    }

    node *root = buildSortedTree(head, NULL)
        return root;
}



void inordereTraversal(node* root){

    if(root == NULL)
        return;

    inordereTraversal(root->left);
    cout << root->data << " ";
    inordereTraversal(root->right);
}


int main(){

   
    LLnode *head = new LLnode(1);
    head->next = new LLnode(2);
    head->next->next = new LLnode(3);
    head->next->next->next = new LLnode(4);
    head->next->next->next->next = new LLnode(5);
    head->next->next->next->next->next = new LLnode(6);
    head->next->next->next->next->next->next = new LLnode(7);
    head->next->next->next->next->next->next->next = new LLnode(8);
    node *root = NULL;
    root = buildTree(head);
    cout << root->data;
    inordereTraversal(root);
    return 0;
}