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


int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int l=0,h=n;
        while(l<=h){
            int idx1=l+(h-l)/2;
            int idx2=k-(idx1+1);
            if(idx1<=k&&idx2<=m){
                int max1=INT_MIN;
                int min1=INT_MAX;
                int max2=INT_MIN;
                int min2=INT_MAX;
                if(idx1){
                    max1=arr1[idx1-1];
                }
                if(idx1!=n){
                    min1=arr1[idx1];
                }
                if(idx2){
                    max2=arr2[idx2-1];
                }
                if(idx2!=m){
                    min2=arr2[idx2];
                }
                if(max1<=min1&&max2<=min2){
                    return max(max1,max2);
                }
                else if(max1>min2){
                    h=idx1-1;
                }
                else{
                    l=idx1+1;
                }
            }
            else if(idx1>k){
                h=idx1-1;
            }
            else{
                l=idx1+1;
            }
                      
        }
        }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//