#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
#define pb push_back
#define mp make_pair
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define pi 3.14
#define min3(a,b,c) min(a,min(b,c))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i<b;i--)
#define ll long long
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define do double
bool isPrime(int n){
if(n==1) return false;
if(n==2) return true;
for(int i=2;i*i<=n;i++){
if(n%i==0)return false;
}
return true;
}
 
int main(){
    int c=0,i=1;
    vector<int> v;
    while(c<1000){
        if(i%3!=0 && i%10!=3){
            v.push_back(i);
            c++;
        }
        i++;
    }
 
int t=1;
cin>>t;
while(t--){
    int k;
    cin>>k;
    cout<<v[k-1]<<"\n";
 
}
}