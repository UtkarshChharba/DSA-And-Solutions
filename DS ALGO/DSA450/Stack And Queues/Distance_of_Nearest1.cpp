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



bool check(vector<vector<int> >&grid,int i,int j){
    if(i>=0&& j>=0 && i<grid.size()&& j<grid[0].size()){
        return 1;
    }
    return 0;
}

vector<vector<int> >nearest(vector<vector<int> >grid)
	{
        vector<vector<int> > ans(grid.size());
        queue<pair<int,int> > q;
        for(int i=0;i<grid.size();i++){
            vector<int> temp(grid[0].size());
            ans[i]=temp;
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==1){
                    ans[i][j]=0;
                    q.push(make_pair(i,j));
                }
                else{
                    ans[i][j]=INT_MAX;
                }
            }
        }
        while(!q.empty()){
           int i=q.front().first,j=q.front().second;
           if(check(ans,i+1,j) && ans[i][j]+1<ans[i+1][j]){
               ans[i+1][j]=ans[i][j]+1;
               q.push(make_pair(i+1,j));
           }
           if(check(ans,i-1,j) && ans[i][j]+1<ans[i-1][j]){
               ans[i-1][j]=ans[i][j]+1;
               q.push(make_pair(i-1,j));
           }
           if(check(ans,i,j+1) && ans[i][j]+1<ans[i][j+1]){
               ans[i][j+1]=ans[i][j]+1;
               q.push(make_pair(i,j+1));
           }
           if(check(ans,i,j-1) && ans[i][j]+1<ans[i][j-1]){
               ans[i][j-1]=ans[i][j]+1;
               q.push(make_pair(i,j-1));
           }
           q.pop();
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