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

template<typename T>
class Binary_Tree{
    public:
    T data;
    Binary_Tree<T>*left;
    Binary_Tree<T>*right;
    Binary_Tree(T a){
        data=a;
        left=NULL;
        right=NULL;

    }
    ~Binary_Tree(){
        delete left;
        delete right;
    }

};

class BST{
    Binary_Tree<int>*root;
    public:
    BST(){
        root=NULL;
    }
    ~BST(){
        delete root;
    }
    bool is_data(int data){
        return is_data(root,data);
    }
    void insert_data(int data){
        root=insert_data(root,data);
    }
    void delete_data(int data){
        root=delete_data(root,data);
    }
    void print_data(){
        print_tree(root);
    }
    private:
    bool is_data(Binary_Tree<int>*root,int data){
        if(!root){
            return 0;
        }
        if(root->data==data){
            return 1;
        }
        if(root->data>data){
            return is_data(root->left,data);
        }
        return is_data(root->right,data);
    }
    Binary_Tree<int>* insert_data(Binary_Tree<int>*root,int data){
        if(!root){
            Binary_Tree<int>*temp=new Binary_Tree<int>(data);
            return temp;
        }
        if(data>=root->data){
            root->right=insert_data(root->right,data);
        }
        else if(data<root->data){
            root->left=insert_data(root->left,data);
        }
        return root;
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
    Binary_Tree<int>* delete_data(Binary_Tree<int>*root,int data){
        if(!root){
            return NULL;
        }
        if(root->data>data){
            root->left=delete_data(root->left,data);
        }
        if(root->data<data){
            root->right=delete_data(root->right,data);
        }
        if(root->data==data){
            if(root->left==NULL && root->right==NULL){
                delete root;
                return NULL;
            }
            else if(root->left==NULL){
                Binary_Tree<int>*temp=root->right;
                root->right=NULL;
                delete root;
                return temp;
            }
            else if(root->right==NULL){
                Binary_Tree<int>*temp=root->left;
                root->left=NULL;
                delete root;
                return temp;
            }
            else{
                Binary_Tree<int>*mn=root->right;
                while(mn->left){
                    mn=mn->left;
                }
                root->data=mn->data;
                root->right=delete_data(root->right,root->data);
                return root;
            }
        }
        return root;

    }

};
//.............................................................................................//
int32_t main(){
    BST b;
    b.insert_data(10);
    b.insert_data(5);
    b.insert_data(20);
    b.insert_data(7);
    b.insert_data(3);
    b.insert_data(15);
    b.print_data();
    b.delete_data(10);
    b.delete_data(10);
    b.print_data();

return 0;
}
//.............................................................................................//