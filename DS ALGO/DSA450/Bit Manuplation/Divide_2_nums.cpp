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


int divide(long long dividend, long long divisor){
    int sign=(dividend>0)^(divisor>0)?-1:1;
    int temp=0;
    dividend=abs(dividend);
    divisor=abs(divisor);
    long long quotient=0;
    for(int i=31;i>=0;i--){
        if(temp+(divisor<<i)<=dividend){
            temp+=divisor<<i;
            quotient|=1ll<<i;
        }
    }
    if(sign<0){
        quotient=-quotient;
    }
    return quotient;
}
//.............................................................................................//
int32_t main(){
FIO
int dividend,divisor;
cin>>dividend>>divisor;
cout<<divide(dividend,divisor)<<endl;
return 0;
}
//.............................................................................................//