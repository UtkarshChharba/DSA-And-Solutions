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
int pow2(int n){
    int ans=1;
    int start=2;
    while(n){
        if(n%2){
            ans=ans*start;
            n--;
        }
        else{
            start=start*start;
            n=n/2;
        }
    }
    return ans;
}





int main(){
ll t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    int cnt=0;
    while(n!=0){
        n=n/2;
        cnt++;
    }
    cout<<(1<<(cnt-1))-1<<endl;
}
return 0;
}
