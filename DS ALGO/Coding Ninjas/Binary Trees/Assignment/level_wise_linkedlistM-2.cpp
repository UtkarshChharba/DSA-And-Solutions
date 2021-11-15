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

class node{
    public:
    int data;
    node* next;
    node(int data){
        this->data=data;
        next=NULL;
    }

};
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
void linked_list_maker(Binary_Tree<int>*root,vector<node*> &v){
    node*head=NULL;
    node*tail=NULL;
    queue<Binary_Tree<int>*> pending_nodes;
    pending_nodes.push(root);
    pending_nodes.push(NULL);
    while(pending_nodes.size()){
        Binary_Tree<int>*front=pending_nodes.front();
        pending_nodes.pop();
        if(!front){
            tail->next=NULL;
            tail=tail->next;
            v.pb(head);
            head=NULL;
            if(pending_nodes.size()){
                pending_nodes.push(NULL);
            }
        }
        else{
            if(!head){
                head=new node(front->data);
                tail=head;
            }
            else{
                tail->next=new node(front->data);
                tail=tail->next;
                            }
            if(front->left){
                pending_nodes.push(front->left);
            }
            if(front->right){
                pending_nodes.push(front->right);
            }
        }
    }
}
void print_linked_list(node*head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
    return;
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
vector<node*> v;
linked_list_maker(root,v);
cout<<v.size()<<endl;
loop(i,0,v.size()){
    print_linked_list(v[i]);
}
return 0;
}
//.............................................................................................//