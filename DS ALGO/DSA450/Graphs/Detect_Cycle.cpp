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


bool helper(int V,vector<int> adj[],int start,vector<bool>&dfs_v,vector<bool>&v){
    v[start]=1;
    dfs_v[start]=1;
    for(auto i:adj[start]){
        if(!dfs_v[i]&&helper(V,adj,i,dfs_v,v)){
            return true;
        }
        else if(dfs_v[i]){
            return true;
        }
    }
    dfs_v[start]=0;
    return false;
}
bool isCyclic(int V, vector<int> adj[]) {
        vector<bool> v(n,0);
        vector<bool> dfs_v(n,0);
        for(int i=0;i<V;i++){
            if(!v[i]&&helper(V,adj,i,dfs_v,v)){
                return true;
            }
        }
        return false;
    }
bool isCyclic(int V, vector<int> adj[]) {
        vector<int> in_deg(V,0);
        for(int i=0;i<V;i++){
            for(auto j:adj[i]){
                in_deg[j]++;
            }
        }
        queue<int> q;
        int count=0;
        for(int i=0;i<V;i++){
            if(in_deg[i]==0){
                q.push(i);
                count++;
            }
        }
        
        while(q.size()){
            int front=q.front();
            q.pop();
            for(auto i:adj[front]){
                in_deg[i]--;
                if(!in_deg[i]){
                    q.push(i);
                    count++;
                }
            }
        }
        return count==V?0:1;
    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//