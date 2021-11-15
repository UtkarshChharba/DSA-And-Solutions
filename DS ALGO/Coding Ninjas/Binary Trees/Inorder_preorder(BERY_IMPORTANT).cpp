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
void print_levelwise(Binary_Tree<int>*root){
    queue<Binary_Tree<int>*> pending_nodes;
    pending_nodes.push(root);
    while(pending_nodes.size()){
        Binary_Tree<int>*front=pending_nodes.front();
        pending_nodes.pop();
        cout<<front->data<<":";
        if(front->left){
            cout<<"L:"<<front->left->data<<",";
            pending_nodes.push(front->left);
        }
        else{
            cout<<"L:"<<-1<<",";
        }
        if(front->right){
            cout<<"R:"<<front->right->data<<",";
            pending_nodes.push(front->right);
        }
        else{
            cout<<"R:"<<-1<<",";
        }
        cout<<endl;
        }

}
Binary_Tree<int>* Binary_Tree_maker(int in[],int pre[],int in_s,int in_e,int pre_s,int pre_e){
    if(in_s>in_e){
        return NULL;
    }
    int root_data=pre[pre_s];
    Binary_Tree<int>*root=new Binary_Tree<int>(root_data);
    int root_index=in_s;
    while(in[root_index]!=root_data And root_index<=in_e){
        root_index++;
    }
    int l_in_s=in_s;
    int l_in_e=root_index-1;
    int l_pre_s=pre_s+1;
    int l_pre_e=l_in_e-l_in_s+l_pre_s;
    int r_in_s=root_index+1;
    int r_in_e=in_e;
    int r_pre_s=l_pre_e+1;
    int r_pre_e=pre_e;
    root->left=Binary_Tree_maker(in,pre,l_in_s,l_in_e,l_pre_s,l_pre_e);
    root->right=Binary_Tree_maker(in,pre,r_in_s,r_in_e,r_pre_s,r_pre_e);
    return root;
}
Binary_Tree<int>* Binary_Tree_helper(int in[],int pre[],int size){
    if(!size){
        return NULL;
    }
    return Binary_Tree_maker(in,pre,0,size-1,0,size-1);
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
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1 
int in[]={4,2,5,1,8,6,9,3,7};
//THis is the inorder expression for Binary_Tree
int pre[]={1,2,4,5,3,6,8,9,7};
//This is the Preorder expression for Binary_Tree


/*

MOST IMPORTANT EXPRESSION FOR VISUALIZATION
Default in order expression={left,root,right}
Default preorder expression={root,left,right}

->TALKING ABOUT PREORDER:
    IT IS OBVIOUS THAT OUR ROOT IS THE FIRST ELEMENT 
    SO AFTER THAT ROOT IT WOULD HAVE RECURSIVE CALLS FOR LEFT 
    SO OUR LEFT SIDE(**SIDE HAI ELEMENT NHI) WILL FROM INORDER_START+1 TO SOME NUMBER


->TALKING ABOUT INORDER
    IT IS OBVIOUS THAT LEFT SIDE START FROM INORDER START
    SO LEFT WILL END JUST BEFORE COMING OF ROOT ELEMENT
    THEREFORE LEFT_END=ROOT_INDEX-1 FOR INORDER
    SO LEFT_S_INORDER,LEFT_E_INORDER,LEFT_S_PREORDER 

    WE CAN FIND LEFT_E_PREORDER=LEFT_E_INORDER-LEFT_S_INORDER+LEFT_S_INORDER

->RIGHT FOR PRE AND IN
    RIGHT_S_IN=ROOT_INDEX+1
    RIGHT_E_IN=IN_ENDING
    RIGHT_S_PRE=LEFT_E_PRE+1
    RIGHT_E_PRE=PRE_ENDING

SO WE HAVE LEFT AND RIGHT SIDE INFORMATION FOR THE BINARY TREE IT WOULD BE FOUND
AUTOMATICALLY USING RECURSION SO WE JUST NEED TO CONNECT THEM 
THEM RETURN THE ROOT

BASICALLY WE HAVE FOUND ROOT FROM THE PRE EXPRESSION AND OTHER USING COMBINATION OF PRE AND IN
BASICALLY PRE IS REQUIRED FOR ROOT AND IN IS REQUIRED FOR LEFT AND RIGHT SIZE FINDING


*/

Binary_Tree<int>*root=Binary_Tree_helper(in,pre,9);
print_levelwise(root);
return 0;
}
//.............................................................................................//