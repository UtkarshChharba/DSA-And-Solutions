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

vector<vector<int> > v(10);
vector<vector<long long> > dp(25,vector<int>(10,-1));

long long helper(int n,int num){
    if(n<=0){
        return 0;
    }
    if(dp[n][num]!=-1){
        return dp[n][num];
    }
    for(int i=0;i<v[num].size();i++){
        dp[n][num]+=helper(n-1,v[num][i]);
    }
    return dp[n][num];

}
long long getCount(int N)
	{   
        int ans=0;
        v[0].push_back(5);
        v[1].push_back(2);
        v[1].push_back(4);
        v[5].push_back(4);
        v[5].push_back(6);
        v[5].push_back(2);
        v[5].push_back(8);
        v[6].push_back(5);
        v[6].push_back(4);
        v[6].push_back(9);
        v[4].push_back(5);
        v[4].push_back(1);
        v[4].push_back(7);
        v[2].push_back(3);
        v[2].push_back(1);
        v[2].push_back(5);
        v[3].push_back(2);
        v[3].push_back(6);
        v[7].push_back(8);
        v[7].push_back(4);
        v[9].push_back(6);
        v[9].push_back(8);
        v[8].push_back(5);
        v[8].push_back(9);
        v[8].push_back(7);
        for(int i=0;i<10;i++){
            ans+=helper(N-1,i);
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