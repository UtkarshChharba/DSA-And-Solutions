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
    vector<vector<int> > ans;
void helper(vector<int> &A,int sum,int n,vector<int> &temp){
    if(!n||sum<0){
        return;
    }
    if(!sum){
        reverse(temp.begin(),temp.end());
        ans.push_back(temp);
        reverse(temp.begin(),temp.end());
        return;
    }
    int i=n;
    while(i>1 && A[i-1]==A[i-2]){
        i--;
    }
    if(sum>=A[n-1]){
        temp.push_back(A[n-1]);
        helper(A,sum-A[n-1],n,temp);
        temp.pop_back();
        helper(A,sum,i-1,temp);
    }
    else{
        helper(A,sum,i-1,temp);
    }
    return;
}
vector<vector<int> > combinationSum(vector<int> &A, int B) {
        ans.clear();
        vector<int> temp;
        sort(A.begin(),A.end());
        helper(A,B,A.size(),temp);
        sort(ans.begin(),ans.end());
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