#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define tl(v,size) for(int i=0;i<size;i++){cout<<v[i]<<' ';} cout<<endl
#define int long long
#define pi (3.141592653589)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=b;i>=a;i--)
#define mod 1000000007
#define endl '\n'
#define pii pair<int, int>
#define w(t) int t;cin>>t;while(t--)
#define mii map<int, int>
#define And &&
#define vi vector<int>
#define Or ||
#define float double
#define pb push_back
#define mp make_pair
#include <map>
#define infinity                        999999999999999999
#define all(v)                          (v).begin(),(v).end()
#define MOD_DEFINE                      const int MOD = 1e9 + 7;
#define ff first
#define ss second
#define min3(a, b, c) min(c, min(a, b))
#define in insert
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define FIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define fps(x,y)                        fixed<<setprecision(y)<<x


class TreeNode{
    public:
    int height;
    int data;
    TreeNode*left;
    TreeNode*right;
    TreeNode(int data){
        this->data=data;
        left=NULL;
        right=NULL;
        height=1;
    }
};
class AVL_Tree{
    TreeNode*root;

    public:
    AVL_Tree(){
        root=NULL;
    }
private:
int height(TreeNode *N)
    {
        if (N == NULL)
            return 0;
        return N->height;
    }
        
int getBalance(TreeNode *N)
        {
        if (N == NULL)
            return 0;
        return height(N->left) - height(N->right);
        }
    
//Chhabra Utkarsh 
//20103084
//CSE


/*
T1, T2, T3 and T4 are subtrees.
         y                                      x 
        / \                                   /   \
       x   T4      Right Rotate (z)          z      y
      / \          - - - - - - - - ->      /  \    /  \ 
     z   T2                               T1  T3  T2  T4
    / \
  T1   T3
*/
TreeNode *rightRotate(TreeNode *y)
    {
    TreeNode *x = y->left;
    TreeNode *T2 = x->right;
 
    x->right = y;
    y->left = T2;
 
    y->height = max(height(y->left),
                    height(y->right)) + 1;
    x->height = max(height(x->left),
                    height(x->right)) + 1;
 
    return x;
    }



/*

  x                                y
 /  \                            /   \ 
T1   y     Left Rotate(z)       x      z
    /  \   - - - - - - - ->    / \    / \
   T2   z                     T1  T2 T3  T4
       / \
     T3  T4

*/
TreeNode *leftRotate(TreeNode *x)
{
    TreeNode *y = x->right;
    TreeNode *T2 = y->left;
 
    y->left = x;
    x->right = T2;

    x->height = max(height(x->left),   
                    height(x->right)) + 1;
    y->height = max(height(y->left),
                    height(y->right)) + 1;
 
    return y;
}

TreeNode* insert(TreeNode*root,int data){
    if(!root){
        TreeNode*root=new TreeNode(data);
        return root;
    }
    if(root->data>data){
        root->left=insert(root->left,data);
    }
    if(root->data<data){
        root->right=insert(root->right,data);
    }

    root->height=max(height(root->left),height(root->right))+1;
    int balance=getBalance(root);

    if(balance>1 And root->left->data>data){//left left case
        return rightRotate(root);
    }
    if(balance>1 And root->left->data<=data){//left right case
        root->left=leftRotate(root->left);
        return rightRotate(root);
    }
    if(balance<-1 And root->right->data>data){//right left
       root->right=rightRotate(root->right);
       return leftRotate(root);

    }
    if(balance<-1 And root->right->data<=data){//right right
        return leftRotate(root);
    }
    return root;

    
}
void printTree(TreeNode*root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    printTree(root->left);
    printTree(root->right);
}
public:

void insert(int data){
    root=insert(root,data);
}
void printTree(){
    printTree(root);
}


};
//.............................................................................................//
int32_t main(){
FIO

    AVL_Tree Tree;
    Tree.insert(10);

    Tree.insert(20);

    Tree.insert(30);

    Tree.insert(40);

    Tree.insert(50);

    Tree.insert(25);
    Tree.printTree();



return 0;
}
//.............................................................................................//
/*



LEFT-LEFT CASE:-JAB IMBALANCE IS DUE TO LEFT AND LEFT HEIGHT
ISME HUM SIRF EK RIGHT SHIFT MARTE AT Z

T1, T2, T3 and T4 are subtrees.
         z                                      y 
        / \                                   /   \
       y   T4      Right Rotate (z)          x      z
      / \          - - - - - - - - ->      /  \    /  \ 
     x   T3                               T1  T2  T3  T4
    / \
  T1   T2



LEFT-RIGHT CASE:-WHEN HEIGHT DIFFRENCE IS DUE TO FIRST LEFT AND THEN RIGHT
    TOH USME HUM PEHLE NEECHE Y KO LEFT SHIFT MARTE AND THEN Z KO RIGHT SHIFT

     z                               z                           x
    / \                            /   \                        /  \ 
   y   T4  Left Rotate (y)        x    T4  Right Rotate(z)    y      z
  / \      - - - - - - - - ->    /  \      - - - - - - - ->  / \    / \
T1   x                          y    T3                    T1  T2 T3  T4
    / \                        / \
  T2   T3                    T1   T2
  
  
RIGHT-RIGHT CASE:- WHEN HEIGHT DIFFRENCE IS DUE TO RIGHT DIFFRENCE 
 TOH WE ARE JUSR USING A LEFT SHIFT

 z                                y
 /  \                            /   \ 
T1   y     Left Rotate(z)       z      x
    /  \   - - - - - - - ->    / \    / \
   T2   x                     T1  T2 T3  T4
       / \
     T3  T4



RIGHT-LEFT SHIFT :- WHEN HEIGH DIFFRENCE IS DUE TO RIGHT LEFT DIFFRENCE


   z                            z                            x
  / \                          / \                          /  \ 
T1   y   Right Rotate (y)    T1   x      Left Rotate(z)   z      y
    / \  - - - - - - - - ->     /  \   - - - - - - - ->  / \    / \
   x   T4                      T2   y                  T1  T2  T3  T4
  / \                              /  \
T2   T3                           T3   T4







WE ARE GETTING BALANCE WHICH IS JUST (LEFT_HEIGHT-RIGHT_HEIGHT)
IF BALANCE <-1 TOH BALANCE SHI NHI HAI AND RIGHT SIDE ZYADA HAI MATLAB CASE IS OF RIGHT-____ SHIFT
IF BALANCE >1 TOH BALANCE SHI NHI HAI AND LEFT SIDE ZYADA HAI MATLAB CASE IS OF LEFT-____ SHIFT


CASES OF INSERTION FOR LEFT-_____ CASE
    AB SITUATION ALL ON ON LEFT NODE AGAR WOH BDA HUA APNE INSERTION VALUE SE(KEY)
    THEN KEY WOULD GO ON THE LEFT
SO THIS IS A CASE OF "LEFT-LEFT" ROTATION


    IF KEY>=NODE->LEFT->KEY THEN OBVIOUSLY THIS IS "LEFT RIGHT" ROTATION


SIMILARLY FOR RIGHT ALSO






  */