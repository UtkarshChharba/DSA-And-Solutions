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


int LCSof3 (string A, string B, string C, int n1, int n2, int n3)
{
    vector<vector<vector<int> > > dp(n1+1,vector<vector<int> >(n2+1,vector<int>(n3+1)));
    for(int i=0;i<=n1;i++){
            for(int j=0;j<=n2;j++){
                for(int k=0;k<=n3;k++){
                    if(!i||!j||!k){
                        dp[i][j][k]=0;
                    }
                    else if(A[i-1]==B[j-1]&&A[i-1]==C[k-1]){
                        dp[i][j][k]=1+dp[i-1][j-1][k-1];
                    }
                    else{
                        dp[i][j][k]=max(dp[i-1][j][k],max(dp[i][j-1][k],max(dp[i][j][k-1],max(dp[i-1][j-1][k],max(dp[i-1][j][k-1],dp[i][j-1][k-1])))));
                    }
                }
            }
    }
    return dp[n1][n2][n3];
}
int lcs(int x, int y, string s1, string s2)
    {
        vector<vector<int> > dp(s1.size(),vector<int>(s2.size()));
        for(int i=0;i<=s1.size();i++){
            for(int j=0;j<=s2.size();j++){
                if(!i||!j){
                    dp[i][j]=0;
                }
                else if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        return dp[s1.size()][s2.size()];
    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//