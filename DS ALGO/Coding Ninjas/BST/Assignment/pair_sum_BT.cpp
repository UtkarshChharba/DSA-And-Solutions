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
#define all(v)                          v.begin(),v.end()
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

Binary_Tree<int>* find_other(Binary_Tree<int>*root,int data){
    if(!root){
        return NULL;
    }
    if(root->data==data){
        return root;
    }
    Binary_Tree<int>*left=find_other(root->left,data);
    Binary_Tree<int>*right=find_other(root->right,data);
    if(left){
        return left;
    }
    return right;
}
void make_array(Binary_Tree<int>*root,vi &v){
    if(!root){
        return;
    }
    v.pb(root->data);
    make_array(root->left,v);
    make_array(root->right,v);

}
void pair_sum(Binary_Tree<int>*root,Binary_Tree<int>*global_root,int data,vector<pair<Binary_Tree<int>*,Binary_Tree<int>*> > &v){
    if(!root){
        return;
    }
    if(root->data<data/2){
        Binary_Tree<int>*other=find_other(global_root,data-root->data);
        if(other){
            v.pb(make_pair(root,other));
        }
    }
    pair_sum(root->left,global_root,data,v);
    pair_sum(root->right,global_root,data,v);
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
        cout<<"Input Data Of Left Of "<<front->data<<endl;
        int a;
        cin>>a;
        if(a==-1){
            front->left=NULL;
        }
        else{
            front->left=new Binary_Tree<int>(a);
            pending_queues.push(front->left);
        }
        cout<<"Input Data Of Right Of "<<front->data<<endl;
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

//.............................................................................................//
int32_t main(){
FIO
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1 
Binary_Tree<int>*root=takeinput_levelwise();
vector<int> v;
int data;cin>>data;
make_array(root,v);
sort(all(v));
int i=0,j=v.size()-1;
while(i<=j){
    if(v[i]+v[j]==data){
        cout<<v[i]<<" "<<v[j]<<endl;
        i++;
        j--;
    }
    if(v[i]+v[j]>data){
        j--;
    }
    else{
        i++;
    }
}
return 0;

}
//.............................................................................................//