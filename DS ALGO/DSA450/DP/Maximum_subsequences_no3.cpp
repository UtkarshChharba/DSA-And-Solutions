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



int maxSumWO3Consec(int arr[], int n)
{
    vector<int>dp(n);
    if(n>=1){
        dp[0]=arr[0];
    }
    if(n>=2){
        dp[1]=arr[0]+arr[1];
    }
    if(n>=3){
        dp[2]=max(dp[1],max(dp[0]+arr[2],arr[1]+arr[2]));
    }
    for(int i=3;i<n;i++){
        dp[i]=max(dp[i-1],max(dp[i-2]+arr[i],dp[i-3]+arr[i]+arr[i-1]));
    }
    
    return dp[n];
}
int maxSumWO3Consec(int arr[], int n)
{
    if(n==0){
        return 0;
    }
    if(n==1){
        return arr[0];
    }
    if((n==2)){
        return arr[0]+arr[1];
    }
    int mx=max(maxSumWO3Consec(arr,n-1),max(maxSumWO3Consec(arr,n-2)+arr[n-1],maxSumWO3Consec(arr,n-3)+arr[n-1]+arr[n-2]));
}
//.............................................................................................//
int32_t main(){
FIO

return 0;
}
//.............................................................................................//