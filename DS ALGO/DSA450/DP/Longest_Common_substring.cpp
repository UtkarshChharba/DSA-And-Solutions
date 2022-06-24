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


int LCS_rec(string a,string b,int m,int n,int count){
    if(!m||!n){
        return count;
    }
    if(a[m-1]==b[n-1]){
        count=LCS_rec(a,b,m-1,n-1,count+1);
    }
    return max(count,max(LCS_rec(a,b,m-1,n,0),LCS_rec(a,b,m,n-1,0)));

}
vector<vector<int> > dp(1001,vector<int>(1001,-1));
int LCS_memorization(string a,string b,int m,int n,int count){
    if(!m||!n){
        return count;
    }
    if(dp[m][n]!=-1){
        return dp[m][n];
    }
    if(a[m-1]==b[n-1]){
        count=LCS_rec(a,b,m-1,n-1,count+1);
    }
    dp[m][n]=max(count,max(LCS_rec(a,b,m-1,n,0),LCS_rec(a,b,m,n-1,0)));
    return dp[m][n];
}
int LCS_dp(string a,string b,int m,int n){
    int res=0;
    vector<vector<int> > dp(m+1,vector<int>(n+1));
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n;j++){
            if(!i||!j){
                dp[i][j]=0;
            }
            else if(a[i-1]==b[j-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=0;
            }
            res=max(res,dp[i][j]);
        }
    }
    return res;
}
//.............................................................................................//
int32_t main(){
FIO
string a,b;cin>>a>>b;
cout<<LCS_rec(a,b,a.size(),b.size(),0)<<" "<<LCS_memorization(a,b,a.size(),b.size(),0)<<" "<<LCS_dp(a,b,a.size(),b.size());
return 0;
}
//.............................................................................................//