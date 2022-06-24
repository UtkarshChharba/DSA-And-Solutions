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





int eggDrop(int n, int f) 
    {
        if(n<=1||f<=1){
            return f;
        }
        int mx=INT_MAX;
        for(int k=1;k<=f;k++){
            int temp=1+max(eggDrop(n-1,f-1),eggDrop(n,f-k));
            mx=min(temp,mx);
        }
        return mx;
    }
vector<vector<int> > dp(201,vector<int>(201,-1));
int eggDrop(int n, int f) 
    {
        if(n<=1||f<=1){
            return f;
        }
        int mx=INT_MAX;
        if(dp[n][f]!=-1){
            return dp[n][f];
        }
        for(int k=1;k<=f;k++){
            int temp=1+max(eggDrop(n-1,f-1),eggDrop(n,f-k));
            mx=min(temp,mx);
        }

        return dp[n][f]=mx;
    }

//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//