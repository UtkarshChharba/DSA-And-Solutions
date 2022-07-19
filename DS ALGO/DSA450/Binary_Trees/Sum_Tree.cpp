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

bool isSumTree(Node* root)
    {
         return helper(root).second;
    }
pair<int,bool> helper(Node*root){
    if(!(root->left)&&!(root->right)){
        return {root->data,1};
    }
    pair<int,bool> left{0,1};
    pair<int,bool> right{0,1};
    if(root->left){
        left=helper(root->left);
    }
    if(root->right){
        right=helper(root->right);
    }
    if(left.second&&right.second!=1){
        return {0,0};
    }
    if(root->data!=left.first+right.first){
            return {0,0} ;
        }
    return {left.first+right.first+root->data,1};
    

}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//