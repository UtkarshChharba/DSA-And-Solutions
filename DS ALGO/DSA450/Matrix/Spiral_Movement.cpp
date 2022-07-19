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


vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        vector<int> ans;
        int srow=0,erow=r-1,scol=0,ecol=c-1;
        int count=r*c;
        while(count){
           for(int i=scol;i<=ecol;i++){
                ans.push_back(matrix[srow][i]);
                count--;
           }
           for(int i=srow+1;i<=erow;i++){
                ans.push_back(matrix[i][ecol]);
                count--;
           }
           for(int i=ecol-1;i>=scol;i--){
            ans.push_back(matrix[erow][i]);
                count--;
           }
           for(int i=erow-1;i>srow;i--){
            ans.push_back(matrix[i][scol]);
                count--;
           }
           scol++;
           srow++;
           erow--;
           ecol--;
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