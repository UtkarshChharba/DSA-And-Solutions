#include <bits/stdc++.h>
#include "TrieNode_class.h"
class Trie{
    TrieNode*root;
    public:
    Trie(){
        root=new TrieNode('\0');
    }

    void insertWord(string word){
        insertWord(root,word);
        return;
    }
    bool search(string word){
        return search(root,word);
    }
    void insert_suffix(string word){
        loop(i,0,word.size()){
            insertWord(word.substr(i));
        }
    }

    //THIS WILL INSERT EVERY STARTING CHARACTER AT THE ROOT  LIKE ROOT WILL HAVE "ABC" "BC" "C"
    void remove(string word){
        remove(root,word);
        return;
    }
    private:
    void insertWord(TrieNode*root,string word){
        if(!word.size()){
            root->isTerminal=true; 
            return;
        }
        int index=word[0]-'a';
        TrieNode*child;
        if(root->children[index]!=NULL){
            child=root->children[index];
        }
        else{
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        insertWord(root->children[index],word.substr(1));
        return;
    }
    bool search(TrieNode*root,string word){
        if(!word.size()){
            return root->isTerminal;
        }
        int index=word[0]-'a';
        if(root->children[index]==NULL){
            return false;
        }
        return search(root->children[index],word.substr(1));
    }

    void remove(TrieNode*root,string word){
        if(!word.size()){
            root->isTerminal=false;
            return;
        }
        int index=word[0]-'a';
        if(root->children[index]==NULL){ 
            return;
        }
        TrieNode* child=root->children[index];
        remove(child,word.substr(1));
        if(!child->isTerminal){
            for(int i=0;i<26;i++){
                if(child->children[i]){
                    return;
                }
            }
            delete child;
            root->children[index]=NULL;
            return;
        }
        
    }
    

};
