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

TreeNode<int>* takeinput(){
    int rootdata;
    cout<<"Jldi Jldi Data Btaa"<<endl;
    cin>>rootdata;//Data of root
    TreeNode<int>*root=new TreeNode<int>(rootdata);//Creating a root having data Rootdata
    int n;//total Number Of Daughters
    cout<<"Kitne Bache Hai"<<endl;
    cin>>n;
    loop(i,0,n){//Loop for daughter Data
        root->children.pb(takeinput());//Taking input for each daughter and their daughters
    }
    return root;//returning the start root address
}
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


//.............................................................................................//
int32_t main(){
FIO
TreeNode<int>*root=takeinput();
Print_Tree(root);
//Recursion In this works like this:-
//FIRST WE GIVE INPUT FOR ROOT
//PHIR US ROOTS KE BACHE
//PHIR US ROOT EK FIRST BACHE KA DATA
//PHIR US ROOT KE FIRST BACHE KE BACHE
//PHIR END TK JAKE ROOT KE SECOND BACHE KA DATA
//AND THEN SO ON...
return 0;
}
//.............................................................................................//