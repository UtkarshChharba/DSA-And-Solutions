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



struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
class trio{
    public:
    bool BST;
    int mx;
    int mn;
    int height;
};
int largestBst(Node *root)
    {
    	return solve(root).height;
    }
trio solve(Node*root){
    if(!root){
        trio t;
        t.BST=1;
        t.mn=INT_MAX;
        t.mx=INT_MIN;
        t.height=0;
    }
    trio left=solve(root->left);
    trio right=solve(root->right);
    trio ans;
    ans.height=max(left.height,right.height);
    if(root->data<=right.mn && root->data>left.mx){
        ans.BST=left.BST&&right.BST;
    }
    if(ans.BST){
        ans.height=1+max(left.height,right.height);
    }
    ans.mn=min(root->data,min(left.mn,right.mn));
    ans.mx=max(root->data,max(left.mx,right.mx));
    return ans;
}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//