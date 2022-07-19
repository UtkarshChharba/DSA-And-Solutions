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



int findWinner(int n, int x, int y)
	{
        vector<vector<int> >  dp(n+1,vector<int>(2,-1));
		return helper(n,x,y,0,dp);
	}
int helper(int n,int x,int y,int turn,vector<vector<int> > &dp){
    if(!n){
        return turn==0;
    }
    if(dp[n][turn]!=-1){
        return dp[n][turn];
    }
    bool ans=0;
    if(n>=1){
        ans=ans||helper(n-1,x,y,1-turn,dp);
    }
    if(n>=x){
        ans=ans||helper(n-x,x,y,1-turn,dp);
    }
    if(n>=y){
        ans=ans||helper(n-y,x,y,1-turn,dp);
    }
    return dp[n][turn]=ans;
}
int findWinner(int n, int x, int y)
	{
        vector<bool> dp(n+1,0);
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            if(i-1>=0 && !dp[i-1]){
                dp[i]=1;
            }
            if(i-x>=0&&!dp[i-x]){
                dp[i]=1;
            }
            if(i-y>=0&&!dp[i-y]){
                dp[i]=1;
            }

        }
        return dp[n];
	}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//