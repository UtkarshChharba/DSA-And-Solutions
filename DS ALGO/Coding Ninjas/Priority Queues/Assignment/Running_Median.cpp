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

//..................................................................//
int32_t main(){
FIO
priority_queue<int> p1;
priority_queue<int,vi,greater<int> > p2;
int n;cin>>n;
vi v(n);
loop(i,0,n){
    cin>>v[i];
}
int size=v.size();
if(size>0){
    cout<<v[0]<<endl;
}
if(size>1){
    cout<<(v[1]+v[0])/2<<endl;
}
if(size>2){
    p1.push(min(v[0],v[1]));
    p2.push(max(v[0],v[1]));
    loop(i,2,n){
        if(p1.top()>=v[i]){
            p1.push(v[i]);
        }
        else{
            p2.push(v[i]);
        }
        if(i%2!=0){
            while(p1.size()!=p2.size()){
                if(p1.size()>p2.size()){
                    int a=p1.top();
                    p1.pop();
                    p2.push(a);
                }
                else{
                    int a=p2.top();
                    p2.pop();
                    p1.push(a);
                }
            }
            cout<<(p1.top()+p2.top())/2<<endl;
        }
        else{
            if(p1.size()>p2.size()){
                    cout<<p1.top()<<endl;
                }
                else{
                    cout<<p2.top()<<endl;
                }
        }
    }
}

return 0;
}
//..................................................................//