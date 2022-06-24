#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
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



    string FirstNonRepeating(string A){
		    queue<char> q;
            unordered_map<char,int> mp;
            char last=A[0];
            for(int i=1;i<A.length();i++){
                if(A[i]==last){
                    mp[A[i]]++;
                    while(mp[q.front()]>1){
                        q.pop();
                    }
                    if(q.empty()){
                        last='#';
                    }
                    else{
                        last=q.front();
                    }
                }
                else{
                    mp[A[i]]++;
                    if(mp[A[i]]==1){
                        if(last=='#'){
                            last=A[i];
                                 }
                        else{
                            q.push(A[i]);
                        }
                    }
                }
                A[i]=last;
            }
            return A;
		}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//