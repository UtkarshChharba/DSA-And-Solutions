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

void stack_reverse(stack<int> &s1,stack<int> &s2){
    if(s1.empty()){
        return;
    }
    int a=s1.top();
    s1.pop();
    stack_reverse(s1,s2);
    s2.push(a);
    return;
}
//.............................................................................................//
int32_t main(){
FIO
int n;
cin>>n;
stack<int> s1;
stack<int> s2;
for(int i=0;i<n;i++){
    int a;cin>>a;
    s1.push(a);
}
stack_reverse(s1,s2);
for(int i=0;i<n;i++){
    s1.push(s2.top());
    s2.pop();
}
loop(i,0,n){
    cout<<s1.top()<<" ";
    s1.pop();
}
cout<<endl;



return 0;
}
//.............................................................................................//