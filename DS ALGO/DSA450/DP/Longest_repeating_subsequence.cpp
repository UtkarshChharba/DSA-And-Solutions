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

int LRS_rec(string a,int m,int n){
    if(!m || !n){
        return 0;
    }
    if(a[m-1]==a[n-1] && m!=n){
        return 1+LRS_rec(a,m-1,n-1);
    }
    else{
        return max(LRS_rec(a,m-1,n),LRS_rec(a,m,n-1));
    }
}
vector<vector<int> > dp(1001,vector<int>(1001,-1));
int LRS_memorization(string a,int m,int n){
    if(!m || !n){
        return 0;
    }
    if(dp[m][n]!=-1){
        return dp[m][n];
    }
    if(a[m-1]==a[n-1] && m!=n){
        dp[m][n]= 1+LRS_rec(a,m-1,n-1);
    }
    else{
        dp[m][n]= max(LRS_rec(a,m-1,n),LRS_rec(a,m,n-1));
    }
    return dp[m][n];
}
int LRS_dp(string a,int m){
    vector<vector<int> > dp(m+1,vector<int>(m+1));
    for(int i=0;i<m+1;i++){
        for(int j=0;j<m+1;j++){
            if(!i || !j){
                dp[i][j]=0;
            }
            else if(a[i-1]==a[j-1] && i!=j){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    return dp[m][m];
}
//.............................................................................................//
int32_t main(){
FIO
string a;cin>>a;
cout<<LRS_dp(a,a.size())<<" "<<LRS_memorization(a,a.size(),a.size())<<" "<<LRS_rec(a,a.size(),a.size())<<endl;
return 0;
}
//.............................................................................................//