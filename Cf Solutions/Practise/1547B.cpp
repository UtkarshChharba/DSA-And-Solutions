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
    string s;
    cin>>s;
    int a=s.size();
    int posa=a+1;
    int d=1;
    int k=1;
    loop(i,0,a){
        if(s[i]=='a'){
            posa=i;
            break;
        }
        else if(i==a-1 And s[i]!='a'){
            cout<<"NO"<<endl;
            d=0;
            k=0;

        }
    }
    //cout<<posa<<endl;
    if(k){
    int right=posa;
    loop(i,1,a){
        if(posa>0 And right<a-1){
            if(s[posa-1]==char('a'+i)){
                posa--;
            }
            else if(s[right+1]==char('a'+i)){
                right++;
            }
            else{
                cout<<"NO"<<endl;
                d=0;
                break;
            }
        }
        else if(posa>0){
            if(s[posa-1]==char('a'+i)){
                posa--;
            }
            else{
                cout<<"NO"<<endl;
                d=0;
                break;
            }
        }
        else if(right<a-1){
            if(s[right+1]==char('a'+i)){
                right++;
            }
            else{
                cout<<"NO"<<endl;
                d=0;
                break;
            }

        }

    }
    }
    if(d){
        cout<<"YES"<<endl;
    }

}

return 0;
}
