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



int max_loot(vi v,int i=0){
    if(i>v.size()-1){
        return 0;
    }
    int loot=0;
    loot=max(max_loot(v,i+2)+v[i],max_loot(v,i+1));
    return loot;
}



//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
vi v(n+1);
loop(i,1,n+1){
    cin>>v[i];
}
if(n==1){
    cout<<v[1]<<endl;
}
else{
    int*dp=new int[n+1];
    dp[0]=0;
    dp[1]=v[1];
    dp[2]=v[2];
    loop(i,3,n+1){
        dp[i]=max(dp[i-2]+v[i],dp[i-1]);
    }
    cout<<dp[n]<<endl;
}

return 0;
}
//.............................................................................................//

/*
WE ARE MAINTAING A DP ARRAY 
AGAR HUM LOOP LGA RHE HAI TOH WE CAN SAY YAHA TOH WOH PEHLE WALE GHAR SE CHORI KERKE AYE
YA WOH IS GHAR SE CHORI KRKE AND AB WALE GHAR SE JO CHORI KI WOH RAKHE
SO AGAR SUPPOSE KARO 6=[10,2,30,20,3,50]
DP ARRAY IS =[10,2] ITNA TOH FIX HAI
DP[I] KO SIRF DP[I-2]+V[I] KA OPTION HAI
YA TOH WOH IS GHAR MEIN CHORI NA KARE AND DP[I-1] MEIN KHUSH RHE 
DP[I-2] MEIN HAMESH USKI MAX CHORI HOGI


RECURSION MEIN OVERALL LOGIC SAME HAI
                        */