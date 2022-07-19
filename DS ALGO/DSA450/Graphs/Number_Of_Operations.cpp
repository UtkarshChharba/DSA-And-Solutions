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



void dfs(int n,vector<vector<int> >& graph,int start,vector<bool> &visit){
    visit[start]=1;
    for(auto i:graph[start]){
        if(!visit[i]){
            dfs(n,graph,i,visit);
        }
    }
}


int makeConnected(int n, vector<vector<int> >& connections) {
        vector<vector<int> > graph(n);
        if(connections.size()<n-1){
            return -1;
        }
        for(int i=0;i<connections.size();i++){
            graph[connections[i][0]].push_back(connections[i][1]);
            graph[connections[i][1]].push_back(connections[i][0]);
        }
        vector<bool> visit(n,0);
        int count=0;
        for(int i=0;i<n;i++){
            if(!visit[i]){
                dfs(n,graph,i,visit);
                count++;
            }
        }
        count--;
        return count;
    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//