
using namespace std;
class TrieNode{
    public:
    char data;
    TrieNode**children;
    bool isTerminal;
    TrieNode(char data){
        this->data=data;
        children=new TrieNode*[26];
        for(int i=0;i<26;i++){
            children[i]=NULL;
        }
        isTerminal=false;
    }

};
/*
WE ARE MAKING A TRIENODE WHICH HAVE PROPERTIES LIKE:
    DATA OF THAT NODE
    CHILDREN ARRAY WHICH STORES ADDRESS OF CHILDREN NODES
    ISTERMINAL IS A WORD ENDING HERE

CONSTRUCTOR INTIALIZES WITH THE DATA AND TERMIAL IS FALSE AND MAKING 26(ALPHABETS) EVERY NODE MAKIND NULL
 
*/
