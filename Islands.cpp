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

void DFS_helper(int**edges,bool*visited,int n,int sv){
    visited[sv]=1;
    for(int i=0;i<n;i++){
        if(!visited[i]&&edges[sv][i]){
            DFS_helper(edges,visited,n,i);
        }
    }
}
int DFS(int**edges,int n){
    bool*visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    int count=0;
    for(int i=0;i<n;i++){
        if(!visited[i]){
            count++;
            DFS_helper(edges,visited,n,i);
        }
    }
    return count;
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
// cout<<"wah"<<endl;
loop(i,0,e){
    int a,b;
    cin>>a>>b;
    edge[a][b]=1;
    edge[b][a]=1;
}
// cout<<"wah"<<endl;
cout<<DFS(edge,n)<<endl;
return 0;
}
//.............................................................................................//