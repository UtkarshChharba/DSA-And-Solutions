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
int k;cin>>k;
priority_queue<int> pq;
loop(i,0,k){
    pq.push(v[i]);
}
loop(i,k,n){
    if(pq.top()>v[i]){
        pq.pop();
        pq.push(v[i]);
    }
}
while(!pq.empty()){
    cout<<pq.top()<<endl;
    pq.pop();
}

return 0;
}
//.............................................................................................//
/*
BASIC METHOD IS THAT 
PUSHING INTIALLLY K ELEMENTS IN THE QUEUE THEN JUST CHECKING THAT EVERY TIME
THE TOP SHOULD BE LESS THEN THE WHOLE ARRAY THAT IS
FROM THE GROUP OF MINIMUM ITS MAXIMUM SHOULD BE LESS THAN THE WHOLE ARRAY*/