#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=b;i>=a;i--)
#define mod 1000000007
#define float double
#define pb push_back
#define And &&
#define Or ||
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
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
int t;
cin>>t;
while(t--){
    ll l,r,a,d=0;
    cin>>l>>r;
    a=l;
    while(a<=r){
        if(r%a!=0){
        if(d<r%a){d=r%a;}
        }
        a++;
    }
    cout<<d<<"\n";


    
}
return 0;
}
