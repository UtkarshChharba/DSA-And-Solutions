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


bool Subset_rec(vector<int> arr,int sum,int n){
    if(!n){
        return 0;
    }
    if(!sum){
        return 1;
    }
    if(sum>=arr[n-1]){
        return Subset_rec(arr,sum-arr[n-1],n-1)||Subset_rec(arr,sum,n-1);
    }
    else{
        return Subset_rec(arr,sum,n-1);
    }
}
vector<vector<int> > dp(1001,vector<int>(1001,-1));
bool Subset_memorization(vector<int> arr,int sum,int n){
    if(!n){
        return 0;
    }
    if(!sum){
        return 1;
    }
    if(dp[n][sum]!=-1){
        return dp[n][sum];
    }
    else if(sum>=arr[n-1]){
        dp[n][sum]=Subset_memorization(arr,sum-arr[n-1],n-1)||Subset_memorization(arr,sum,n-1);
    }
    else{
        dp[n][sum]=Subset_memorization(arr,sum,n-1);
    }
    return dp[n][sum];
}
bool Subset_dp(vector<int> arr,int sum,int n){
    vector<vector<int> > dp(n+1,vector<int>(sum+1));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<sum+1;j++){
            if(!j){
                dp[i][j]=1;
            }
            else if(!i){
                dp[i][j]=0;
            }
            else if(j>=arr[i-1]){
                dp[i][j]=dp[i-1][j-arr[i-1]]||dp[i-1][j];
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][sum];
}
//.............................................................................................//
int32_t main(){
FIO
vector<int> arr;
arr.push_back(3);
arr.push_back(34);
arr.push_back(4);
arr.push_back(12);
arr.push_back(5);
arr.push_back(2);
cout<<Subset_rec(arr,9,arr.size())<<" "<<Subset_memorization(arr,9,arr.size())<<" "<<Subset_dp(arr,9,arr.size())<<" ";
return 0;
}
//.............................................................................................//