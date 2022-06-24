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






long long maxProduct(vector<int> arr, int n) {
      long long product=1;
      long long max_product=1;
       for(int i=0;i<n;i++){
           product*=arr[i];
           max_product=max(max_product,product);
           if(product=0){
               product=1;
           }
       }
       product=1;
       for(int i=n-1;i>=0;i--){
           product*=arr[i];
           max_product=max(max_product,product);
           if(product=0){
               product=1;
           }
       }
       return max_product;
	}
long long maxProduct_2(vector<int> arr, int n){
    long long product=1;
    long long min_product=1;
    long long max_product=INT_MIN;
    for(int i=0;i<n;i++){
        product*=arr[i];
        min_product*=arr[i];
        if(product<0){
            product=1;
        }
        if(arr[i]==0){
            product=1;
            min_product=1;
        }
        max_product=max(min_product,product);
    }
    bool is_positive=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            is_positive=1;
        }
    }
    int count=0;
    bool total=0;
    if(!is_positive){
        for(int i=0;i<n;i++){
            count++;
            if(!arr[i]){
                count=0;
            }
            if(count>1){
                total=1;
            }
            
    }
    }
    return total==1?max_product:0;

    
}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//