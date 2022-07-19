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



int findDist(Node* root, int a, int b) {
        Node*node=lca(root,a,b);
        int left=height(node,a);
        int right=height(node,b);
        return left+right;
    }
Node* lca(Node* root ,int n1 ,int n2 )
    {
       if(!root){
        return NULL;
       }
       if(root->data==n1||root->data==n2){
            return root;
       }
       Node*left=lca(root->left,n1,n2);
       Node*right=lca(root->right,n1,n2);
       if(left && right){
            return root;
       }
       if(left){
            return left;
       }
       if(right){
        return right;
       }
       return NULL;
    }
int height(Node*root,int n){
    if(!root){
        return INT_MAX;
    }
    if(root->data==n){
        return 0;
    }
    int left=height(root->left,n);
    int right=height(root->right,n);
    int ans;
    if(left==-1 && right==-1){
        return -1;
    }
    return max(left,right)+1;
}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//