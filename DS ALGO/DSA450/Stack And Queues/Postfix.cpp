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


int precedence(char a){
    if(a=='*' || a=='/'){
        return 2;
    }
    if(a=='+' || a=='-'){
        return 1;
    }
}

string postfix(string e){
    stack<char> s;
    string ans="";
    for(int i=0;i<e.size();i++){
        if(e[i]=='*' || e[i]=='^' ||e[i]=='/' ||e[i]=='+' ||e[i]=='-'){
            if(s.empty()){
                s.push(e[i]);
            }
            else if(precedence(e[i])>=precedence(s.top()) ){
                    ans+=s.top();
                    s.pop();
                }
            s.push(e[i]);
            }
        else{
            ans+=e[i];
        }
        }
        return ans;
    }

//.............................................................................................//
int32_t main(){
FIO
string s;cin>>s;
cout<<postfix(s)<<endl;
return 0;
}
//.............................................................................................//