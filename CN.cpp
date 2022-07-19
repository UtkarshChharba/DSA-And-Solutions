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

bool isvalid(int i,int j,int m,int n,vector<vector<bool> > &edge){
    if(i>=0&&j>=0&&i<m&&j<n&&!edge[i][j]){
        return true;
    }
    return false;
}
bool find(vector<vector<char> > &v,vector<vector<bool> > &edge,int i,int j,string s){
    if(!s.size()){
        return 1;
    }
    bool ans=0;
    int m=v.size();
    int n=v[0].size();
    edge[i][j]=1;
    if(isvalid(i+1,j,m,n,edge)&&v[i+1][j]==s[0]){
        ans=find(v,edge,i+1,j,s.substr(1));
        if(ans){return 1;}
    }
    if(isvalid(i,j+1,m,n,edge)&&v[i][j+1]==s[0]){
        ans=find(v,edge,i,j+1,s.substr(1));
        if(ans){return 1;}
    }
    if(isvalid(i+1,j+1,m,n,edge)&&v[i+1][j+1]==s[0]){
        ans=find(v,edge,i+1,j+1,s.substr(1));
        if(ans){return 1;}
    }
    if(isvalid(i-1,j,m,n,edge)&&v[i-1][j]==s[0]){
        ans=find(v,edge,i-1,j,s.substr(1));
        if(ans){return 1;}
    }
    if(isvalid(i,j-1,m,n,edge)&&v[i][j-1]==s[0]){
        ans=find(v,edge,i,j-1,s.substr(1));
        if(ans){return 1;}
    }
    if(isvalid(i-1,j-1,m,n,edge)&&v[i-1][j-1]==s[0]){
        ans=find(v,edge,i-1,j-1,s.substr(1));
        if(ans){return 1;}
    }
    edge[i][j]=0;
    return 0;
}




//.............................................................................................//
int32_t main(){
FIO
int m,n;cin>>m>>n;
vector<vector<char> > v(m,vector<char>(n));
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cin>>v[i][j];
    }
}
string s="CODINGINJA";
vector<vector<bool> > edge(m,vector<bool>(n,0));
bool ans=0;
for(int i=0;i<n;i++){
    if(v[0][i]=='C'){
        ans=find(v,edge,0,i,s.substr(1));   
        if(ans){
            cout<<"True"<<endl;
            break;
        } 
    }
}
cout<<ans<<endl;

return 0;
}
//.............................................................................................//