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

int findMinVertex(int*weights,bool*visited,int n){
    int minVertex=-1;
    for(int i=0;i<n;i++){
        if(!visited[i]&&(minVertex==-1||weights[i]<weights[minVertex])){
            minVertex=i;
        }
    }
    return minVertex;
}

void prims(int**edges,int n){
    int*parent=new int[n];
    int*weight=new int[n];
    bool*visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
        weight[i]=INT_MAX;  
    }
    parent[0]=-1;
    weight[0]=0;
    for(int i=0;i<n;i++){
        int minVertex=findMinVertex(weight,visited,n);
        visited[minVertex]=1;
        for(int j=0;j<n;j++){
            if(!visited[j]&&edges[minVertex][j]&&weight[j]>edges[minVertex][j]){
                parent[j]=minVertex;
                weight[j]=edges[minVertex][j];
            }
        }
    }
    for(int i=1;i<n;i++){
        cout<<min(parent[i],i)<<" "<<max(parent[i],i)<<" "<<weight[i]<<endl;
    }
}
//.............................................................................................//
int32_t main(){
FIO
int n,e;cin>>n>>e;
int**edge=new int*[n];
loop(i,0,n){
    edge[i]=new int[n];
    loop(j,0,n){
        edge[i][j]=0;   
    }
}

loop(i,0,e){
    int a,b,w;
    cin>>a>>b>>w;
    edge[a][b]=w;
    edge[b][a]=w;
}
prims(edge,n);
return 0;
}
//.............................................................................................//