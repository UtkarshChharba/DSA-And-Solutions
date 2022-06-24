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


long long countWays(int n, int k){

        return helper(n,k,0);
    }
long long helper(int n,int k,int cur){
    vector<vector<int> > dp(n+1,vector<int>(3));
    for(int i=0;i<=n;i++){
        dp[i][0]=k;
    }
    for(int i=0;i<=2;i++){
        dp[0][i]=1;
    }

    for(int i=1;i<n+1;i++){
        for(int j=1;j<3;j++){
            if(j==1){
                dp[i][j]=(k-1)*dp[i-1][1]%(1000000007)+dp[i-1][2]%(1000000007);
            }
            else{
                dp[i][j]=(k-1)*dp[i-1][1]%(1000000007);
            }
        }
    }
    return max(dp[n][2],dp[n][1])%(1000000007);
   
    }
long long dp[5001][3];
long long countWays(int n, int k){
    for(int i=0;i<n+1;i++){
        for(int j=0;j<3;j++){
            dp[i][j]=-1;
        }
    }
    return helper(n,k,0)%(1000000007);
    }
long long helper(int n,int k,int cur){
    if(!n){
        return 1;
    }
    if(dp[n][cur]!=-1){
        return dp[n][cur];
    }
    if(cur==0){
        dp[n][cur]=k*helper(n-1,k,1)%(1000000007);
    }
    if(cur==1){
        dp[n][cur]=(k-1)*helper(n-1,k,1)%(1000000007)+helper(n-1,k,2)%(1000000007);
    }
    else{
        dp[n][cur]=(k-1)*helper(n-1,k,1)%(1000000007);
    }
    return dp[n][cur]%1000000007;
     

}

//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//