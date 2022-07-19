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



bool check_BFS(int** edge,int n,int start,int*color){
    queue<int> q;
    q.push(start);
    if(color[start]==-1){
        color[start]=1;
    }
    while(q.size()){
        int front=q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(edge[front][i]&&color[i]==-1){
                color[i]=1-color[front];
                q.push(i);
            }
            else if(edge[front][i]&&color[i]==color[start]){
                return false;
            }
        }
    }
    return true;
}
bool check_DFS(int**edge,int n,int start,int* color){
    if(color[start]==-1){
        color[start]=1;
    }
    for(int i=0;i<n;i++){
        if(edge[start][i]&& color[i]==-1){
            color[i]==1-color[start];
            if(!check_DFS(edge,n,i,color)){
                return false;
            }
        }
        else if(edge[start][i]&& color[i]==color[start]){
            return false;
        }
    }
    return true;
}

bool BFS(int**edge,int n){
    int*color=new int[n];
    for(int i=0;i<n;i++){
        color[i]=-1;
    }
    for(int i=0;i<n;i++){
        if(color[i]==-1&&!check_BFS(edge,n,i,color)){
            return false;
        }
    }
    return true;
}
bool DFS(int**edge,int n){
    int*color=new int[n];
    for(int i=0;i<n;i++){
        color[i]=-1;
    }
    for(int i=0;i<n;i++){
        if(color[i]==-1&&!check_DFS(edge,n,i,color)){
            return false;
        }
    }
    return true;
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