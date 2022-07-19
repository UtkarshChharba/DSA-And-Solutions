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



bool DFS(int**edges,bool*visited,int sv,int n,int to){
    visited[sv]=1;
    int ans=0;
    for(int i=0;i<n;i++){
        if(edges[sv][i]&&!visited[i]){
            if(i==to){
                return 1;
            }
            else{
                ans=ans||DFS(edges,visited,i,n,to);
            }
        }
    }
    return ans;


}
bool BFS(int**edges,int sv,int n,int to){
    bool*visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=0;   
    }
    queue<int> q;
    q.push(sv);
    visited[sv]=1;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        for(int i=0;i<n;i++){
            if(edges[front][i]&&!visited[i]){
                if(i==to){
                    return 1;
                }
                else{
                    q.push(i);
                    visited[i]=1;
                }
            }
        }
    }
            return 0;
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
int sv,to;cin>>sv>>to;
bool*visited=new bool[n];
for(int i=0;i<n;i++){
    visited[i]=0;
}
cout<<DFS(edges,visited,sv,n,to)<<endl;
cout<<BFS(edges,sv,n,to)<<endl;
return 0;
}
//.............................................................................................//