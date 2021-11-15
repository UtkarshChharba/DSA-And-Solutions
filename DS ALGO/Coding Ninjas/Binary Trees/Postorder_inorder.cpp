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

Binary_Tree<int>* Binary_Tree_maker(int in[],int po[],int in_s,int in_e,int po_s,int po_e){
    /* Basic post order format={left,right,root}
    inorder={left,root,right}
    */
    if(in_s>in_e Or po_s>po_e){
        return NULL;
    }
    Binary_Tree<int>*root=new Binary_Tree<int>(po[po_e]);
    int root_data=po[po_e];
    int root_index=in_s;
    while(in[root_index]!=root_data And root_index<=in_e){
        root_index++;
    }
    int r_po_e=po_e-1;
    int r_in_e=in_e;
    int l_in_e=root_index-1;
    int r_in_s=root_index+1;
    int l_in_s=in_s;
    int l_po_s=po_s;
    int l_po_e=l_po_s+l_in_e-l_in_s;
    int r_po_s=r_po_e-(r_in_e-r_in_s);
    root->left=Binary_Tree_maker(in,po,l_in_s,l_in_e,l_po_s,l_po_e);
    root->right=Binary_Tree_maker(in,po,r_in_s,r_in_e,r_po_s,r_po_e);
    return root;


}

Binary_Tree<int>* Binary_Tree_helper(int in[],int po[],int size){
    if(!size){
        return NULL;
    }
    return Binary_Tree_maker(in,po,0,size-1,0,size-1);
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
int po[]={4,5,2,6,7,3,1};
int in[]={4,2,5,1,6,3,7};
/* Basic post order format={left,right,root}
    inorder={left,root,right}
    rootdata=post_e
    rootindex_po=po_e
    in_right_e=inorder_e
    in_right_s=in_root+1
    po_right_e=po_e-1
    po_right_s=po_right_e-(in_right_e-in_right_s)
    po_left_s=po_s
    in_left_s=in_s
    in_left_e=rootindex_in-1
    po_left_e=in_left_e-in_left_s+po_left_s

*/
Binary_Tree<int>*root=Binary_Tree_helper(in,po,7);
print_levelwise(root);
return 0;
}
//.............................................................................................//