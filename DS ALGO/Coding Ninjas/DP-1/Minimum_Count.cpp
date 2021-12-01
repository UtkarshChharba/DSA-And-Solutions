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
#define w(t) int t;cin>>t;while(t--)
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

int recursion(int n){
    if(n<0){
        return INT_MAX;
    }
    if(n<=1){
        return n;
    }
    int ans=INT_MAX;
    int a=1;
    int b=n-1;
    while(b>=0){
        ans=min(ans,recursion(b));
        a++;
        b=n-a*a;
    }
    return ans+1;

}
int recursion_memorization_helper(int n,int ans[]){
    if(n<0){
        return INT_MAX;
    }
    if(n<=1){return n;}
    if(ans[n]==-1){
        int a=1;
        int b=n-1;
        ans[n]=INT_MAX;
        while(b>=0){
            ans[n]=min(ans[n],recursion_memorization_helper(b,ans));
            b=n-a*a;
            a++;
        }
        ans[n]+=1;
    }
    return ans[n];
}



int recursion_memorization(int n){
    int *ans=new int[n+1];
    loop(i,0,n+1){
        ans[i]=-1;
    }
    int a=recursion_memorization_helper(n,ans);
    return a;

}
//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
cout<<recursion(n)<<endl;
cout<<recursion_memorization(n)<<endl;
int *ans=new int[n+1];
ans[0]=0;
ans[1]=1;
loop(i,2,n+1){
    int value=INT_MAX;
    int a=1;
    int b=i-a;
    while(b>=0){
        value=min(value,ans[b]);
        a++;
        b=i-a*a;
    }
    ans[i]=value+1;
}
cout<<ans[n]<<endl;
return 0;
}
//.............................................................................................//