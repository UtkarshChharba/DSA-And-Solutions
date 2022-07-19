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




void print_DFS(int**edges,int n,int sv,bool*visited){
    cout<<sv<<endl;
    visited[sv]=1;
    for(int i=0;i<n;i++){
        if(edges[sv][i]==1&&!visited[i]){
            print_DFS(edges,n,i,visited);
        }
    }
}
void print_BFS(int**edges,int n,int sv,bool*visited){
    queue<int> q;
    q.push(sv);
    visited[sv]=1;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        cout<<front<<endl;
       
        for(int i=0;i<n;i++){
            if(edges[front][i]&&!visited[i]){
                q.push(i);
                visited[i]=1;
            }
        }
    }
    return;

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
cout<<"DFS"<<endl;
print_DFS(edges,n,0,visited);
for(int i=0;i<n;i++){
    visited[i]=0;
}
cout<<"BFS"<<endl;
print_BFS(edges,n,0,visited);
return 0;
}
//.............................................................................................//