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




long long getMaxArea(long long arr[], int n)
    {
        vector<pair<int,int> > ans(n);
        stack<int> s;
        s.push(n-1);
        ans[n-1].second=n-1;
        for(int i=n-2;i>=0;i--){
            while(!s.empty()&& arr[s.top()]>arr[i]){
                s.pop();
            }
            if(s.empty()){
                ans[i].second=i;
            }
            else{
                ans[i].second=s.top();
            }
            s.push(i);
        }
        while(!s.empty()){
            s.pop();
        }
        s.push(0);
        ans[0].first=0;
        for(int i=1;i<n;i++){
            while(!s.empty()&& arr[s.top()]>arr[i]){
                s.pop();
            }
            if(s.empty()){
                ans[i].first=i;
            }
            else{
                ans[i].first=s.top();
            }
            s.push(i);
        }
        int max_area=0;
        for(int i=0;i<n;i++){
            cout<<ans[i].second-ans[i].first-1<<endl;
            max_area=max(max_area,arr[i]*(ans[i].second-ans[i].first-1));
        }
        return max_area;

    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//