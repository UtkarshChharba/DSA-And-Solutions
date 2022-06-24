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
    while(j>i){
        if(a[i]!=a[j]){
            return 0;
        }
        j--;
        i++;
    }
    return 1;
}
string longest_palindrome(string a,int i,int j){
    if(i>j){
        return 0;
    }
    if(i==j){
        return to_string(a[i]);
    }
    int max_ans=0;
    if(a[i]==a[j] && ispalindrome(a,i,j)){
        return a.substr(i,j+1);
    }
    string a=longest_palindrome();
    string b;
        return 
}

//.............................................................................................//
int32_t main(){
FIO
string a;cin>>a;
cout<<to_string("a")<<endl;
return 0;
}
//.............................................................................................//