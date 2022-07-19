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

bool check_BFS(int**edge,int n,int start,bool*visited){
    queue<pair<int,int> > q;
    pair<int,int> p;
    p.first=start;
    p.second=-1;
    q.push(p);
    visited[start]=1;
    while(q.size()){
        pair<int,int> front=q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(edge[front.first][i]&&!visited[i]){
                visited[i]=1;
                pair<int,int> p;
                p.first=i;
                p.second=front.first;
                q.push(p);
            }
            else if(edge[front.first][i]&&front.second!=i){
                return true;
            }
        }

    }
    return false;
}
bool check_DFS(int**edge,int n,int start,int parent,bool*visited){
    for(int i=0;i<n;i++){
        if(edge[start][i]&&!visited[i]&&check_DFS(edge,n,i,start,visited)){
            return true;
        }
        else if(edge[start][i]&&parent!=i){
            return true;
        }
    }
    return false;
}
bool BFS(int**edge,int n){
    bool*visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]&&check_BFS(edge,n,i,visited)){
            return true;
        }
    }
    return false;
}
bool DFS(int**edge,int n){
    bool*visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    for(int i=0;i<n;i++){
        if(!visited[i]&&check_DFS(edge,n,i,-1,visited)){
            return true;
        }
    }
    return false;
}

//.............................................................................................//
int32_t main(){
FIO
int n;
cin>>n;
int e; cin>>e;
int**edges=new int*[n];
for(int i=0;i<n;i++){
    edges[i]=new int[n];
    for(int j=0;j<n;j++){
        edges[i][j]=0;
    }
}
for(int i=0;i<e;i++){
    int f,s;
    cin>>f>>s;
    edges[f][s]=1;
    edges[s][f]=1;
}
bool*visited=new bool[n];
for(int i=0;i<n;i++){
    visited[i]=0;
}
return 0;
}
//.............................................................................................//