#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
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




int minValue(string s, int k){
        unordered_map<char,int> mp;
        priority_queue<int> pq;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
        }
        for(unordered_map<char,int>::iterator i=mp.begin();i!=mp.end();i++){
            pq.push(i->second);
        }
        while(k--){
            int a=pq.top();
            pq.pop();
            if(--a>0){
                pq.push(a);
            }
        }
        int total=0;
        while(!pq.empty()){
            total+=pq.top()*pq.top();
            pq.pop();
        }
        return total;
        
    }

//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//