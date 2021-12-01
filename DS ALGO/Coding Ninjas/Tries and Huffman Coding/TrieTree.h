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
    void remove(string word){
        remove(root,word);
        return;
    }
    private:

    void insertWord(TrieNode*root,string word){
        if(!word.size()){
            root->isTerminal=true; //MARK THE LAST WORD AS TRUE THAT A WORD END HERE
            return;
        }
        int index=word[0]-'a';
        TrieNode*child;
        if(root->children[index]!=NULL){//AGAR AISE CHAR KA CHILD HAI TOH BHADIYA
            child=root->children[index];
        }
        else{//AGAR AISE NAAM KA CHILD NHI HAI THEN MAKE ONE
            child=new TrieNode(word[0]);
            root->children[index]=child;
        }
        insertWord(root->children[index],word.substr(1));//AAGE RECURSVIELY CHILD BANATE JAO
        return;
    }
    bool search(TrieNode*root,string word){
        if(!word.size()){
            return root->isTerminal;//AGAR KOI WORD YAHA END HOTA HAI
        }
        int index=word[0]-'a';
        if(root->children[index]==NULL){//AGAR AISA KOI WORD KA CHAR HI NHI TOH RETURN FALSE
            return false;
        }
        return search(root->children[index],word.substr(1));//CHECK FOR OTHER CHAR
    }

    void remove(TrieNode*root,string word){
        if(!word.size()){//MAKRING THE END AS NOT WORDING ENDING HERE
            root->isTerminal=false;
            return;
        }
        int index=word[0]-'a';
        if(root->children[index]==NULL){//IF SUCH A WORD DOSENT EXIST RETURN 
            return;
        }
        TrieNode* child=root->children[index];//MARKING A CHILD
        remove(child,word.substr(1));//RECURSIVLY DELETING THE CHILD'S CHILD RECURSIVELY
        if(!child->isTerminal){//IF NO WORD AT CHILD THEN CHECK THAT NO CHILD HAVE ANY OTHER CHILD
            for(int i=0;i<26;i++){
                if(child->children[i]){//IF A CHILD EXIST FOR A CHILD THEN RETURN
                    return;
                }
            }
            delete child;//IS NO OTHER CHILD THEN DELETE THE CHILD
            root->children[index]=NULL;
            return;
        }
        
    }

};
/*
TRIE NODE CONTAIN A ROOT AND A DEFAULT COSNTRUCTOR TO INTIALIZE THE START AS '\0'

TRIE NODE CLASS IS HAVING 3 MAIN FUNCTIONS :-
    1.INSERT:-
        INPUT THE WORD
        IF THE WORD FIRST ELEMENT ALREADY EXIST THEN GO TO THAT CHILD NODE OTHERWISE CREATE SUCH CHILD NODE
        AND THEN MAKE CHILD NODE AS ROOT AND WORD AS WORD.SUBSTR(1)="abc"="bc"
        WHEN THE SIZE OF WORD IF ZERO THEN MARK THE ROOT AS TERMINAL THAT THIS THE WHERE THE WORD ENDS
    
    2.SEARCH:-
        INPUT THE WORD
        GO TO THE NODE IS RECURSIVELY 
        IF SO SUCH NODE EXIST FOR A WORD RETURN FALSE
        IF WORD SIZE IS ZERO AND ROOT->ISTERMINAL THAT MEANS THERE IS SUCH A WORD RETURN TRUE
    
    3.REMOVE:-
        INPUT THE WORD
        GO TO THE WORD LAST CHAR
        REMOVE IS TERMINAL FOR THAT ROOT
        IF THE CHILD DOESNT HAVE A ISTERMINAL AND ANY OTHER CHILD THEN DELETE CHILD AND RETURN
*/
