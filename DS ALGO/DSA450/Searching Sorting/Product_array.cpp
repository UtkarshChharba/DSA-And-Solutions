#include <bits/stdc++.h>
#include <vector>
#include <map>
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


vector<long long int> productExceptSelf(vector<long long int>& nums, int n) {

        map<int,int> m;  
        int product=1,product_without=1;
        for(int i=0;i<n;i++){
            product*=nums[i];

            if(nums[i]!=0){
                product_without*=nums[i];
            }
            else{
                m[0]++;
            }
        }
        vector<long long int> ans(n);
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                ans[i]=product/nums[i];
            }
            else{
                if(m[0]==1){
                    ans[i]=product_without;
                }
                else{
                    ans[i]=0;
                }
            }
        }
        return ans;
         
    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//