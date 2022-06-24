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


// int helper(vector<int> &arr, int k,int cur,int product){
//     if(product>=k){
//         return 0;
//     }
//     if(cur==arr.size()){
//         return 1;
//     }
//     return helper(arr,k,cur+1,product*arr[cur])+helper(arr,k,cur+1,product);
// }
int helper(int n,vector<int> &arr, int k,int product){
    if(product>=k){
        return 0;
    }
    if(!n){
        return 1;
    }
    return helper(arr,k,n-1,product*arr[n-1])+helper(arr,k,n-1,product);
}
int helper(vector<int> &arr, int k,int n,int product){
    if(!n){
        return product<k?1:0;
    }
    if(product*arr[n-1]<k){
        return helper(arr,k,n-1,product*arr[n-1])+helper(arr,k,n-1,product);
    }
    return helper(arr,k,n-1,product);
}

int productSubSeqCount(vector<int> &arr, int k)
{
    return helper(arr,k,arr.size(),1)-1;
}
int productSubSeqCount(vector<int> &arr, int k)
{
    vector<vector<int> > dp(arr.size()+1,vector<int>(k+1));
    for(int i=0;i<arr.size()+1;i++){
        for(int j=0;j<k+1;j++){
            if(!i||!j){
                dp[i][j]=0;
            }
            dp[i][j]=dp[i-1][j];
            if(j>=arr[i-1]){
                dp[i][j]+=1+dp[i-1][j]+1;
            }
        }
    }
    return dp[n][k];
}


//.............................................................................................//
int32_t main(){
FIO

int n;cin>>n;
int k;cin>>k;
vector<int> arr(n);
for(int i=0;i<n;i++){
    cin>>arr[i];
}
cout<<productSubSeqCount(arr,k)<<endl;
return 0;
}
//.............................................................................................//