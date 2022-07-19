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
vector<string> ans;

vector<string> findPath(vector<vector<int> > &m, int n) {
        vector<vector<bool> > v(n,vector<bool>(n,0));
        ans.clear();
        solve(m,n,0,0);
        return ans;
    }
bool isValid(vector<vector<int> > &m, vector<vector<bool> > &v,int n,int i,int j){
    if(i>0&&j>0&&i<n&&j<n&&!(v[i][j])&&m[i][j]){
        return true;
    }
}
void solve(vector<vector<int> > &m, vector<vector<bool> > &v,int n,int i=0,int j=0,string s=""){
        if(!isValid(m,v,n,i,j)){
            return;
        }
        else{
            if(i==n-1&&j==n-1){
                ans.push_back(s);
                return;
            }
            v[i][j]=true;
            solve(m,v,n,i+1,j,s+"D");
            solve(m,v,n,i,j+1,s+"R");
            solve(m,v,n,i,j-1,s+"L");
            solve(m,v,n,i-1,j,s+"U");
            v[i][j]=false;
        }
        return;
}


//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//