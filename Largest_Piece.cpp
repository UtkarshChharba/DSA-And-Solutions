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


bool isvalid(int i,int j,int n,vector<vector<bool> > &edge){
    if(i>=0&&j>=0&&i<n&&j<n&&!edge[i][j]){
        return 1;
    }
    return 0;
}
int solve(int i,int j,vector<vector<bool> >&cake,vector<vector<bool> > &edge,int n){
    edge[i][j]=1;
    int count=1;
    if(isvalid(i+1,j,n,edge)&&cake[i+1][j]){
        count=max(count,1+solve(i+1,j,cake,edge,n));
    }
    if(isvalid(i,j+1,n,edge)&&cake[i][j+1]){
        count=max(count,1+solve(i,j+1,cake,edge,n));
    }
    if(isvalid(i-1,j,n,edge)&&cake[i-1][j]){
        count=max(count,1+solve(i-1,j,cake,edge,n));
    }
    if(isvalid(i,j-1,n,edge)&&cake[i][j-1]){
        count=max(count,1+solve(i,j-1,cake,edge,n));
    }
    edge[i][j]=0;
    return count;
}   

//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
vector<vector<bool> > edge(n,vector<bool>(n,0));
vector<vector<bool> > cake(n,vector<bool>(n));
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        bool ans;
        cin>>ans;
        cake[i][j]=ans;
    }
}
int ans=0;
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        if(cake[i][j]){
            ans=max(ans,solve(i,j,cake,edge,n));
        }
    }
}
cout<<ans<<endl;

return 0;
}
//.............................................................................................//