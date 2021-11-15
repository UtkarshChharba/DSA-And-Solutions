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
#define in insert
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);






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
    pair<ll,ll> p1,p2,p3;
    cin>>p1.ff>>p1.ss;
    cin>>p2.ff>>p2.ss;
    cin>>p3.ff>>p3.ss;    

if(p1.ff==p2.ff And p2.ff==p3.ff And (abs(p2.ss-p1.ss)==abs(p1.ss-p3.ss)+abs(p2.ss-p3.ss))){

    cout<<abs(p1.ss-p2.ss)+2<<endl;

}
else if(p1.ss==p2.ss And p2.ss==p3.ss And (abs(p2.ff-p1.ff)==abs(p1.ff-p3.ff)+abs(p2.ff-p3.ff))){
    cout<<abs(p1.ff-p2.ff)+2<<endl;
}
else{
    cout<<abs(p1.ss-p2.ss)+abs(p1.ff-p2.ff)<<endl;
}
}
return 0;
}
