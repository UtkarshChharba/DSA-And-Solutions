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


int longestSubsequence(int n, int a[])
    {
        vector<int> dp(n+1);
        dp[0]=0;
        dp[1]=1;
        int res=0;
       for(int i=1;i<n;i++){
        int cur=1;
        for(int j=0;j<i;j++){
            if(a[i]>a[j]){
                cur=max(cur,dp[j]+1);
            }
        }
        dp[i]=cur;
        res=max(res,cur);
       }
       return res;
    }
int helper(int n,int a[],int i,int j){
   if(i<n||j<n){
    return 0;
   }

}
int longestSubsequence(int n, int a[])
    {
        return helper(n,a,0,-1);
    }
int helper(int n,int a[],int cur,int pre){
    if(cur==n){
        return 0;
    }
    int len=helper(n,a,cur+1,pre);
    if(pre==-1||a[cur]>a[pre]){
        len=max(len,helper(n,a,cur+1,pre));
    }
    return len;
}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//