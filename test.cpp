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

vector<vector<int> > threeSum(vector<int>& nums) {
        unordered_map<int,vector<int> > mp;
        for(int i=0;i<nums.size();i++){
          mp[nums[i]].push_back(i);
        }
        int sum=0;
        for(int i=0;i<nums.size();i++){
          for(int j=i+1;j<nums.size();i++){
            sum=nums[i]+nums[j];
            if(mp.count(-sum) && (nums[i]!=mp[-sum][0] && mp[-sum].size()) && nums[j]!=mp[-sum]){

            }
          }
        }
    }
//.............................................................................................//
int32_t main(){
int size;
	vector<int> v(size);
	for(int i=0;i<size;i++){
	    cin>>v[i];
	}
    for(int i=size-1;i>=0;i--){
        cout<<v[i]<<" ";
    }
    cout<<endl;

return 0;
}
//.............................................................................................//