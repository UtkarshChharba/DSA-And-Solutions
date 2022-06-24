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

bool check(vector<vector<int> >& grid ,int i,int j){
    if(i>=0&&i<grid.size()&& j>=0 && j<grid[0].size()&& grid[i][j]==1){
        return true;
    }
    return false;
}

int orangesRotting(vector<vector<int> >& grid) {
        queue<pair<int,int> > q;
        int total=0;
        for(int i=0;i<grid.size();i++){
            for(int j=0;j<grid[0].size();j++){
                if(grid[i][j]==2){
                    q.push(make_pair(i,j));
                }
                if(grid[i][j]!=0){
                    total++;
                }

            }
        }
        int count=0,timer=0;
        while(!q.empty()){
            count+=q.size();
            int k=q.size();
            while(k--){
                int i=q.front().first,j=q.front().second;
                if(check(grid,i+1,j)){
                    grid[i+1][j]=2;
                    q.push(make_pair(i+1,j));
                }
                if(check(grid,i-1,j)){
                    grid[i-1][j]=2;
                    q.push(make_pair(i-1,j));
                }
                if(check(grid,i,j+1)){
                    grid[i][j+1]=2;
                    q.push(make_pair(i,j+1));
                }
                if(check(grid,i,j-1)){
                    grid[i][j-1]=2;
                    q.push(make_pair(i,j-1));
                }
                q.pop();
            }
            if(!q.empty()){
                timer++;
            }
        }
        return count<total?-1:timer;
    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//