#include <bits/stdc++.h>
#include <vector>
using namespace std;
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
#define fps(x,y)                        fixed<<setprecision(y)<<x

int staircase_recusrion(int n){
    int ans=0;
    if(n<0){
        return 0;
    }
    if(n<=1){
        return 1;
    }
    ans=staircase_recusrion(n-1)+staircase_recusrion(n-2)+staircase_recusrion(n-3);
    return ans;
}
int staircase_memoriaztion_helper(int n,int ans[]){
    if(n<0){
        return 0;
    }
    if(n<=1){
        return 1;
    }
    if(ans[n]==-1){
        ans[n]=staircase_memoriaztion_helper(n-1,ans)+staircase_memoriaztion_helper(n-2,ans)+staircase_memoriaztion_helper(n-3,ans);
    }
    return ans[n];
}
int staircase_memoriaztion(int n){
    int*ans=new int[n+1];
    loop(i,0,n+1){
        ans[i]=-1;
    }
    int a=staircase_memoriaztion_helper(n,ans);
    return a;

}
//.............................................................................................//
int32_t main(){
int n;cin>>n;
int *dp=new int[n+1];
dp[0]=1;
dp[1]=1;
dp[2]=2;
    loop(i,3,n+1){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3];
    }
    cout<<dp[n]<<endl;
cout<<staircase_recusrion(n)<<endl;
cout<<staircase_memoriaztion(n)<<endl;
return 0;
}
//.............................................................................................//