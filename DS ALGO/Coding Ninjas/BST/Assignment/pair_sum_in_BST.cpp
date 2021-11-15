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
void left_stack_filler(Binary_Tree<int>*root,stack<Binary_Tree<int>*>&s){
    if(!root){
        return;
    }
    s.push(root);
    left_stack_filler(root->left,s);
    return;
}
void right_stack_filler(Binary_Tree<int>*root,stack<Binary_Tree<int>*>&s){
    if(!root){
        return;
    }
    s.push(root);
    right_stack_filler(root->right,s);
    return;
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
void stack_print(stack<Binary_Tree<int>*> s){
    while(s.size()){
        cout<<s.top()->data<<" ";
        s.pop();
    }
    cout<<endl;
}
int total_nodes(Binary_Tree<int>*root){
    if(!root){
        return 0;
    }
    int left=total_nodes(root->left);
    int right=total_nodes(root->right);
    return 1+left+right;
}
//.............................................................................................//
int32_t main(){
FIO
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1 
Binary_Tree<int>*root=takeinput_levelwise();
int k;cin>>k;
stack<Binary_Tree<int>*> s1;
stack<Binary_Tree<int>*> s2;
left_stack_filler(root,s1);
right_stack_filler(root,s2);
int totalnodes=total_nodes(root);
int i=0;
while(s1.top()->data<s2.top()->data){
    Binary_Tree<int>*a,*b;
    if(s1.top()->data+s2.top()->data==k){
        a=s1.top();
        b=s2.top();
        if(s1.top()!=s2.top()){
        cout<<s1.top()->data<<" "<<s2.top()->data<<endl;
        }
        s1.pop(),s2.pop();
        left_stack_filler(a->right,s1);
        right_stack_filler(b->left,s2);
        i+=2;
    }
    else if(s1.top()->data+s2.top()->data>k){
        b=s2.top();
        s2.pop();
        right_stack_filler(b->left,s2);
        i++;
    }
    else{
        a=s1.top();
        s2.pop();
        left_stack_filler(a->right,s1);
        i++;
    }
}
return 0;

}
//.............................................................................................//