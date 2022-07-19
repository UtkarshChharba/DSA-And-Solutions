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


bool isValid(int n,int m,int i,int j,vector<vector<bool> > &edge){
    if(i>=0&&j>=0&&i<n&&j<m&&!edge[i][j]){
        return 1;
    }
    return 0;
}
int mx=-1;
int helper(vector<vector<int> > &mat,int n,int m,int i,int j,int count,vector<vector<bool> > &edge){
    queue<pair<int,pair<int,int> > > q;
    pair<int,pair<int,int> > p;
    p.first=0;
    p.second.first=0;
    p.second.second=0;
    q.push(p);
    edge[0][0]=1;
    while(!q.size()){
        pair<int,pair<int,int> > front=q.front();
        q.pop();
        if(front.second.second==m-1){
            return front.first;
        }
    if(isValid(n,m,front.second.first+1,front.second.second,edge)&&mat[front.second.first+1][front.second.second]){
        edge[front.second.first+1][front.second.second]=1;
        pair<int,pair<int,int> > p;
        p.first=front.first+1;
        p.second.first=front.second.first+1;
        p.second.second=front.second.second;
        q.push(p);
    }
    if(isValid(n,m,front.second.first,front.second.second+1,edge)&&mat[front.second.first][front.second.second+1]){
        edge[front.second.first][front.second.second+1]=1;
        pair<int,pair<int,int> > p;
        p.first=front.first+1;
        p.second.first=front.second.first;
        p.second.second=front.second.second+1;
        q.push(p);
    }
    if(isValid(n,m,front.second.first-1,front.second.second,edge)&&mat[front.second.first-1][front.second.second]){
        edge[front.second.first-1][front.second.second]=1;
        pair<int,pair<int,int> > p;
        p.first=front.first+1;
        p.second.first=front.second.first-1;
        p.second.second=front.second.second;
        q.push(p);
    }
    if(isValid(n,m,front.second.first,front.second.second-1,edge)&&mat[front.second.first][front.second.second-1]){
        edge[front.second.first][front.second.second-1]=1;
        pair<int,pair<int,int> > p;
        p.first=front.first+1;
        p.second.first=front.second.first;
        p.second.second=front.second.second-1;
        q.push(p);
    }
    }
    return -1;

}
int row_mat[]={0,-1,1,0};
int col_mat[]={-1,0,0,1};

int findShortestPath(vector<vector<int> > &mat)
    {
        int n=mat.size();
        int m=mat[0].size();
       for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    for(int k=0;k<4;k++){
                        if(isValid(n,m,i+row_mat[k],j+col_mat[k])){
                            mat[i+row_mat[k]][j+col_mat[k]]=-1;
                        }
                    }
                }
            }
       }
       for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==-1){
                    mat[i][j]=0;
                }
            }
       }
       vector<vector<bool> > edge(n,vector<bool>(m,0));
       int ans=-1;
       for(int i=0;i<n;i++){
            ans=max(ans,helper(mat,n,m,i,0,0,edge));
       }
       return ans;


    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//