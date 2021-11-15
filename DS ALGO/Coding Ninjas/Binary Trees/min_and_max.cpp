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
pair<int,int> max_and_min(Binary_Tree<int>*root){
    if(!root){
        return mp(-infinity,infinity);
    }
    int max1=root->data;
    int min1=root->data;
    pair<int,int> left=max_and_min(root->left);
    pair<int,int> right=max_and_min(root->right);
    max1=max3(left.ff,max1,right.ff);
    min1=min3(left.ss,right.ss,min1);
    return mp(max1,min1);
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
pair<int,int> p=max_and_min(root);
cout<<"MAX="<<p.ff<<endl;
cout<<"MIN="<<p.ss<<endl;
return 0;
}
//.............................................................................................//

