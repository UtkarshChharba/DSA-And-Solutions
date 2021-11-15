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

void Print_Tree(TreeNode<int>*root){
    if(!root){
        cout<<"Chutiya mt bna"<<endl;
        return;
    }
    cout<<root->data<<":";

    loop(i,0,root->children.size()){
        cout<<root->children[i]->data<<",";
        
    }
    cout<<endl;
    loop(i,0,root->children.size()){
        Print_Tree(root->children[i]);
    }
    return;
}
TreeNode<int>* takeinput_levelwise(){
    cout<<"Give the rootdata"<<endl;
    int rootdata;
    cin>>rootdata;//Taking Root Data
    TreeNode<int>*root=new TreeNode<int>(rootdata);

    queue<TreeNode<int>*> pending_nodes;
    //Creating a queue to store the address of children root
    pending_nodes.push(root);
    while(pending_nodes.size()){//Loop Runs while No daughter is left without Data

        TreeNode<int>*front=pending_nodes.front();//Taking the address of the root
        pending_nodes.pop();
        cout<<"Total Number of children"<<endl;//Taking total children of root
        int daughters;
        cin>>daughters;
        loop(i,0,daughters){//loop to take data of all the daughters 
            cout<<"Input Data of "<<i<<"th daughter"<<endl;
            int daughterdata;
            cin>>daughterdata;
            TreeNode<int>* daughter=new TreeNode<int>(daughterdata);
            front->children.pb(daughter);
            //Pushing address of daughter in the root children
            pending_nodes.push(daughter);
            //pushing address of daughter for taking its data after some time
        }
    }
    return root;
}
//.............................................................................................//
int32_t main(){
FIO
TreeNode<int>*root=takeinput_levelwise();
Print_Tree(root);
//How the loop is working
//Suppose we need to make  1
//                        2 3 4
//                      5 6     
//   1:2,3,4
// 2:5,6
/*steps:
        ROOT 1 IS MADE
        1 IS PUSHED IN QUEUE->1
        INPUT FOR DAUGHTERS OF 1
        DATA OF DAUGHTERS AND PUSHING IT IN QUEUE->2,3,4
        NUMBER OF DAUGHTERS OF 2
        DATA OF DAUGHTERS OF 2 AND PUSHING THEM IN QUEUE->3,4,5,6
        DATA FOR DAUGHTERS OF 3 THEN 4 THEN 5 THEN 6
*/ 

return 0;
}
//.............................................................................................//