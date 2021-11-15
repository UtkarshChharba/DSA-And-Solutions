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

class custom_class{
    int sz,cap;
    int *a;
public:
    custom_class(){
        a=NULL;
        int sz=0,cap=0;
    }
    void push_back(int x){
        if(sz+1<=cap){
            a[sz]=x;
            sz++;
        }
        else{
            int*b;
            if(cap){
                b=new int [cap*2];
                cap=2*cap;
            }
            else{
                b=new int [1];
                cap=1;
            }
            loop(i,0,sz){
                b[i]=a[i];
            }
            delete[] a;
            a=b;
            a[sz]=x;
            sz++;

        }
        
    }
    int size(){
        return sz;
    }
    void pop_back(){
        sz--;
    }
    int capacity(){
        return cap;
    }
    int operator[](int i){
        if(i>0 And i<sz){
        return a[i];
        }
        else{
            return -1;
        }
    }
};


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

vi v;
v.pb(4);
v.pb(4);
v.pb(4);
v.pb(4);
v.pb(4);
v.pb(4);
vi v2;
cout<<;
v2=v;
v2[2]=7;
//cout<<v.size()<<" "<<v.capacity();
//cout<<v2[2]<<" "<<v[2];
return 0;
}
//.............................................................................................//