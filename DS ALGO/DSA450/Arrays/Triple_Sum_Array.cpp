#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
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

bool find3Numbers(int A[], int n, int X)
{
    unordered_map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[A[i]]++;
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(mp.count(X-A[i]-A[j])){
                if((X-A[i]-A[j])==A[i] && (X-A[i]-A[j])==A[j] && mp[A[i]]==3){
                    return 1;
                }
                else if((X-A[i]-A[j])==A[i] && mp[A[i]]==2){
                    return 1;
                }
                else if((X-A[i]-A[j])==A[j] && mp[A[j]]==2){
                    return 1;
                }
                else if((X-A[i]-A[j])!=A[i] && (X-A[i]-A[j])!=A[j]){
                    return 1;
                }
            }
        }
    }
    return 0;
}
bool find3Numbers(int A[], int n, int X){
    sort(A,A+n);
    for(int i=0;i<n;i++){
        int j=i+1,k=n-1;
        while(k>j){
            int sum=A[i]+A[j]+A[k];
            if(sum==X){
                return 1;
            }
            if(sum>X){
                k--;
            }
            else{
                j++;
            }
        }
    }
    return 0;
}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//