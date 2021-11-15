#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=b;i>=a;i--)
#define mod 1000000007
#define endl '\n'
#define pii pair<int, int>
#define mii map<int, int>
#define And &&
#define vi vector<int>
#define Or ||
#define float double
#define pb push_back
#define mp make_pair
#include <map>
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define in insert
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int prec(char s){
    if(s=='^'){
        return 3;
    }
    else if(s=='*' Or s=='/'){
        return 2;
    }
    else if(s=='-' Or s=='+'){
        return 1;
    }
    else{
        return -1;

    }
}
void inflixtopost(string s){
    stack<char> st;
    string final;
    loop(i,0,s.size()){
        if((s[i]>='A' And s[i]<='Z') Or (s[i]>='a' And s[i]<='z')){
            final+=s[i];
        }
        else if(s[i]=='('){
            st.push('(');
        }
        else if(s[i]==')'){
            while(st.top()!='('){
                final+=st.top();
                st.pop();
            }
            st.pop();
        }
        else{
            while(!st.empty() And (prec(st.top())>=prec(s[i]))){
                final+=st.top();
                st.pop();
            }
            st.push(s[i]);
        }
    }
    while(!st.empty()){
        final+=st.top();
        st.pop();
    }
    cout<<final<<endl;
}
//.............................................................................................//
int32_t main(){
int t;
cin>>t;
while(t--){
string s;
cin>>s;
inflixtopost(s);
}
return 0;
}
//.............................................................................................//