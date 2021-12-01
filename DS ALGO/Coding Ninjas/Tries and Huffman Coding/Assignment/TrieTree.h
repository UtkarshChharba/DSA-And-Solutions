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
    }
    bool palimdrome(string word){
        return palimdrome(root,word);
    }
    bool search(string word){
        return search(root,word);
    }
    void remove(string word){
        remove(root,word);
        return;
    }
    bool pattern_check(string word){
        return pattern_check(root,word);
    }
    void find_node(string word){
        find_node(root,word,word);
    }
    private:
    bool linear_search(TrieNode* root,string word){
        if(!word.size()){
            return true;
        }
        int index=word[0]-'a';
        bool check=false;
        if(root->children[index]!=NULL){
            check=linear_search(root->children[index],word.substr(1));
        }
        return check;
    }
    bool palimdrome(TrieNode*root,string word){
        if(!word.size() && root->isTerminal){
            return true;
        }
        int index=word[word.size()-1]-'a';
        bool check=false;
        if(root->children[index]!=NULL){
            check=palimdrome(root->children[index],word.substr(0,word.size()-1));
        }
        return check;
    }

    bool pattern_check(TrieNode *root,string word){
        bool check=false;
        if(root->data==word[0]){
            check=linear_search(root,word.substr(1));
        }
        else{
            loop(i,0,26){
                if(root->children[i]!=NULL){
                    check=check||pattern_check(root->children[i],word);
                }
            }
        }
        return check;
    }
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
    
    void find_node(TrieNode*root,string word,string initialword){
        if(!word.size()){
            print_word(root,initialword);
            return;
        }
        int index=word[0]-'a';
        if(!root->children[index]){
            cout<<"NO SUCH WORD"<<endl;
            return;
        }
        find_node(root->children[index],word.substr(1),initialword);
        return;
    }
    void print_word(TrieNode*root,string word){
        if(root->isTerminal){
            cout<<word<<endl;
            return;
        }
        loop(i,0,26){
            if(root->children[i]){
                print_word(root->children[i],word+root->children[i]->data);
            }
        }
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
