#include<bits/stdc++.h>

using namespace std;
class trieNode{
    public:
    char data;
    trieNode *children[26];
    bool isTerminal;

    trieNode(char ch){

        this->data = ch;
        for (int i = 0; i < 26;i++){
            children[i]  = NULL;
        }
        isTerminal = false;
    }
};

class Trie{

    public:
        trieNode *root;

        Trie(){
            root = new trieNode('\0');
        }
        void insertUtil(trieNode* root, string word){
            // base case

            if(word.length() == 0){

                root->isTerminal = true;
                return;
            }
            // assumption word is in capital
            int index = word[0] - 'A';
            trieNode *child;

            if(root ->children[index] != NULL){
                // present vala case
                child = root->children[index];
            }else{
                // absent case 
                child = new trieNode(word[0]);
                root->children[index] = child;
            }

            // recursion mharaj smbhal lege

            insertUtil(child, word.substr(1));
        }


        void insertWord(string word){

            insertUtil(root, word);
        }

        bool searchUtil(trieNode* root, string word){
            // base case 

            if(word.length() == 0){
                return root ->isTerminal;
            }

            int index = word[0] - 'A';
            trieNode *child;

            if(root ->children[index] != NULL){
                child = root->children[index];
                
            }else{
                return false;
            }

            return searchUtil(child, word.substr(1));
        }

        bool search(string word){

            return searchUtil(root, word);
        }
};


int main(){

    Trie *t = new Trie() ;
    t->insertWord("SHIV");
    t->insertWord("KUMAR");

    cout << t->search("KUMAR") << endl;
    cout << t->search("SHIV") << endl;
    return 0;
}