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
#define FIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define fps(x,y)                        fixed<<setprecision(y)<<x






//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
int*dp=new int[n+1];
vi v(n+1);
loop(i,1,n+1){
    cin>>v[i];
}
dp[1]=1;
int count=1;
loop(i,2,n+1){
    if(v[i]>v[i-1]){
        count++;
        if(count>dp[i-1]){
            dp[i]=count;
        }
        else{
            dp[i]=dp[i-1];
        }
    }
    else{
        count=1;
        dp[i]=dp[i-1];
    }
}
cout<<dp[n]<<endl;
return 0;
}
//.............................................................................................//