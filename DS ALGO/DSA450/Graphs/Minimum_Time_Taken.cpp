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

vector<int> minimumTime(int n,vector<vector<int> > &edges,int m)
        {
            vector<int> ans(n);
            vector<vector<int> > graph(n);
            for(int i=0;i<edges.size();i++){
                graph[edges[i][0]-1].push_back(edges[i][1]-1);
            }    
            vector<int> indeg(n,0);
            for(int i=0;i<n;i++){
                for(auto j:graph[i]){
                    indeg[j]++;
                }
            }
            queue<int> q;
            for(int i=0;i<n;i++){
                if(!indeg[i]){
                    q.push(i);
                }
            }
            // cout<<q.size()<<endl;
            int time=1;
            while(q.size()){
                int size=q.size();
                while(size--){
                    int front=q.front();
                    q.pop();
                    for(auto j:graph[front]){
                        indeg[j]--;
                        if(!indeg[j]){
                            q.push(j);
                        }
                    }
                    ans[front]=time;
                }
                time++;
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