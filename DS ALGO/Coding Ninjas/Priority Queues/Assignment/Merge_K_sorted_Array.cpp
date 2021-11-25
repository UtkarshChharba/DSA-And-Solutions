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
class triplet{
    public:
    int data;
    int index;
    int array_index;
    triplet(int data,int index,int array_index){
        this->data=data;
        this->index=index;
        this->array_index=array_index;
    }
};
struct comp{
    bool operator()(triplet a,triplet b){
        return a.data>b.data;
    }
};


//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
vector<vector<int> > v(n);
loop(i,0,n){
    int k;cin>>k;
    vector<int> p(k);
    loop(j,0,k){
        cin>>p[j];
    }
    v[i]=p;
}

vi output;
priority_queue<triplet,vector<triplet>,comp > pq;
loop(i,0,n){
    triplet a(v[i][0],0,i);
    pq.push(a);
}
while(!pq.empty()){
    output.pb(pq.top().data);
    int index=pq.top().index+1;
    int array_index=pq.top().array_index;
    pq.pop();
    if(index<v[array_index].size()){
        triplet a=triplet(v[array_index][index],index,array_index);
        pq.push(a);
    }

}
loop(i,0,output.size()){
    cout<<output[i]<<" ";
}
cout<<endl;

return 0;
}
//.............................................................................................//