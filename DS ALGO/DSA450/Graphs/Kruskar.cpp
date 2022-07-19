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
class Edge{
    public:
    int source;
    int dest;
    int wt;
};
bool comp(Edge e1,Edge e2){
    return e1.wt<=e2.wt;
}
int find_parent(int*parent,int src){
    while(src!=parent[src]){
        src=parent[src];
    }
    return src;
}
void kruskals(Edge*input,int n,int e){
    sort(input,input+n,comp);
    Edge*output=new Edge[n-1];
    int count=0;
    int i=0;
    int *parent=new int[n];
    for(int i=0;i<n;i++){
        parent[i]=i;
    }
    while(count!=n-1){
        Edge currentEdge=input[i];
        int src_parent=find_parent(parent,input[i].source);
        int dst_parent=find_parent(parent,input[i].dest);
        if(src_parent!=dst_parent){
            output[count]=input[i];
            count++;
            parent[src_parent]=dst_parent;
        }
        i++;
    }
    for(int i=0;i<n-1;i++){
        cout<<min(output[i].source,output[i].dest)<<" "<<max(output[i].source,output[i].dest)<<" "<<output[i].wt<<endl;
    }

}
//.............................................................................................//
int32_t main(){
FIO
int n,e;
cin>>n>>e;
Edge*input=new Edge[e];
for(int i=0;i<e;i++){
    int s,d,w;
    cin>>s>>d>>w;
    input[i].source=s;
    input[i].dest=d;
    input[i].wt=w;
}
kruskals(input,n,e);
return 0;
}
//.............................................................................................//