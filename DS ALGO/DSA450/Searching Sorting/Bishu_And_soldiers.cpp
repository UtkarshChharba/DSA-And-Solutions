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

int binary_search(vector<int> v,int power){
    int start=0,end=v.size()-1;
    int ans=0;
    while(end>=start){
        int mid=(start+end)/2;
        if(v[mid]>power){
            end=mid-1;
        }
        else{
            ans=mid;
            start=mid+1;
        }
    }
    return ans;
}
//.............................................................................................//
int32_t main(){
FIO

int n;cin>>n;
vector<int> v(n);
for(int i=0;i<n;i++){
    cin>>v[i];
}
vector<int> ans;
sort(v.begin(),v.end());
ans=v;
for(int i=1;i<n;i++){
    ans[i]+=ans[i-1];
}
int q;cin>>q;
for(int i=0;i<n;i++){
    int res=binary_search(v,power);
    cout<<res+1<<" "<<ans[res]<<endl;
}
return 0;
}
//.............................................................................................//