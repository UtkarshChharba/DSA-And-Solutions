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
template<typename T>
void PrintTree(Binary_Tree<T>* root){ 
    if(!root){
        return;
    }
    cout<<root->data<<":";
    if(root->left){
        cout<<"L "<<root->left->data<<" ";
    }
    if(root->right){
        cout<<"R "<<root->right->data<<" ";
    }
    cout<<endl;
    PrintTree(root->left);
    PrintTree(root->right);
    return;

}
void zig_zag_tree_method_2(Binary_Tree<int>*root){
    queue<Binary_Tree<int>*> q;
    q.push(root);
    int value=1;
    while(q.size()){
        int size=q.size();
        stack<Binary_Tree<int>*> s;
        while(size--){
        Binary_Tree<int>*front=q.front();
        q.pop();
            cout<<front->data<<" ";
            if(value%2){
                if(front->left){s.push(front->left);}
                if(front->right){s.push(front->right);}
            }
            else{
                if(front->right){s.push(front->right);}
                if(front->left){s.push(front->left);}
            }
        }
        cout<<endl;
        while(s.size()){
            q.push(s.top());
            s.pop();
        }
        value=1-value;

    }
    
}
void print_zigzag(Binary_Tree<int>*root){
    if(!root){
        return;
    }
    
    int i=1;
    queue<Binary_Tree<int>*> pending_nodes;
    stack<int> s;
    pending_nodes.push(root);
    cout<<root->data<<endl;
    pending_nodes.push(NULL);
    while(pending_nodes.size()){
        Binary_Tree<int>*front=pending_nodes.front();
        
        pending_nodes.pop();
        if(!front){
            i=1-i;
            while(!s.empty()){
                cout<<s.top()<<" ";
                s.pop();
            }
            cout<<endl;
            if(pending_nodes.size()){
                pending_nodes.push(NULL);  
                }
        }
        else{
        if(front->left){
            if(i){
                s.push(front->left->data);
            }
            else{
                cout<<front->left->data<<" ";
            }
        pending_nodes.push(front->left);
        }
        if(front->right){
            if(i){
                s.push(front->right->data);
            }
            else{
                cout<<front->right->data<<" ";
            }
        pending_nodes.push(front->right);
        }
        }
    }
    }

Binary_Tree<int>* takeinput_levelwise(){
    int a;
    cout<<"Input The root data"<<endl;
    cin>>a;
    if(a==-1){
        return NULL;
    }
    queue<Binary_Tree<int>*> pending_queues;
    Binary_Tree<int>*root=new Binary_Tree<int>(a);
    pending_queues.push(root);
    while(pending_queues.size()){
        Binary_Tree<int>*front=pending_queues.front();
        pending_queues.pop();
        cout<<"Input Data Of Left"<<endl;
        int a;
        cin>>a;
        if(a==-1){
            front->left=NULL;
        }
        else{
            front->left=new Binary_Tree<int>(a);
            pending_queues.push(front->left);
        }
        cout<<"Input Data Of Right"<<endl;
        cin>>a;
        if(a==-1){
            front->right=NULL;
        }
        else{
            front->right=new Binary_Tree<int>(a);
            pending_queues.push(front->right);
            
        }


    }
    return root;
}

//.............................................................................................
int32_t main(){
FIO
Binary_Tree<int>*root=takeinput_levelwise();
zig_zag_tree_method_2(root);
return 0;
}

//.............................................................................................