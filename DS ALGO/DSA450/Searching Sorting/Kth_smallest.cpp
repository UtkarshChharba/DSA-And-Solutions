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





//.............................................................................................//
int32_t main(){
FIO
w(t){
    vector<pair<int,int> > v;
    int n;cin>>n;
    int q;cin>>q;
    for(int i=0;i<n;i++){
        int a,b;cin>>a>>b;
        v.push_back(make_pair(a,b));
    }
    sort(v.begin(),v.end());
    vector<pair<int,int> > ans;
    int start=v[0].first,end=v[0].second;
    for(int i=1;i<n;i++){
        if(end<v[i].first){
            ans.push_back(make_pair(start,end));
            start=v[i].first;
            end=v[i].second;
        }
        else{
            end=max(v[i].second,end);
        }
    }
    ans.push_back(make_pair(start,end));

    for(int i=0;i<q;i++){
        int k;cin>>k;
        int count=0;
        int index=-1;
        for(int j=0;j<ans.size();j++){
            if(count+ans[j].second-ans[j].first+1>k){
                index=j;
                cout<<ans[j].first+k-count-1<<endl;;
                break;
            }
            else{
                count+=ans[j].second-ans[j].first+1;
            }
        }
        if(index==-1){
            cout<<-1<<endl;
        }
        

    }

}
return 0;
}
//.............................................................................................//