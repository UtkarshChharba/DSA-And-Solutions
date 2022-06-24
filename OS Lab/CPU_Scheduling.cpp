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


class trio{
    public:
    int arrival_time;
    int burst_time;
    int cost;
    int position;
    int turnAround;
};
struct com{
    bool operator()(trio a,trio b){
        return a.cost<b.cost;
    }
};
bool vecom(trio a,trio b){
    return a.arrival_time<=b.arrival_time;
}
//.............................................................................................//
int32_t main(){
FIO
int customer_count;
cin>>customer_count;
vector<trio> v(customer_count);
vector<int> v1(customer_count);
loop(i,0,customer_count){
    cin>>v[i].arrival_time;
    v[i].position=i;
}
loop(i,0,customer_count){
    cin>>v[i].burst_time;
}
loop(i,0,customer_count){
    cin>>v[i].cost;
}
priority_queue<trio,vector<trio>,com> pq;
int time=0;
int count=0;
sort(v.begin(), v.end(), vecom);
pq.push(v[0]);
int i=1;
cout<<"Billing Sequence is: ";
while(!pq.empty()){
    trio top=pq.top();
    pq.pop();
    if(time-top.arrival_time>=0){
        v1[top.position]=time-top.arrival_time;
    }
    else{
        time+=time-top.arrival_time;
        v1[top.position]=0;
    }
    time+=top.burst_time;
    cout<<"C"<<top.position+1<<" ";
    v[top.position].turnAround=time-top.arrival_time;
    while(i<customer_count And v[i].arrival_time<=time){
        pq.push(v[i]);
        i++;
    }
}
cout<<endl;
cout<<"Waiting time for each Customer is:-"<<endl;
int avgWaiting=0;
int avgTurnAround=0;
loop(i,0,customer_count){
    cout<<"C"<<i+1<<":"<<v1[i]<<endl;
    avgWaiting+=v1[i];
}
cout<<"Average waiting time is: "<<(avgWaiting*1.0)/customer_count<<endl;
cout<<"TurnAround time for each Customer is:-"<<endl;
loop(i,0,customer_count){
    cout<<"C"<<i+1<<":"<<v[i].turnAround<<endl;
    avgTurnAround+=v[i].turnAround;
}
cout<<"Average waiting time is: "<<(avgTurnAround*1.0)/customer_count<<endl;
return 0;
}
//.............................................................................................//