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

vector<int> singleNumber(vector<int> nums) 
    {
        int xor_ans=0;
        for(int i=0;i<nums.size();i++){
            xor_ans=xor_ans^nums[i];
        }
        int cnt=0;
        cout<<xor_ans<<" "<< (3^29)<<endl;
        while(!(xor_ans&1)){
            xor_ans=xor_ans>>1;
            cnt++;
        }
        cout<<cnt<<endl;
        int xor1=0,xor2=0;
        cout<<"Wah"<<endl;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&(1<<cnt)){
                xor1=nums[i]^xor1;
                
            }
            else{
                xor2=nums[i]^xor2;
            }
        }
        vector<int> ans;
        cout<<xor1<<" "<<xor2<<endl;
        ans.push_back(xor1);
        ans.push_back(xor2);
        return ans;
    }
//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
vector<int> ans(2*n+2);
loop(i,0,2*n+2){
    cin>>ans[i];
}
singleNumber(ans);
return 0;
}
//.............................................................................................//