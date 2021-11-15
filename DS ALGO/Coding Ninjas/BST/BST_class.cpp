#include <bits/stdc++.h>
#include <vector>
using namespace std;
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
#include "Binary_Tree_class.h"


/*
WE ARE MAKING A CLASS BST WHICH WILL CONTAIN ONLY ROOT AND VARIOUS FUNCTIONS OF BST
IT CAN:-
    INSERT 
    PRINT
    DELETE
    CHECK DATA
IN A BST


IT ONLY CONTAINS THE DATA
*/
class BST{
    Binary_Tree<int>*root;
    public:
    BST(){
        root=NULL;
    }
    ~BST(){
        delete root;
        //THIS DELETES THE WHOLE BST BY CALLING THE BINARY_TREE CLASS
    }
    bool is_data(int data){
        return is_data(data,root);
        //CHECKS FOR DATA 
        //MADE A PRIVATE FUNTION FOR IT AS CANT PASS THE ROOT FOR THE OBJECT ITSELF
    }
    void insert_data(int data){
        root=insert_data(data,root);
    }
    void delete_data(int data){
        root=delete_data(data,root);
    }
    void print_tree(){
        print_tree(root);
    }
    private:
    bool is_data(int data,Binary_Tree<int>*root){
        if(!root){
            return false;//PEHLE AGAR NULL HAI TOH RETURN FALSE
        }
        if(root->data==data){
            return true;//AGAR DATA MILA TOH RETURN TRUE
        }
        if(root->data>data){
            return is_data(data,root->left);//AGAR JO ROOT KA DATA HAI THAT IS GREATER THAN DATA THEN GO LEFT
        }
        return is_data(data,root->right);//AGAR JO ROOT KA DATA HAI THAT IS LESS THAN DATA THEN GO right

        
    }
    void print_tree(Binary_Tree<int>*root){
        if(!root){
            return;
        }
        cout<<root->data<<":";
        if(root->left){
            cout<<"L"<<root->left->data;
        }
        if(root->right){
            cout<<"R"<<root->right->data;
        }
        cout<<endl;
        print_tree(root->left);
        print_tree(root->right);
    }
    void print_tree_levelwise(Binary_Tree<int>*root){
        if(!root){
            return;
        }
        queue<Binary_Tree<int>*> pending_node;
        pending_node.push(root);
        pending_node.push(NULL);
        cout<<root->data<<endl;
        while(pending_node.size()){
            Binary_Tree<int>*front=pending_node.front();
            pending_node.pop();
            if(!front){
                cout<<endl;
                if(pending_node.size()){
                    pending_node.push(NULL);
                }
            }
            else{
            if(front->left){
                cout<<front->left->data<<" ";
                pending_node.push(front->left);
            }
            if(front->right){
                cout<<front->right->data<<" ";
                pending_node.push(front->right);
            }
        }
        }

    }
    Binary_Tree<int>* insert_data(int data,Binary_Tree<int>*root){
        if(!root){
            //AGAR ISKE AAGE NULL HAI TOH BS USKI NODE BNA DO
            Binary_Tree<int>*root=new Binary_Tree<int>(data);
            return root;
        }
        if(root->data<=data){
            //AGAR DATA IS GREATER THAN OR EQUAL TO ROOT THEN GO RIGHT
            root->right=insert_data(data,root->right);
            return root;
        }
        //ELSE FOR LEFT
        root->left=insert_data(data,root->left);
        return root;

    }
    Binary_Tree<int>* delete_data(int data,Binary_Tree<int>*root){
        if(!root){
            //AGAR ROOT MEIN KO AISA DATA MILA HI NHI AND ROOT==NULL THEN RETURN NULL
            return NULL;
        }
        if(root->data>data){//AGAR DATA IS LESS THAN ROOT THEN GO LEFT
            root->left=delete_data(data,root->left);
            //WE ARE DOING ROOT->LEFT BECOZ THERE MIGHT BE A CASE WE LEFT CAN CHANGE
            return root;
        }
        if(root->data<data){//SAME LOGIC AS ABOVE
            root->right=delete_data(data,root->right);
            return root;
        }
        if(root->data==data){
            //AGAR DATA==ROOT KA DATA THEN THERE MIGHT BE 3 CASES 
            //1.   DATA
               //NULL  NULL
            if(root->left==NULL And root->right==NULL){
                delete root;
                return NULL;
            }
            //2.
            //       DATA      OR        DATA 
            //    NULL   RIGHT        LEFT  NULL
            if(root->left==NULL){
                Binary_Tree<int>*temp=root->right;
                root->right=NULL;
                delete root;
                return temp;
            }
            if(root->right==NULL){
                Binary_Tree<int>*temp=root->left;
                root->left=NULL;
                delete root;
                return temp;
            }
            //3. JB DONO SIDE PE KUCH DATA HAI
            //SO YAHA WE JUST FOLLOWED A SIMPLE METHOD THAT JO RIGHT NODE KA MINIMUM HAI
            //USSE ROOT KA DATA DO AS THAT IS THE LEAST DATA ROOT CAN HAVE AND MINIMUM NODE KE
            //DATA KO ROOT KA DATA DO AND DELETE THAT RECUSIVELY WHICH WILL COME UNDER CASE 2
            // MINIMUM IN RIGHT WILL BE RIGHT'S LEFTMOST ELEMENT 
            else{
                Binary_Tree<int>*min_node=root->right;
                while(min_node->left){
                    min_node=min_node->left;
                }
                int right_min=min_node->data;
                root->data=right_min;
                root->right=delete_data(right_min,root->right);
                return root;
            }
        }
        return root;
    }
};

int32_t main(){
    BST b;
    b.insert_data(10);
    b.insert_data(5);
    b.insert_data(20);
    b.insert_data(7);
    b.insert_data(3);
    b.insert_data(15);
    b.print_tree();
    b.delete_data(10);
    b.delete_data(10);
    b.print_tree();

}
