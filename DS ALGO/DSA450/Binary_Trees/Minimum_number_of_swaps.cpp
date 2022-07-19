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
#include <unordered_map>

void inorder(int a[], vector<int> &v,int n, int index)
{
    if(index>=n){
        return ;
    }
    inorder(a,v,n,2*index+1);
    v.push_back(v[index]);
    inorder(a,v,n,2*index+2);
}
int minSwaps(vector<int> &v)
{
    int swaps=0;
    vector<int> ordered=v;
    sort(ordered.begin(),ordered.end());
    unordered_map<int,int> m;
    for(int i=0;i<ordered.size();i++){
        m[ordered[i]]=i;
    }
    int i=0;
    while(i<v.size()){
        if(m[v[i]]!=i){
            swap(m[v[i]],i);
            swaps++;
        }
        else{
            i++;
        }
    }
    return swaps;
}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//