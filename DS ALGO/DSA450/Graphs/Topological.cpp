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

void dfs(vector<int> adj[],int start,stack<int> &s,vector<bool> &visit){
    visit[start]=1;
    for(auto i:adj[start]){
        if(!visit[i]){
            dfs(adj,i,s,visit);
        } 
    }
    s.push(start);
}
vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    stack<int> s;
        vector<bool> visit(V,0);
        for(int i=0;i<V;i++){
            if(!visit[i]){
                dfs(adj,i,s,visit);
            } 
        }
        vector<int> ans;
        while(s.size()){
            ans.push_back(s.top());
            s.pop();
        }
        return ans;

	}
vector<int> topoSort(int V, vector<int> adj[]) 
	{
	    vector<int> indeg(V,0);
        for(int i=0;i<V;i++){
            for(auto j:adj[i]){
                indeg[j]++;
            }
        }
        queue<int> q;
        for(int i=0;i<V;i++){
            if(!indeg[i]){
                q.push(i);
            }
        }
        stack<int> s;
        while(q.size()){
            int front=q.front();
            q.pop();
            s.push(front);
            for(auto j:indeg[front]){
                indeg[j]--;
                if(!indeg[j]){
                    q.push(j);
                }
            }
        }
        vector<int> ans;
        while(s.size()){
            ans.push_back(s.top());
            s.pop();
        }
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