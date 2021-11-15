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
int height(Binary_Tree<int>*root){
    if(!root){
        return 0;
    }
    return max(height(root->left),height(root->right))+1;
}
void print(Binary_Tree<int>*root,int level){
    if(!root){
        return;
    }
    if(level==1){
        cout<<root->data<<" ";
    }
    print(root->left,level-1);
    print(root->right,level-1);
    return;
}
void print_levelwise(Binary_Tree<int>*root,int k){
    if(!root){
        return ;
    }
    loop(i,1,k+1){
        print(root,i);
        cout<<endl; 
    }
    
}

Binary_Tree<int>* remove_leaf(Binary_Tree<int>*root){
    if(!root){
        return root;
    }
    if(root->left==NULL And root->right==NULL){
        delete root;
        return NULL;
    }

    root->left=remove_leaf(root->left);
    root->right=remove_leaf(root->right);
    return root;
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

//.............................................................................................//
int32_t main(){
FIO
Binary_Tree<int>*root=takeinput_levelwise();
root=remove_leaf(root);
print_levelwise(root,height(root));
return 0;
}
//.............................................................................................//