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

void helper(vector<vector<int> >& image, int sr, int sc, int color,int src_color){
    if(sr>image.size()||sc>image[0].size()||sr<0||sc<0||image[sr][sc]!=src_color){
        return;
    }
    image[sr][sc]=color;
    helper(image,sr+1,sc,color,src_color);
    helper(image,sr,sc+1,color,src_color);
    helper(image,sr-1,sc,color,src_color);
    helper(image,sr,sc-1,color,src_color);
    return;

}
vector<vector<int> > floodFill(vector<vector<int> >& image, int sr, int sc, int color) {
        vector<vector<int> > ans(image.size());
        for(int i=0;i<ans.size();i++){
            vector<int> temp(image[0].size());
            ans[i]=temp;
        }
        helper(image,sr,sc,color,image[sr][sc]);
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[0].size();j++){
                ans[i][j]=image[i][j];
            }
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