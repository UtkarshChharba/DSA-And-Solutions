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



int copy_set(int x,int y,int l,int r){
    if(l<1 || r>32){
        return -1;
    }
    for(int i=l;i<=r;i++){
        int mask=1<<(i-1);
        if(y&mask ){
            x=x|mask;
        }
    }
    return x;
}
void copySetBits(unsigned &x, unsigned y,
                 unsigned l, unsigned r)
{
    // l and r must be between 1 to 32
    if (l < 1 || r > 32)
        return ;
 
    // get the length of the mask
    int maskLength = (1ll<<(r-l+1)) - 1;
 
    // Shift the mask to the required position
    // "&" with y to get the set bits at between
    // l ad r in y
    int mask = ((maskLength)<<(l-1)) & y ;
    x = x | mask;
}
//.............................................................................................//
int32_t main(){
FIO
int x,y,l,r;
cin>>x>>y>>l>>r;
cout<<copy_set(x,y,l,r)<<endl;;
return 0;
}
//.............................................................................................//