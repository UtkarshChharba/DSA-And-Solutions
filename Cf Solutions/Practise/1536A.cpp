#include <bits/stdc++.h>>
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
#define in insert
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





int main(){
ll t;
cin>>t;
while(t--){
    int n;
    int d=1;
    set<int> s;
    loop(i,0,n){
        int a;
        cin>>a;
        s.in(a);
        if(a<0){
            d=1;
        }
    }
    if(d){
        cout<<"NO"<<endl;
    }
    else{
        loop(i,0,n){
            loop(j,i+1,n){
                s.in(abs(s[i]-s[j]));
            }
        }
    }

    


}
return 0;
}
