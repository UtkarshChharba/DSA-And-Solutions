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

int findMinVertex(int**edges,bool*visited,int*distance,int n){
    int minVertex=-1;
    for(int i=0;i<n;i++){
        if(!visited[i]&&(minVertex==-1||distance[i]<distance[minVertex])){
            minVertex=i;
        }
    }
    return minVertex;
}
void dijkstra(int**edges,int n){
    bool*visited=new bool[n];
    int*distance=new int[n];
    for(int i=0;i<n;i++){
        distance[i]=INT_MAX;
        visited[i]=0;
    }
    distance[0]=0;
    for(int i=0;i<n-1;i++){
        int minVertex=findMinVertex(edges,visited,distance,n);
        visited[minVertex]=1;
        for(int j=0;j<n;j++){
            if(!visited[j]&&(edges[minVertex][j]&&edges[minVertex][j]+distance[minVertex]<distance[j])){
                distance[j]=edges[minVertex][j]+distance[minVertex];
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<i<<" "<<distance[i]<<endl;
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
dijkstra(edge,n);
return 0;
}
//.............................................................................................//