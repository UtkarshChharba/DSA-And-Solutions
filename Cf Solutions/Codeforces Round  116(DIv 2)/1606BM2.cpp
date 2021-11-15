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
int raise(int a){
    int temp=1;
    loop(i,0,a){
        temp*=10;
    }
    return temp;
}
//.............................................................................................//
int32_t main(){
FIO
int t;
cin>>t;
while(t--){
    int n,k;
    cin>>n>>k;
    vi v(n);
    loop(i,0,n){
        cin>>v[i];
    }
    k++;
    int total=0;
    loop(i,0,n){
        int temp=raise(v[i])*k;
        if(i<n-1){
            int plus=raise(v[i+1])-raise(v[i]);
            int notes=plus/raise(v[i]);
            notes=min(k,notes);
            total+=notes*raise(v[i]);
            k-=notes;

        }
        else{
            total+=temp;
            k=0;
        }
        if(!k){
            break;
        }
    }
    cout<<total<<endl;

}

return 0;
}
//.............................................................................................//