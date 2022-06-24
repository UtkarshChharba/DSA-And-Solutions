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



int dp[501][501];
int maximumPath(int n, vector<vector<int> > matrix)
    {
        memset(dp,-1,sizeof(dp));
        int mx=0;
        for(int j=0;j<=n;j++){
            mx=max(mx,helper(n,matrix,0,j));
        }
        return mx;
    }
int helper(int n,vector<vector<int> > matrix,int i,int j){
    if(j>=n||i>=n||j<0){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int up,down,right;
    if(dp[i+1][j-1]!=-1){
        up=dp[i+1][j-1];
    }
    else{
        up=helper(n,matrix,i+1,j-1);
    }
    if(dp[i+1][j+1]!=-1){
        down=dp[i+1][j+1];
    }
    else{
        down=helper(n,matrix,i+1,j+1);
    }
    if(dp[i+1][j]!=-1){
        right=dp[i+1][j];
    }
    else{
        right=helper(n,matrix,i+1,j);
    }

    int mx=max(up,max(down,right))+matrix[i][j];
    return mx;
    
}   
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//