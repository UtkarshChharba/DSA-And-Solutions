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

vector<vector<int> > fourSum(vector<int> &arr, int target) {
    map<vector<int>,bool> mp;
    sort(arr.begin(),arr.end());
    vector<vector<int> > set1;
        for(int i=0;i<arr.size()-3;i++){
            for(int j=i+1;j<arr.size()-2;j++){
                int k=j+1,l=arr.size()-1;
                while(l>k){
                    if(arr[i]+arr[j]+arr[k]+arr[l]==target){
                        vector<int> ans;
                        ans.push_back(arr[i]);
                        ans.push_back(arr[j]);
                        ans.push_back(arr[k]);
                        ans.push_back(arr[l]);
                        if(!mp.count(ans)){
                            set1.push_back(ans);
                            mp[ans]++;
                        }
                        k++;
                        l--;   
                    }
                    else if(arr[i]+arr[j]+arr[k]+arr[l]>target){
                        l--;
                    }
                    else{
                        k++;
                    }
                }
            }
        }
        return set1;
    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//