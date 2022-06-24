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

int longestSubsequence(int N, int A[])
    {
        return helper(N,A,0,-1);
    }
int helper(int n,int a[],int cur,int pre){
    if(cur==n){
        return 0;
    }
    int mx=helper(n,a,cur+1,pre);
    int res=0;
    if(pre==-1||abs(a[cur]-a[pre])==1){
        res=helper(n,a,cur+1,cur);
    }
    if(pre!=-1&&abs(a[cur]-a[pre])==1){
        res++;
    }
    mx=max(res,mx);
    return mx;
}
int longestSubsequence(int N, int A[])
    {
        vector<int> dp(N+1);
        dp[0]=0;
        dp[1]=1;
        int mx=0;
        for(int i=1;i<N+1;i++){
           int cur=1;
            for(int j=1;j<i;j++){
                if(abs(A[i-1]-A[j-1])==1){
                    cur=max(dp[j]+1,cur);
                }
            }
            dp[i]=cur;
            mx=max(dp[i],cur);
        }
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