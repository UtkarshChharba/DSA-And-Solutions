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
  Node* left;
  Node* right;
  Node(int data){
    this->data=data;
    left=NULL;
    right=NULL;
  }
};

Node* buildTree(int in[],int pre[], int n)
    {
        return helper(in,pre,0,n-1,0,n-1);
    }
Node*helper(int in[],int pre[],int in_s,int in_e,int pre_s,int pre_e){
    if(pre_s>pre_e){
        return NULL;
    }
    int temp=in_s;
    while(in[in_s]!=pre[pre_s]){
        temp++;
    }
    int pre_l_s=pre_s+1;
    int pre_l_e=temp-in_s+pre_l_e;
    int in_l_s=in_s;
    int in_l_e=temp-1;
    int in_r_s=temp+1;
    int in_r_e=in_e;
    int pre_r_s=pre_l_e+1;
    int pre_r_e=pre_e;
    Node*root=new Node(pre[pre_s]);
    root->right=helper(pre,in,in_r_s,in_r_e,pre_r_s,pre_r_e);
    root->left=helper(pre,in,in_l_s,in_l_e,pre_l_s,pre_l_e);
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