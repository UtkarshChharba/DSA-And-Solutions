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

//DEAFAULT PRIORTITY QUEUE IS OF MAX TYPE
//.............................................................................................//
int32_t main(){
FIO
priority_queue<int> pq;
//FOR MIN INBUILT HEAP USE
priority_queue<int,vector<int>,greater<int> > pq1;
//this means data type=int,storage of priority queue is vector,and comaprator used is greater<int>

    pq.push(16);
    pq.push(1);
    pq.push(167);
    pq.push(7);
    pq.push(45);
    pq.push(32);
    cout<<"Size:"<<pq.size()<<endl;
    cout<<"Top:"<<pq.top()<<endl;
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
    cout<<endl;
    pq1.push(16);
    pq1.push(1);
    pq1.push(167);
    pq1.push(7);
    pq1.push(45);
    pq1.push(32);
    cout<<"Size:"<<pq1.size()<<endl;
    cout<<"Top:"<<pq1.top()<<endl;
    while(!pq1.empty()){
        cout<<pq1.top()<<" ";
        pq1.pop();
    }
    cout<<endl;
return 0;
}
//.............................................................................................//