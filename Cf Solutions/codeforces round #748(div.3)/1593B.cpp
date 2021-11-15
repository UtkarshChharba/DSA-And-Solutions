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
//.............................................................................................//
int32_t main(){
int t;
cin>>t;
while(t--){
int a;
cin>>a;
vi v;
vector<pair<int,int> > v1;
vi v2;
while(a){
    v.pb(a%10);
    a=a/10;
}
reverse(v.begin(), v.end());
if(v.size()==1){
    cout<<1<<endl;
}
else{
loop(i,0,v.size()){
    loop(j,i+1,v.size()){
        if((10*v[i]+v[j])%25==0){
            v1.pb(make_pair(i,j));
        }
    }
}
// loop(i,0,v1.size()){
//     cout<<v1[i].ff<<" "<<v1[i].ss<<endl;
// }
if(v1.size()){
loop(i,0,v1.size()){
    int left=0;
    int right=0;
    loop(j,0,v1[i].ff){
        if(v[j]!=0){
            left++;
        }
    }
    right=v.size()-v1[i].ss-1;
    v2.pb(v1[i].ss-v1[i].ff-1+right);
}
// loop(i,0,v2.size()){
//     cout<<v2[i]<<endl;
// }

cout<<*min_element(v2.begin(),v2.end())<<endl;
}
else{
cout<<v.size()-2<<endl;
}
}
}
return 0;
}
// //.............................................................................................//