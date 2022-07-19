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



struct Node{
    int data;
    Node*left,*right;
};
struct trio{
    int mx;
    int mn;
    bool check;
};
int maximum(Node*root){
    if(!root){
        return INT_MIN;
    }
    return max(root->data,max(maximum(root->left),maximum(root->right)));
}
int minimum(Node*root){
    if(!root){
        return INT_MAX;
    }
    return min(root->data,min(minimum(root->left),minimum(root->right)));
}
bool check_BST(Node*root){
    if(!root){
        return 1;
    }
    bool left=check_BST(root->left);
    bool right=check_BST(root->right);
    bool ans=0;
    int mn=minimum(root->right);
    int mx=maximum(root->left);
    if(root->data<=mx && root->data>mn){
        ans=1;
    }
    return ans&&check_BST(root->left)&&check_BST(root->right);
}
trio check_BST_better(Node*root){
    if(!root){
        trio t;
        t.mx=INT_MIN;
        t.mn=INT_MAX;
        t.check=1;
    }
    trio left=check_BST_better(root->left);
    trio right=check_BST_better(root->right);
    trio ans;
    ans.mn=min(root->data,min(left.mn,right.mn));
    ans.mx=min(root->data,min(left.mx,right.mx));
    if(root->data>left.mx && root->data<=right.mn){
        ans.check=left.check&&right.check;
    }
    return ans;
}
bool check_BST_top(Node*root,int upper,int lower){
    if(!root){
        return 1;
    }
    return (root->data>=lower&&root->data<=upper)&&check_BST_top(root->left,root->data-1,lower)&&check_BST_top(root->right,upper,root->data);
}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//