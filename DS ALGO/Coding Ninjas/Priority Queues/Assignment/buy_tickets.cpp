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
queue<int> q;
priority_queue<int> pq;
int my_priority=0;
loop(i,0,n){
    cin>>v[i];
    q.push(v[i]);
    pq.push(v[i]);
}
int i;cin>>i;
my_priority=v[i];
int time=0;
while(!q.empty() And !pq.empty()){
    while(q.front()!=pq.top()){
        if(!i){
            i=q.size()-1;
        }
        else{
            i--;
        }
        int a=q.front();
        q.pop();
        q.push(a);
    }
    time++;
    if(!i){
        cout<<time<<endl;
        break;
    }
    q.pop();
    pq.pop();
    i--;
}
return 0;
}
//.............................................................................................//