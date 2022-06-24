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






int knapSack_rec(int w, int wt[], int val[], int n) 
    { 
       if(n==0 || w==0){
            return 0;
       }
       if(w>=wt[n-1]){
        return max(val[n-1]+knapSack_rec(w-wt[n-1],wt,val,n-1),knapSack_rec(w,wt,val,n-1));
       }
       else{
        return knapSack_rec(w,wt,val,n-1);
       }
    }

vector<vector<int> > dp(1001,vector<int>(1001,-1));
int knapSack_memorization(int w, int wt[], int val[], int n) 
    { 
       if(n==0|| w==0){
            return 0;
       }
       if(dp[n][w]!=-1){
          return dp[n][w];}
       if(w>=wt[n-1]){
            dp[n][w]=max(val[n-1]+knapSack_memorization(w-wt[n-1],wt,val,n-1),knapSack_memorization(w,wt,val,n-1));
       }
       else{
          dp[n][w]=knapSack_memorization(w,wt,val,n-1);
       }
       return dp[n][w]; 
    }
int knapSack_dp(int w, int wt[], int val[], int n){
     int dp[n+1][w+1];
     for(int i=0;i<n+1;i++){
          for(int j=0;j<w+1;j++){
               if(!i||!j){
                    dp[i][j]=0;
               }
               else if(j>=wt[i-1]){
                    dp[i][j]=max(val[i-1]+dp[i-1][j-wt[i-1]],dp[i-1][j]);
               }
               else{
                    dp[i][j]=dp[i-1][j];
               }
          }
     }
     return dp[n][w];
}


//.............................................................................................//
int32_t main(){
FIO
int val[]={60,100,120};
int wt[]={10,20,30};
int w=50;
cout<<knapSack_dp(w,wt,val,3)<<" "<<knapSack_memorization(w,wt,val,3)<<" "<<knapSack_rec(w,wt,val,3)<<" ";
return 0;
}
//.............................................................................................//