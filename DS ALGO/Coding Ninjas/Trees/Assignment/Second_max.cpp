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
#include "Tree_class.h"

TreeNode<int>* takeinput_levelwise(){
    cout<<"Give the rootdata"<<endl;
    int rootdata;
    cin>>rootdata;
    TreeNode<int>*root=new TreeNode<int>(rootdata);

    queue<TreeNode<int>*> pending_nodes;
    pending_nodes.push(root);
    while(pending_nodes.size()){
        TreeNode<int>*front=pending_nodes.front();
        pending_nodes.pop();
        cout<<"Total Number of children"<<endl;
        int daughters;
        cin>>daughters;
        loop(i,0,daughters){
            cout<<"Input Data of "<<i<<"th daughter"<<endl;
            int daughterdata;
            cin>>daughterdata;
            TreeNode<int>* daughter=new TreeNode<int>(daughterdata);
            front->children.pb(daughter);
            
            pending_nodes.push(daughter);
        }
    }
    return root;
}

pair<TreeNode<int>*,TreeNode<int>*> Second_max(TreeNode<int>*root){
    TreeNode<int>* max1=root->data;TreeNode<int>* max2=-1;
    loop(i,0,root->children.size()){
        pair<int,int> max=Second_max(root->children[i]);
        if(max.ff>max1){
            if(max.ss>max2){
                max2=max.ss;
            }
            else{
                max2=max1;
            }
            max1=max.ff;
        }
    }
    return mp(max1,max2);
}

int32_t main(){
    TreeNode<int>*root=takeinput_levelwise();
    pair<int,int> max=Second_max(root);
    cout<<max.ss<<endl;
    return 0;   
    }