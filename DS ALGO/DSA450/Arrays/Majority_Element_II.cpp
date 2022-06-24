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



vector<int> majorityElement(vector<int>& nums) {
        
        int count1=0,count2=0;
        int ans1,ans2;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ans1){
                count1++;
            }
            else if(nums[i]==ans2){
                count2++;
            }
            else if(count1==0){
                ans1=nums[i];
                count1++;
            }
            else if(count2==0){
                ans2=nums[i];
                count2++;
            }
            else{
                count1--;
                count2--;
            }

        }
        count1=0;count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==ans1){
                count1++;
            }
            if(nums[i]==ans2){
                count2++;
            }
        }
        vector<int> ans;
        if(ans1!=ans2 && count1>nums.size()/3 && count2>nums.size()/3){
            ans.push_back(ans1);
            ans.push_back(ans2);
            return ans;
        }
        if(count1>nums.size()/3){
            ans.push_back(ans1);
            return ans;
        }
        if(count2>nums.size()/3){
            ans.push_back(ans2);
            return ans;
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