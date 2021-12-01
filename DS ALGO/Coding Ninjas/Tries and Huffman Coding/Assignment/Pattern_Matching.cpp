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
#define fps(x,y)                        fixed<<setprecision(y)<<x
#include "TrieTree.h"

//.............................................................................................//
int32_t main(){

Trie t;
int n;cin>>n;
loop(i,0,n){
    string s;cin>>s;
    t.insertWord(s);
}
string a;cin>>a;
cout<<t.pattern_check(a)<<endl;
return 0;
}
//.............................................................................................//