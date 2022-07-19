#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define tl(v,size) for(int i=0;i<size;i++){cout<<v[i]<<' ';} cout<<endl
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


struct Node
{
    int data;
    Node* left, * right;
};
vector <int> boundary(Node *root)
    {
        vector<int> left;
        vector<int> leaf;
        vector<int> right;
        vector<int> ans;
        left_help(root,left);
        boundary_node(root,leaf);
        right_help(root,right);
        for(int i=0;i<left.size()-1;i++){
            ans.push_back(left[i]);
        }
        for(int i=0;i<leaf.size();i++){
            ans.push_back(leaf[i]);
        }
        for(int i=1;i<right.size();i++){
            ans.push_back(right[i]);
        }
        return ans;
    }
void left_help(Node*root,vector<int> &left){
    if(!root){
        return;
    }
    left.push_back(root->data);
    left_help(root->left,left);
    return;
}
void boundary_node(Node*root,vector<int> leaf){
    if(!root->left&& !root->right){
        leaf.push_back(root->data);
        return;
    }
    boundary_node(root->left,leaf);
    boundary_node(root->right,leaf);
    return;
}
void right_help(Node*root,vector<int> &right){
    if(!root){
        return;
    }
    right_help(root->right,right);
    right.push_back(root->data);
    return;
    
}

//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//