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




int cut_rod_rec(vector<int> size,vector<int> price,int n,int length){
    if(!length ||!n){
        return 0;
    }
    if(length>=size[n-1]){
        return max(price[n-1]+cut_rod_rec(size,price,n,length-size[n-1]),cut_rod_rec(size,price,n-1,length));
    }
    else{
        return cut_rod_rec(size,price,n-1,length);
    }
    
}
vector<vector<int> > dp(1001,vector<int>(1001,-1));
int cut_rod_memorization(vector<int> size,vector<int> price,int n,int length){
    if(!length||!n){
        return 0;
    }
    if(dp[n][length]!=-1){
        return dp[n][length];
    }
    else if(length>=size[n-1]){
        dp[n][length]=max(price[n-1]+cut_rod_rec(size,price,n,length-size[n-1]),cut_rod_rec(size,price,n-1,length));
    }
    else{
        dp[n][length]=cut_rod_rec(size,price,n-1,length);
    }
    return dp[n][length];
}
int cut_rod_dp(vector<int> size,vector<int> price,int n,int length){
    vector<vector<int> > dp(n+1,vector<int>(length+1));
    for(int i=0;i<n+1;i++){
        for(int j=0;j<length+1;j++){
            if(!i || !j){
                dp[i][j]=0;
            }
            else if(j>=size[i-1]){
                dp[i][j]=max(price[i-1]+dp[i][j-size[i-1]],dp[i-1][j]);
            }
            else{
                dp[i][j]=dp[i-1][j];
            }
        }
    }
    return dp[n][length];
}
//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
int length;cin>>length;
vector<int> size(n);
vector<int> price(n);
for(int i=0;i<n;i++){
    cin>>size[i];
}
for(int i=0;i<n;i++){
    cin>>price[i];
}
cout<<cut_rod_rec(size,price,n,n)<<" "<<cut_rod_memorization(size,price,n,n)<<" "<<cut_rod_dp(size,price,n,n)<<" "<<endl;
return 0;
}
//.............................................................................................//