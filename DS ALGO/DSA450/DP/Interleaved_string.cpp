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

bool isInterleave(string A, string B, string C) 
    {
        // return lcs(A,C)&&lcs(B,C);
        vector<vector<int> > dp(A.size(),vector<int>(B.size()));
        return helper(A,B,C,A.size(),B.size(),C.size(),dp);        
    }
bool helper(string a,string b,string c,int al,int bl,int cl,vector<vector<int> > &dp){
    if(!cl){
        return 1;
    }
    if(dp[al][bl]!=-1){
        return dp[al][bl];
    }
    bool ans=0;
    if(al-1>=0&&a[al-1]==c[cl-1]){
        ans=ans||helper(a,b,c,al-1,bl,cl-1,dp);
    }
    if(bl-1>=0&&a[al-1]==c[cl-1]){
        ans=ans||helper(a,b,c,al,bl-1,cl-1,dp);
    }
    if(!ans){
        dp[al][bl]=0;
    }
    else{
        dp[al][bl]=1;
    }
    return dp[al][bl];
}
int lcs(string s1, string s2)
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
        return dp[s1.size()][s2.size()]==s1.size();
    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//