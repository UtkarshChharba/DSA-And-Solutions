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


 struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
vector<int> in1;
vector<int> in2;
vector<int> merged;
void inorder(TreeNode* root,vector<int> &in){
    if(!root){
        return;
    }
    inorder(root->left,in);
    in.push_back(root->val);
    inorder(root->right,in);
    return;
}
void merge(){
    int i=0,j=0;
    while(i<in1.size()&& j<in2.size()){
        if(in1[i]>in2[j]){
            merged.push_back(in2[j]);
            j++;
        }
        else{
            merged.push_back(in1[i]);
            i++;
        }
    }
    while(i<in1.size()){
            merged.push_back(in1[i]);
            i++;
    }
    while(j<in2.size()){
        merged.push_back(in2[j]);
            j++;
    }
    return;
}
void print(vector<int> ans){
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;
    return;
}
TreeNode*maker(int lower,int upper){
    if(lower>upper){
        return NULL;
    }
    int mid=(lower+upper)/2;
    TreeNode*root=new TreeNode(merged[mid]);
    root->right=maker(mid+1,upper);
    root->left=maker(lower,mid-1);
    return root;
}
TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        inorder(root1,in1);
        inorder(root2,in2);
        merge();
        return maker(0,merged.size()-1);

    }
//.............................................................................................//
int32_t main(){
FIO

return 0;
}
//.............................................................................................//