#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
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



class Solution{
    int dp[201][201][2];
public:
    int countWays(int N, string S){
        memset(dp,-1,sizeof(dp));
        return solve(S,0,S.size()-1,1);
    }
    int solve(string s,int i,int j,int val){
    if(i>j){
        return 0;
    }
    if(i==j){
        if(val)return s[i]=='T';
        else return s[i]=='F';
    }
    unordered_map<string,int> mp;
    string key=to_string(i);
    key+=" ";
    key=to_string(j);
    key+=" ";
    key=to_string(val);
    if(mp.find(key)!=mp.end()){
        return mp[key];
    }

    if(dp[i][j][val]!=-1){
        return dp[i][j][val];
    } 
    int lt,lf,rt,rf;
    int ans=0;
    string k1,k2,k3,k4;
    for(int k=i+1;k<=j-1;k+=2){
        k1=to_string(i)+" "+to_string(k-1)+" "+to_string(true);
            k2=to_string(i)+" "+to_string(k-1)+" "+to_string(false);
            k3=to_string(k+1)+" "+to_string(j)+" "+to_string(true);
            k4=to_string(k+1)+" "+to_string(j)+" "+to_string(false);
            if(mp.find(k1)!=mp.end()){
               lt=mp[k1];
            }
            else{
                lf=solve(s,i,k-1,1);
            }
            if(mp.find(k2)!=mp.end()){
               lf=mp[k2];
            }
            else{
                lt=solve(s,i,k-1,0);
            }
            if(mp.find(k3)!=mp.end()){
               rt=mp[k3];
            }
            else{
                rt=solve(s,k+1,j,1);
            }
            if(mp.find(k3)!=mp.end()){
               rf=mp[k3];
            }
            else{
                rf=solve(s,k+1,j,0);
            }

        // if(dp[i][k-1][1]!=-1){
        //     lt=dp[i][k-1][1];
        // }
        // else{
        //     lt=solve(s,i,k-1,1);
        // }
        // if(dp[i][k-1][0]!=-1){
        //     lf=dp[i][k-1][0];
        // }
        // else{
        //     lf=solve(s,i,k-1,0);
        // }
        // if(dp[k+1][j][1]!=-1){
        //     rt=dp[k+1][j][1];
        // }
        // else{
        //     rt=solve(s,k+1,j,1);
        // }
        // if(dp[k][j][0]!=-1){
        //     rf=dp[k+1][j][0];
        // }
        // else{
        //     rf=solve(s,k+1,j,0);
        // }
        if(s[k]=='&'){
                if(val==1)ans+=lt*rt;
                else ans+=lt*rf+lf*rt+lf*rf;
            }
            else if(s[k]=='|'){
                if(val==1)ans+=lt*rt+lt*rf+lf*rt;
                else ans+=lf*rf;
            }
            else if(s[k]=='^'){
                if(val==1)ans+=lf*rt+lt*rf;
                else ans+=lt*rt+lf*rf;
            }
        }
        dp[i][j][val]=ans%1003;
        return dp[i][j][val];
    }
};
    
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//