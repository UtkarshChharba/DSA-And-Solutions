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

bool find_ancestor(Binary_Tree<int>*root,int data,stack<Binary_Tree<int>*>&s){
    if(!root){
        return false;
    }
    if(root->data==data){
        s.push(root);
        return true;
    }
    bool left=find_ancestor(root->left,data,s);
    bool right=find_ancestor(root->right,data,s);
    if(left Or right){
        s.push(root);
    }
    return(left Or right);

}
int LCA(Binary_Tree<int>*root,int data1,int data2){
    stack<Binary_Tree<int>*> s1;
    stack<Binary_Tree<int>*> s2;
    find_ancestor(root,data1,s1);
    find_ancestor(root,data2,s2);
    if(s1.empty() And s2.empty()){
        return -1;
    }
    if(s1.empty()){
        return s2.top()->data;
    }
    if(s2.empty()){
        return s1.top()->data;
    }
    int a=s1.top()->data;
    while(s1.size() And s2.size() And s1.top()->data==s2.top()->data){
        a=s1.top()->data;
        s1.pop();
        s2.pop();
    }
    return a;

    
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
int data1,data2;cin>>data1>>data2;
int LCA_data=LCA(root,data1,data2);
cout<<LCA_data<<endl;
return 0;

}
//.............................................................................................//
