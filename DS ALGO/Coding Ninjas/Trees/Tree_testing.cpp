#include <bits/stdc++.h>
#include "Tree_class.h"//Including Class file
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



void Print_Tree(TreeNode<int>*root){
    if(!root){
        cout<<"Chutiya mt bna"<<endl;
        return;
    }
    cout<<root->data<<":";//Eh root da data print krega

    loop(i,0,root->children.size()){//Printing data of Daughter nodes so that we know how is daughter of root
        cout<<root->children[i]->data<<",";
        //printing format==root: node1->data,node2->data,
    }
    cout<<endl;
    loop(i,0,root->children.size()){//A loop TO iterate on all Children

        Print_Tree(root->children[i]);//Calling A recursive call for children

        //sO children should also get printed with their children
    }
    return;
}

//.............................................................................................//
int32_t main(){
FIO

TreeNode<int>* root=new TreeNode<int>(1);
//This Means Creating a Pointer to store the object root with data of type Int 
//And data=1
TreeNode<int>* node1=new TreeNode<int>(2);
TreeNode<int>*node2=new TreeNode<int>(3);
//We have just created the objects but not connected them 
//AS root have 2 Children Node1 and node2
root->children.pb(node1);
//Pushing Back the address of node 1 in the vector children of root
root->children.pb(node2);
Print_Tree(root);
return 0;
}
//.............................................................................................//