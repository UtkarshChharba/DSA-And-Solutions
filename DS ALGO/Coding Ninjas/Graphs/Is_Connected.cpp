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

void DFS(int**edge,int n,int st,bool*visited){
    visited[st]=1;
    loop(i,0,n){
        if(edge[st][i] And !visited[i]){
            DFS(edge,n,i,visited);
        }
    }
return;

}
bool isConnected(int n,bool*visited){
    loop(i,0,n){
        if(!visited[i]){
            return 0;
        }
    }
    return 1;
}

//.............................................................................................//
int32_t main(){
FIO
int n;
int e;
cin>>n>>e;
int**edge=new int*[n];
loop(i,0,n){
    edge[i]=new int[n];
    loop(j,0,n){
        edge[i][j]=0;
    }
}
loop(i,0,e){
    int f,s;
    cin>>f>>s;
    edge[f][s]=1;
    edge[s][f]=1;
}
bool*visited=new bool[n];
loop(i,0,n){
    visited[i]=0;
}
DFS(edge,n,0,visited);
cout<<isConnected(n,visited)<<endl;;
return 0;
}
//.............................................................................................//