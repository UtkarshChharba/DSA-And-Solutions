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



struct comp{
    bool operator()(pair<int,int>a,pair<int,int>b){
        return a.second>b.second;
    }
};



//.............................................................................................//
int32_t main(){
FIO
priority_queue<pair<int,int>,vector<pair<int,int> >,comp> pq;
pq.push(mp(1,2));
pq.push(mp(1,3));
pq.push(mp(1,4));
pq.push(mp(1,5));
pq.push(mp(1,6));
pq.push(mp(1,7));
while(!pq.empty()){
    cout<<pq.top().second<<endl;
    pq.pop();
}




return 0;
}
//.............................................................................................//
/*
WE MUST USE CUSTOM COMPAROTS FOR DATA TYPE THAT PRIORITY QUEUES CANT COMPARE
FOR EG A CLASS CANT BE COMPARED ONLY ON THE BASIS OF OBJECT IT SHOULD BE DECIDED BY WHICH OBEJCT VALUE WE SHOULD COMPARE
FOR EG PAIR HAVE 2 VALUE WE CAN EITHER USE FIRST OR SECOND SO NEED TO USE CUSTOM COMAPARTOR
USE STRUCT
FOR PAIR SECOND COMPARISION AND IS DEFAULT SYNTAX FOR OTHER DATATYPE ALSO
WE ARE JUST OVERLOADING THE COMP FUNCTION

struct comp{
    bool operator()(pair<int,int>a,pair<int,int>b){
        return a.second>b.second;
    }
};


*/