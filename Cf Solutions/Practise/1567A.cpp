#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=b;i>=a;i--)
#define mod 1000000007
#define endl '\n'
#define pii pair<int, int>
#define mii map<int, int>
#define vi vector<int>
#define And &&
#define Or ||
#define float double
#define pb push_back
#define mp make_pair
#include <map>
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


bool isPrime(int n){
if(n==1) return false;
if(n==2) return true;
for(int i=2;i*i<=n;i++){
if(n%i==0)return false;
}
return true;
}





int main(){
ll t;
cin>>t;
while(t--){
    int n;
    cin>>n;
    string a;
    cin>>a;
    vector<char> v;
    loop(i,0,n){
        if(a[i]=='L'){
            v.pb('L');
        }
        else if(a[i]=='R'){
            v.pb('R');
        }
        else if(a[i]=='U'){
            v.pb('D');
        }
        else{v.pb('U');}

    }
    loop(i,0,n){
        cout<<v[i];
    }
    cout<<endl;
    
}
return 0;
}
