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
 TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> inorder=preorder;
        sort(inorder.begin(),inorder.end());
        return maker(preorder,inorder,0,preorder.size()-1,0,preorder.size()-1);
        
    }
TreeNode*maker(vector<int>& pre,vector<int>&in,int in_s,int in_e,int pre_s,int pre_e){
    if(in_s>in_e){
        return NULL;
    }
    int root_index=in_s;
    while(pre[pre_s]!=in[root_index]){
        root_index++;
    }
    int pre_l_s=pre_s+1;
    int in_l_s=in_s;
    int in_l_e=root_index-1;
    int in_r_s=root_index+1;
    int in_r_e=in_e;
    int pre_l_e=in_l_e-in_l_s+pre_l_s;
    int pre_r_s=pre_l_e+1;
    int pre_r_e=pre_e;
    TreeNode*root=new TreeNode(pre[pre_s]);
    root->left=maker(pre,in,in_l_s,in_l_e,pre_l_s,pre_l_e);
    root->right=maker(pre,in,in_r_s,in_r_e,pre_r_s,pre_r_e);
    return root;

}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//