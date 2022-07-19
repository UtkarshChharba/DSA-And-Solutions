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
vector<vector <int> > ans;
bool isValid(int i,int j, int m , int n){
    if(i>=0&&j>=0&&i<m&&j<n){
        return 1;
    }
    return 0;
}
void helper(vector<vector<int> > & mat ,int i,int j, int m , int n,vector<int> &temp){
    temp.push_back(mat[i][j]);
    if(i==m-1&&j==n-1){
        ans.push_back(temp);
        return;
    }
    if(isValid(i+1,j,m,n)){
        helper(mat,i+1,j,m,n,temp);
    }
    if(isValid(i,j+1,m,n)){
        helper(mat,i+1,j,m,n,temp);
    }
    temp.pop_back();
    return;
}
vector<vector <int> > printAllpaths(vector<vector<int> > & mat , int m , int n)
{
    ans.clear();
    vector<int> temp;
    helper(mat,0,0,m,n,temp);
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