#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
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

unordered_map<string,int> dp;
unordered_map<string,bool> mp;
int wordBreak(string a, vector<string> &b) {
    for(int i=0;i<b.size();i++){
        mp[b[i]]++;
    }
    return helper(a,b,0,a.size()-1);
}
int helper(string a, vector<string> &b,int i,int j){
    if(i>j){
        return 0;
    }
    if(i==j){
        return 1;
    }
    string key=to_string(i)+" "+to_string(j);
    if(dp.count(key)){
        return dp[key];
    }
    bool ty=0;
    string ans="";
    for(int k=i;k<=j-1;k++){
        ans+=a[k];
        if(mp.count(ans)){
            ty=ty||helper(a,b,k+1,j);
        }
    }

    return dp[key]=ty;
}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//