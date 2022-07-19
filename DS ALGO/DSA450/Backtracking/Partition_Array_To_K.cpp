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

bool helper(int a[], int n, int k,int sum,vector<bool> &edge,int target,int i){
    if(!k){
        return 1;
    }
    if(sum==target){
        return helper(a,n,k-1,0,edge,target,0);
    }
    if(i==n){return 0;}
    if(target>=sum+a[i]&&!edge[i]){
        edge[i]=1;
        return helper(a,n,k,sum+a[i],edge,target,i+1);
    }
    return helper(a,n,k,sum,edge,target,i+1);

}
bool isKPartitionPossible(int a[], int n, int k)
    {
         vector<bool> edge(n,0);
         int total_sum=0;
         for(int i=0;i<n;i++){
            total_sum+=a[i];
         }
         if((total_sum%k)){
            return 0;
         }
         int target=total_sum/k;
            sort(a,a+n);
         return helper(a,n,k,0,edge,target,0);
    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//
