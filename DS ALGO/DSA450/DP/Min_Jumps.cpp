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




int minJumps(int arr[], int n){
       if(n==1){
           return 0;
       }
           int jump=0;
           int mx=0;
           int cur=0;
           for(;mx<n-1;jump++){
               int MX=0;
               for(;cur<=mx;cur++){
                   MX=max(MX,arr[cur]+cur);
               }
               cur=mx+1;
               mx=MX;
               if(mx<cur){
                   return -1;
               }
           }
           return jump;

    }
int minJumps(int arr[], int n){
       if(n==1){
           return 0;
       }
       int cur=0;
       int range=0;
       int steps=0;
       while(range<n-1){
            int mx=cur;
            while(cur<=range){
                mx=max(cur+arr[cur],mx);
            }
            steps++;
            range=mx;
            if(cur>range){
                return -1;
            }
       }
       return steps+1;
}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//