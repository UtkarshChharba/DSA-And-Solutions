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

bool comp(pair<int,pair<int,int> > &a,pair<int,pair<int,int> > &b){
    return a.second.second<b.second.second;
}
bool parent(int a,int b,vector<int> &part){
    while(part[a]!=a){
        a=part[a];
    }
    while(part[b]!=b){
        b=part[b];
    }
    return a!=b;
}
int find(int a,vector<int> &part){
    while(part[a]!=a){
        a=part[a];
    }
    return a;
}
int spanningTree(int V, vector<vector<int> > adj[])
    {
        int sum=0;
        vector<pair<int,pair<int,int> > > edge;
        for(int i=0;i<V;i++){
            for(int j=0;j<adj[i].size();j++){
                pair<int,pair<int,int> > p;
                p.first=i;
                p.second.first=adj[i][j][0];
                p.second.second=adj[i][j][1];
                edge.push_back(p);
            }
            
        }
        sort(edge.begin(),edge.end(),comp);
        vector<int> part(V);
        for(int i=0;i<V;i++){
            part[i]=i;
        }
        int sum=0;
        int cnt=0;
        int i=0;
        while(cnt<V){
            if(parent(edge[i].first,edge[i].second.first,part)){
                part[find(edge[i].first,part)]=edge[i].second.first;
                sum+=edge[i].second.second;
                cnt++;
            }
            i++;
        }
        return sum;
    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//