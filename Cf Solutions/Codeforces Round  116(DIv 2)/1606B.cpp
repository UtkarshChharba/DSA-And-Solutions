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
float log_a_to_base_b(int a, int b)
{
    return log(a) / (log(b)*1.0);
}
//.............................................................................................//
int32_t main(){
FIO
int t;
cin>>t;
while(t--){
int n,k;
cin>>n>>k;
int steps;
float steps_frac=log_a_to_base_b(k,2);
if(steps_frac-(int)steps_frac){
    steps_frac++;
}
steps=steps_frac;
//cout<<steps<<endl;
int installed_left=n-pow2(steps);
float step2_left=installed_left/(k*1.0);
if(step2_left-(int)step2_left){
    steps+=step2_left+1;
}
else{
    steps+=step2_left;
}
cout<<steps<<endl;
}
return 0;
}
//.............................................................................................//