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


int Alpha_code(vi v,int size){
    if(size==1){
        return 1;
    }
    if(size==0){
        return 1;
    }
    int output=Alpha_code(v,size-1);
    if(10*v[size-2]+v[size-1]<=26){
        output+=Alpha_code(v,size-2);
    }
    return output;

}
//.............................................................................................//
int32_t main(){
FIO
vi v;
int n;cin>>n;
while(n){
    v.pb(n%10);
    n=n/10;
}
reverse(all(v));
cout<<Alpha_code(v,v.size())<<endl;
int*dp=new int[v.size()+1];
loop(i,0,v.size()){
    dp[i]=0;
}
dp[0]=1;
dp[1]=1;
loop(i,2,v.size()+1){
    if(v[i-2])
}
cout<<dp[v.size()-1]<<endl;
return 0;
}
//.............................................................................................//