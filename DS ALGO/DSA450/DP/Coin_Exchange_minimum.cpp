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


int exchange_rec(vector<int> bag,int sum,int n){
    if(!sum){
        return 0;
    }
    if(!n){
        return INT_MAX-1;
    }
    if(sum>=bag[n-1]){
        return min(exchange_rec(bag,sum-bag[n-1],n)+1,exchange_rec(bag,sum,n-1));
    }
    else{
        return exchange_rec(bag,sum,n-1);
    }

}
vector<vector<int> > dp(1001,vector<int>(1001,-1));
int exchange_memorization(vector<int> bag,int sum,int n){
    if(!sum){
        return 0;
    }
    if(!n){
        return INT_MAX-1;
    }
    if(dp[n][sum]!=-1){
        return dp[n][sum];
    }
    if(sum>=bag[n-1]){
        dp[n][sum]= min(exchange_memorization(bag,sum-bag[n-1],n)+1,exchange_memorization(bag,sum,n-1));
    }
    else{
        dp[n][sum]= exchange_rec(bag,sum,n-1);
    }
    return dp[n][sum];
}
int exchange_dp(vector<int> bag,int sum,int n){
    vector<vector<int> > dp(n+1,vector<int>(sum+1));
    for(int i=0;i<sum+1;i++){
        dp[0][i]=INT_MAX-1;
    }
    for(int i=1;i<n+1;i++){
        dp[i][0]=0;
    }
    for(int i=1;i<sum+1;i++){
        if(i%bag[0]){
            dp[1][i]=INT_MAX-1;
        }
        else{
            dp[1][i]=i/bag[0];
        }
    }
    // dp[0][0]=0;
    for(int i=2;i<n+1;i++){
        for(int j=1;j<sum+1;j++){
            if(j>=bag[i-1]){
                dp[i][j]=min(dp[i][j-bag[i-1]]+1,dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
    
}
//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
int sum;cin>>sum;
vector<int> bag(n);
for(int i=0;i<n;i++){
    cin>>bag[i];
}
cout<<exchange_rec(bag,sum,n)<<" "<<exchange_memorization(bag,sum,n)<<" "<<exchange_dp(bag,sum,n)<<" ";
return 0;
}
//.............................................................................................//