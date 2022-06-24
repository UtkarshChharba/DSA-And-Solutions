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


bool ispalindrome(string a,int i,int j){
    while(i<j){
        if(a[i]!=a[j]){
            return 0;
        }
        i++;
        j--;
    }
    return 1;
}
int palindrome_rec(string a,int i,int j){
    if(i>=j || ispalindrome(a,i,j)){
        return 0;
    }
    int min_ans=INT_MAX;
    for(int k=i;k<j;k++){
        min_ans=min(palindrome_rec(a,i,k)+1+palindrome_rec(a,k+1,j),min_ans);
    }
    return min_ans;
}
vector<vector<int> > dp(1001,vector<int>(1001,-1));
int palindrome_memorization(string a,int i,int j){
    if(i>=j || ispalindrome(a,i,j)){
        return 0;
    }
    if(dp[i][j]!=-1){
        return dp[i][j];
    }
    int min_ans=INT_MAX;
    int left=-1,right=-1;
    for(int k=i;k<j;k++){
        if(dp[i][k]!=-1){
            left=dp[i][k];
        }
        else{
            left=palindrome_rec(a,i,k);
        }
        if(dp[k+1][j]!=-1){
            right=dp[k+1][j];
        }
        else{
            right=palindrome_rec(a,k+1,j);
        }
        min_ans=min(palindrome_rec(a,i,k)+1+palindrome_rec(a,k+1,j),min_ans);
    }
    dp[i][j]=min_ans;
    return dp[i][j];
    
}



//.............................................................................................//
int32_t main(){
FIO
string a;cin>>a;
cout<<palindrome_rec(a,0,a.size()-1)<<endl;
return 0;
}
//.............................................................................................//