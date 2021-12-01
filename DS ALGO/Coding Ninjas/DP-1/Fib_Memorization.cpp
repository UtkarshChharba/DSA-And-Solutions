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

int fib_helper(int n,int ans[]){
    if(n<=1){
        return n;
    }
    if(ans[n]!=-1){
        return ans[n];
    }
    ans[n]=fib_helper(n-1,ans)+fib_helper(n-2,ans);
    return ans[n];
}

int fib_2(int n){
    int*ans=new int[n+1];
    loop(i,0,n+1){
        ans[i]=-1;
    }
    return fib_helper(n,ans);
}
//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
cout<<fib_2(n)<<endl;
return 0;
}
//.............................................................................................//
/*
WE ARE MAKING A N+1 SIZE ARRAY WITH EVERY ELEMENT AS -1
THEN WE ARE USING MEMORIAZATION 
AS EVERY ELEMENT IS -1 SO IF WE KNOW PREVIOSLY KNOW N-1 AND N-2 WE USE IT TO FIND N
OTHERWISE FIND N-1 AND N-2 FIRST RECURSIVELY BUT SAVE IT FOR LATER
*/