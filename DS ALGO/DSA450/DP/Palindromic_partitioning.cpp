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

vector<vector<int> > dp(501,vector<int>(501,-1));
int palindromicPartition(string s)
    {
        vector<vector<int> > check(s.size()+1,vector<int>(s.size()+1,0));
        for(int i=0;i<s.size()+1;i++){
            for(int j=0;j<s.size()+1;j++){
                if(!i&&!j){
                    check[i][j]=1;
                }
                else if(!i||!j){
                    check[i][j]=0;
                }
                else if(s[i-1]==s[j-1]){
                    check[i][j]=check[i-1][j-1];
                }
                else{
                    check[i][j]=0;
                }
            }
        }
        return helper(s,0,s.size()-1,check);

    }
int helper(string s,int i,int j,vector<vector<int> > &check){
    if(i>=j||check[i][j]){
        return 0;
    }
    int ans=INT_MAX;
    for(int k=i;k<=j-1;k++){
        int temp=1+helper(s,i,k,check)+helper(s,k+1,j,check);
        ans=min(temp,ans);
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