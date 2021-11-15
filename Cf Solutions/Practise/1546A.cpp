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

    int n;
    cin>>n;
    vector<pair<int,int> > v(n);
    int s1=0,s2=0;
    loop(i,0,n){

        cin>>v[i].ff;
        s1+=v[i].ff;
    }
    loop(i,0,n){
        cin>>v[i].ss;
        s2+=v[i].ss;
    }
    if(s1==s2){
        vector<pair<int,int> > v1(n);
        int cnt=-1;
        loop(i,0,n){
            if(v[i].ff<v[i].ss){
                loop(j,i+1,n){
                    if(v[j].ff>v[j].ss){
                        cnt++;
                        v[i].ff++;
                        v[j].ff--;
                        v1[cnt].ff=i+1;
                        v1[cnt].ss=j+1;
                        break;
                    }
                }
            }
        }
    cout<<cnt+1<<endl;
    loop(i,0,cnt+1){
        cout<<v1[i].ff<<" "<<v1[i].ss<<endl;

    }
    }
    else{
        cout<<-1<<endl;
    }





}
return 0;
}