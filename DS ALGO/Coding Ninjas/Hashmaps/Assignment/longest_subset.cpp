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






//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
vi v(n);
loop(i,0,n){
    cin>>v[i];
}
int max=0;//max length subaaray
map<int,int> m;
loop(i,1,n+1){
    v[i]+=v[i-1];//making a prefix sum vector
    //condition will only hit when the current sum is also achieved previously
    // 1,2,3,4,-7==1,3,6,10,3 now sum 3 is already achieved so deduct that sum
    //so answer is index(4)-index(1)=3 (3,4,-7)
    if(m.count(v[i])){//checking is that sum appeared before
        if(max<i-m[v[i]]){
            max=i-m[v[i]];
        }
    }
    else{
        m[v[i]]=i;
    }
}
cout<<max<<endl;
return 0;
}
//.............................................................................................//