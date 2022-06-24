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


string LCsubsequnce(string a,string b,int m,int n){
    vector<vector<int> > dp(m+1,vector<int>(n+1));
    for(int i=0;i<m+1;i++){
        for(int j=0;j<n+1;j++){
            if(!i||!j){
                dp[i][j]=0;
            }
            else if(a[i-1]==b[i-1]){
                dp[i][j]=1+dp[i-1][j-1];
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    string ans="";
    int i=m,j=n;
    while(i>0 && j>0){
        if(a[i-1]==b[j-1]){
            ans=a[i-1]+ans;
            i--;
            j--;
        }
        else if(dp[i-1][j]>=dp[i][j-1]){
            ans=a[i-1]+ans;
            i--;
        }
        else{
            ans=b[j-1]+ans;
            j--;
        }

    }
    while(i){
        ans=a[i-1]+ans;
        i--;
    }
    while(j){
        ans=b[j-1]+ans;
        j--;
    }
    return ans;
}
//.............................................................................................//
int32_t main(){
FIO
string a,b;cin>>a>>b;
cout<<LCsubsequnce(a,b,a.size(),b.size())<<endl;
return 0;
}
//.............................................................................................//