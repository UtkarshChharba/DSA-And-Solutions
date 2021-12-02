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

int recursion(int a,int b){
    if(!a And !b){
        return 1;
    }
    if((!a And b) Or (a And !b)){
        return 0;
    }
    int h=1;
    int c=a-h*h;
    int count=0;
    while(c>=0){
        h++;
        count+=recursion(c,b-1);
        if(count>0){
            cout<<c<<" "<<b-1<<endl;
        }
        c=a-h*h;
    }
    return count;
}
//.............................................................................................//
int32_t main(){
FIO
int a,b;cin>>a>>b;
int*dp=new int[a+1];
loop(i,0,a+1){
    dp[i]=0;
}
dp[0]=1;
dp[1]=1;
loop(i,2,a+1){
    int c=i;
    int h=0;
    while(c>=0){
        int d=i-c;
        if(dp[d] And dp[c] And (c!=d)){
            dp[i]+=dp[c]*dp[d];
        }
        if(c==0){
            dp[i]+=2;
        }
        h++;
        c=i-pow(h,b);
    }
    dp[i]=dp[i]/2;
}
cout<<dp[a]<<endl;
loop(i,0,10){
    cout<<dp[i]<<" ";
}
cout<<endl;
return 0;
}
//.............................................................................................//