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
    node*next;
    node(int data){
        this->data=data;
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
void lever_oreder(Binary_Tree<int>*root){
    if(!root){
        return;
    }
    queue<Binary_Tree<int>*> p;
    p.push(root);
    while(!p.empty()){
        int size=p.size();
        while(size--){
            Binary_Tree<int>*front=p.front();
            p.pop();
            cout<<front->data<<" ";
            if(front->left){
                p.push(front->left);
            }
            if(front->right){
                p.push(front->right);
            }
        }
        cout<<endl;
    }
}
Binary_Tree<int>*remove_leaf(Binary_Tree<int>*root){
    if(!root){
        return NULL;
    }
    if(!root->left && !root->right){
        delete root;
        return NULL;
    }
    root->left=remove_leaf(root->left);
    root->right=remove_leaf(root->right);
    return root;
}
vector<node*>linked_list(Binary_Tree<int>*root){
    vector<node*> ans;
    if(!root){
        return ans;
    }
    queue<Binary_Tree<int>*> q;
    while(!q.empty()){
        int size=q.size();
        node*head=NULL;
        node*tail=NULL;
        while(size--){
            Binary_Tree<int>*front=q.front();
            q.pop();
            if(!head){
                head=new node(front->data);
                tail=head;
            }
            else{
                tail->next=new node(front->data);
                tail=tail->next;
            }
            if(front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }

        }
        ans.push_back(head);
    }
   return ans;
}
void zig_zag(Binary_Tree<int>*root){
    if(!root){
        return;
    }
    queue<Binary_Tree<int>*> q;
    q.push(root);
    while(!q.empty()){
        int size=q.size();
        stack<Binary_Tree<int>*> s;
        bool val=0;
        while(size--){
            Binary_Tree<int>*front=q.front();
            q.pop();
            if(!val){
                if(front->left){
                    s.push(front->left);
            }
                if(front->right){
                    s.push(front->right);
            }
            }
            else{
                if(front->right){
                    s.push(front->right);
            }
                if(front->left){
                    s.push(front->left);
            }
            }
            cout<<front->data<<" ";
            val=1-val;
        }
        cout<<endl;
        while(s.size()){
            q.push(s.top());
            s.pop();
        }
    }
}
void no_sib(Binary_Tree<int>*root){
    if(!root){
        return;
    }
    if(root->left && root->right){
        no_sib(root->left);
        no_sib(root->right);
    }
    else if(root->left){
        cout<<root->left->data<<" ";
        no_sib(root->left);
    }
    else if(root->right){
        cout<<root->right->data<<" ";
        no_sib(root->right);
    }
    return ;
    
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
no_sib(root);
return 0;
}
//.............................................................................................//