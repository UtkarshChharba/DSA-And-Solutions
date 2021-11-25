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



//...................................................................................//
int32_t main(){
FIO
int n;cin>>n;
vi v;
map<int,int> m;
loop(i,0,n){
    int a;
    v.pb(a);
    cin>>a;
    m[a]++;
}
int max=0;
int value=v[0];//storing the starting value and max length of subarray
loop(i,0,v.size()){
    int a=v[i];
    int k=0;
    a=v[i];
    while(m[a]){//running a loop that just checks that m[a] exists and increment value k that is current length
        k++;
        a++;
    }
    if(k>max){//if k greater than the max length then update starting and length for array
        max=k;
        value=v[i];
    }
}
cout<<value<<" "<<value+max-1<<endl;
return 0;
}
//..................................................................................//