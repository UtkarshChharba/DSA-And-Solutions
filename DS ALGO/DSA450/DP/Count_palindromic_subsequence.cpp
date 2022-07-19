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


long long helper(string s,int i,int js){
    
}
long long countPS(string str)
    {
       string a=LCS(str);
    }
string LCS(string a){
    string b=a;
    reverse(a.begin(),a.end());
    int mx=0;
    vector<vector<int>  >dp(a.size()+1,vector<int>(a.size()+1));
    for(int i=0;i<a.size()+1;i++ ){
        for(int j=0;j<a.size()+1;j++){
            if(!j||!i){
                dp[i][j]=0;
            }
            else if(a[i-1]==b[j-1]){
                dp[i][j]=dp[i-1][j-1]+1;
            }
            else{
                dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
            }
        }
    }
    string c="";
    int i=a.size();
    int j=a.size();
    while(i && j){
        if(a[i-1]==b[j-1]){
            c=a[i-1]+c;
            i--;
            j--;
        }
        else if(dp[i][j]==dp[i-1][j]){
            i--;
        }
        else{
            j--;
        }
    }
    return c;
}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//