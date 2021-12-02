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

int recursion(vi v,int sum,int cur_sum=0,int index=1){
    if(cur_sum>sum){
        return 0;
    }
    if(cur_sum==sum){
        return 1;
    }
    int count=0;
    loop(i,index,v.size()){
        count+=recursion(v,sum,cur_sum+v[i],i);
    }
    return count;
}
//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
vi v(n+1);
unordered_map<int,int> m;
loop(i,1,n+1){
    cin>>v[i];
    m[v[i]]++;
}
int a;cin>>a;
int*dp=new int[a+1];
dp[0]=1;
loop(i,1,v[1]){
    dp[i]=0;
}
if(n==1){
    cout<<1<<endl;
}
else{
loop(i,v[1],v[2]){
    dp[i]=1;
}

cout<<dp[a]%mod<<endl;
}


return 0;
}
//.............................................................................................//