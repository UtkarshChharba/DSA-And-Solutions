#include <bits/stdc++.h>
#include <vector>
using namespace std;
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
#include "TrieTree.h"
//.............................................................................................//
int32_t main(){
FIO
Trie t;
int n;cin>>n;
vector<string> v;
loop(i,0,n){
    string s;cin>>s;
    v.pb(s);
    t.insertWord(s);
}
bool check=false;
loop(i,0,n){
    check=check||t.palimdrome(v[i]);
}
cout<<check<<endl;
return 0;
}
//.............................................................................................//