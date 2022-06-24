#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
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
    struct Node* left;
    struct Node* right;
};

bool areAnagrams(Node *root1, Node *root2)
    {
        queue<Node*> q1;
        queue<Node*> q2;
        q1.push(root1);
        q2.push(root2);
        while(!q1.empty()){
            unordered_map<int,int> mp;
            if(q1.size()!=q2.size()){
                return 0;
            }
            int size=q1.size();
            while(size--){
                Node* fir_tree=q1.front();
                mp[fir_tree->data]++;
                if(fir_tree->left){
                    q1.push(fir_tree->left);
                }
                if(fir_tree->right){
                    q1.push(fir_tree->right);
                }
                q1.pop();
            }
            while(size--){
                Node*tree=q2.front();
                if(mp.count(tree->data) && mp[tree->data]!=0){
                    mp[tree->data]--;
                }
                else{
                    return 0;
                }
                if(tree->left){
                    q2.push(tree->left);
                }
                if(tree->right){
                    q2.push(tree->right);
                }
                q2.pop();
            }
        }
        return 1;
    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//