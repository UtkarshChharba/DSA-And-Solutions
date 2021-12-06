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

int ways(int n){
    if(n<0){
        return 0;
    }
    if(n==0){
        return 1;
    }
    int output=0;
    output+=ways(n-1);
    output+=ways(n-2);
    output+=ways(n-3);
    return output;
}
//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
cout<<ways(n)<<endl;
int*dp=new int[n+1];
loop(i,0,n+1){
    dp[i]=0;
}
dp[0]=1;
dp[1]=1;
loop(i,2,n+1){
    if(i-3>=0){
        dp[i]+=dp[i-3];
    }
    if(i-2>=0){
        dp[i]+=dp[i-2];
    }
    if(i-1>=0){
        dp[i]+=dp[i-1];
    }
}
cout<<dp[n]<<endl;
return 0;
}
//.............................................................................................//