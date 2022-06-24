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


int maxSumIS(int arr[], int n)  
	{  
	    vector<int> dp(n+1);
        dp[0]=(0);
        dp[1]=(arr[0]);
        int ans=0;
        for(int i=1;i<=n;i++){
            int sum=0;
            for(int j=1;j<i;j++){
                if(arr[i-1]>arr[j-1]){
                    sum=max(sum,dp[j]);
                }
            }
            sum+=arr[i-1];
            ans=max(sum,ans);
            dp[i]=sum;
        }
        
        return ans;

	} 

int maxSumIS(int arr[], int n)  
	{  
	    return helper(arr,n,0,-1);

	} 
int helper(int arr[],int n,int cur,int pre){
    if(cur==n){
        return 0;
    }
    int mx=helper(arr,n,cur+1,pre);
    if(pre==-1||arr[cur]>arr[pre]){
        mx=max(mx,arr[cur]+helper(arr,n,cur+1,pre));
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