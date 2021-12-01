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

int recursion(int h){
    if(h<=1){
        return 1;
    }
    int x=recursion(h-1)%mod;
    int y=recursion(h-2)%mod;
    int temp1=(int)(((long)x*x)%mod);
    /*
    ISKA MATLAB X KO HUM LONG MEIN SAVE KRENGE
    AND THEN USSE X KE SAATH MULTIPLY KRKE EK LONG BUFFER MEIN SAVE KRENGE
    PHIR US VALUE KA MOD LEKE USE EK INT BUFFER MEIN SAVE KRDO
    */
    int temp2=2*(int)((long)x*y%mod);
    return (temp1+temp2)%mod;
    
}
int memorisation_helper(int h,int ans[]){
    if(h<=1){
        return 1;
    }
        int x=recursion(h-1)%mod;
    int y=recursion(h-2)%mod;
    int temp1=(int)(((long)x*x)%mod);
    int temp2=2*(int)((long)x*y%mod);
    ans[h]=(temp1+temp2)%mod;
    return ans[h];
}
int memorisation(int h){
    int *ans=new int[h+1];
    loop(i,0,h+1){
        ans[i]=-1;
    }
    return memorisation_helper(h,ans);
}
//.............................................................................................//
int32_t main(){
FIO
int h;cin>>h;
cout<<recursion(h)<<endl;
cout<<memorisation(h)<<endl;
int*dp=new int[h+1];
dp[0]=1;dp[1]=1;
loop(i,2,h+1){
    dp[i]=(int)(((((long)dp[i-1]*dp[i-1])%mod)+(((long)(2*dp[i-1]*dp[i-2])%mod)))%mod);
}
cout<<dp[h]<<endl;
return 0;
}
//.............................................................................................//
/*
BASIC APPROACH:-
    AGAR EK BALANCED BINARY TREE HAI TOH THE CONDTION OF LEFT AND RIGHT ABS(1)
    SO THERE COULD BE 3 CASES 
    L            R
    H-1          H-1
    H-2          H-1
    H-1          H-2
    
SO WE BASE CASE H=1,0 WHICH WILL HAVE 1 AS TOTAL CASES
SO WE CAN FIND TOTAL CASES FOR L AND RIGHT WHICH WILL MAKE A BALANCED BINARY TREE
SO IF LEFT CAN BALANCED IN 3 WAYS AND R CAN MAKE IN 2 WAYS THEN TOTAL A TREE CAN MAKE IN 6
THEN RECURSIVELY FIND FOR H-1 AND H-2 THEN RETURN THE TOTAL NUMBER OF CASES
*/