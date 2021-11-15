#include <iostream>
#include <vector>
#include <map>
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
ll t;
cin>>t;
while(t--){
    int n,x;
    map<int,int> m;
    cin>>n>>x;
    vector<ll> v;
    loop(i,0,n){
        int a;
        cin>>a;
        v.pb(a);
        m[v[i]]=0;
    }
    loop(i,0,n){
        m[v[i]]++;
        m[v[i]^x]++;
    }
    int max=0;
    m[max]=0;
    loop(i,0,n){
        if(m[max]<m[v[i]]){
            max=v[i];
        }
    }
    int count1=0,count2=0;
    loop(i,0,n){
        if(max==v[i]){
            count1++;
        }
        else if((max^x)==v[i]){
            count2++;
        }
    }
    if(count1<=count2){cout<<m[max]<<" "<<count1<<"\n";}
    else{cout<<m[max]<<" "<<count2<<"\n";}


}
return 0;
}
