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

bool DFS(int**edges,int n,bool*visited,int sv,int to){
    if(sv==to){
        cout<<sv<<" ";
        return 1 ;
    }
    visited[sv]=1;
    for(int i=0;i<n;i++){
        if(edges[sv][i]&&!visited[i]){
            bool ans=DFS(edges,n,visited,i,to);
            if(ans){
                cout<<sv<<" ";
                return 1;
            }
        }
    }
    return 0;
}
vector<int> DFS_CN(int**edges,int n,bool*visited,int sv,int to){
    vector<int> ans;
    if(sv==to){
        ans.push_back(sv);
        return ans;
    }
    visited[sv]=1;
    for(int i=0;i<n;i++){
        if(edges[sv][i]&&!visited[i]){
            vector<int> temp=DFS_CN(edges,n,visited,i,to);
            if(temp.size()){
                temp.push_back(sv);
                return temp;
            }
        }
    }
    return ans;

}

vector<int> BSF(int**edges,int n,int sv,int to){
    bool*visited=new bool[n];
    for(int i=0;i<n;i++){
        visited[i]=0;
    }
    queue<int> q;
    q.push(sv);
    visited[sv]=1;
    map<int,int> m;
    m[sv]=-1;
    vector<int>ans;
    while(!q.empty()){
        int front=q.front();
        q.pop();
        if(front==to){
            while(front!=-1){
                ans.push_back(front);
                front=m[front];
            }
            return ans;
        }
        for(int i=0;i<n;i++){
            if(edges[front][i]&&!visited[i]){
                    m[i]=front;
                    q.push(i);
                    visited[i]=1;
                }
        }
    }
    return ans;
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
DFS(edges,n,visited,sv,to);

cout<<endl;
for(int i=0;i<n;i++){
    visited[i]=0;
}
vector<int> ans=DFS_CN(edges,n,visited,sv,to);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
cout<<endl;
ans=BSF(edges,n,sv,to);
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
return 0;
}
//.............................................................................................//