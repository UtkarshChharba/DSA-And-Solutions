//This is only a Simple file matlab sirf class hai not used for execusion
#include <vector>
using namespace std;
template <typename T>//Using T datatype for the data in the Treenode
class TreeNode{//CLASS TREENODE
    public:
    T data;//DATA OF TYPE T
    vector<TreeNode<T>*> children;
    //A VECTOR OF TYPE TREENODE (POINTER) SO THAT IT CAN STORE ADDRESS OF CHILDEREN
    TreeNode(T data){
        this->data=data;
        //CONSTRUCTOR FOR DATA PLACING IN THE NODE


    }
    ~TreeNode(){//This is a Destructor And called when we write delete root
        loop(i,0,children.size()){//YEH EK LOOP CHALAYEGA JO ROOT KE NODES KE LIYE.. 
        //DESTRUCTOR CALL KREGA
            delete children[i];
        }
        //THIS WILL DELETE ALL NODES BELOW ROOT RECURSIVELY //IS BRACKET KE BAAD ROOT BHI DELETE HOJAYEGI

    }//SO MEANING AGAR EK TREE DELETE KRNA HAI TOH JUST WRITE DELETE ROOT 
};
