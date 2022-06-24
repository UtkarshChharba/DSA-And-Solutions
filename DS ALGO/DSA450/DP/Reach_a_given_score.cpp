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



long long count(long long n)
{
	long long dp[4][n+1];
	memset(dp, 0, sizeof(dp));   
    vector<int> cost(3);
    cost.push_back(3);
    cost.push_back(5);
    cost.push_back(10);              
	for(int i=0;i<cost.size()+1;i++){
        for(int j=0;j<n+1;j++){
            if(!j){
                dp[i][j]=1;
            }
            else if(!i){
                dp[i][j]=0;
            }
            else if(j>=cost[i-1]){
                dp[i][j]=dp[i][j-3]+dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }

        }
    }
	return dp[3][n];
}
long long count(long long n)
{
	if(n<0){
        return 0;
    }                 
	if(!n){
        return 1;
    }
    return count(n-10)+count(n-5)+count(n-3);
}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//