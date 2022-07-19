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
#include <unordered_map>

int parenth(string &s){
    stack <char> st;
    for(int i=0;i<s.size();i++){
        if(s[i]=='('){
            st.push(s[i]);
        }
        else if(s[i]==')'){
            if(st.size()&&st.top()=='('){
                st.pop();
            }
            else{
                st.push(s[i]);
            }
        }
    }
    return st.size();

}
vector<string> ans;
unordered_map<string,int> mp;
void helper(string s,int x){
    if(mp[s]){
        return;
    }
    else{
        mp[s]++;
    }
    if(x<0){
        return;
    }
    if(!x){
        if(!parenth(s)){
            ans.push_back(s);
        }
        return;
    }

    for(int i=1;i<s.size();i++){
        string left=s.substr(0,i);
        string right=s.substr(i+1);
        helper(left+right,x-1);
    }
    return;
}
vector<string> removeInvalidParentheses(string s) {
    ans.clear();
    helper(s,parenth(s));
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