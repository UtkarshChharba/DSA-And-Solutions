#include <iostream>
#include <vector>
using namespace std;
#define ll long long
#define pi (3.141592653589)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=b;i>=a;i--)
#define mod 1000000007
#define And &&
#define Or ||
#define float double
#define pb push_back
#define mp make_pair
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
int t;
cin>>t;
while(t--){
    ll n;
    cin>>n;
    vector<int> v;
    loop(i,0,n){
        int a;
        cin>>a;
        v.pb(a);
    }
    int ev=0,od=0;
    loop(i,0,n){
        if(v[i]%2==0){
            
            ev++;
        }
        else{od++;}
    }
    if(n%2){
    if(ev>=n/2+1){cout<<n/2+1+od<<"\n";}
    else if(od>=n/2){cout<<n/2+ev<<"\n";}
    }
    else{
        if(ev>=n/2){cout<<n/2+od<<"\n";}
    else if(od>=n/2){cout<<n/2+ev<<"\n";}
    }


}
return 0;
}
