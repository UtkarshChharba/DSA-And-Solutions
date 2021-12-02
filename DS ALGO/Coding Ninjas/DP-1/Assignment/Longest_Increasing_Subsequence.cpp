#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define tl(v,size) for(int i=0;i<size;i++){cout<<v[i]<<' ';} cout<<endl
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

int recursion(vi v,int i=1){
    if(i>v.size()){
        return 0;
    }
    int freq=1;
    int maxo=v[i];
    loop(j,i+1,v.size()){
        if(v[j]>maxo){
            maxo=v[j];
            freq++;
        }
    }
    freq=max(recursion(v,i+1),freq);
    return freq;
}
//2 4 5 1 2 7
//........................................................................//
int32_t main(){
FIO
int n;cin>>n;
vi v(n+1);
loop(i,1,n+1){
    cin>>v[i];
}
int*dp=new int[n+1];
dp[1]=1;
int count=1;
loop(i,2,n+1){
    dp[i]=1;
    int count=1;
    loopb(j,1,i-1){
       if(v[i]<=v[j]){
           continue;
       }
       int ans=1+dp[j];
       if(dp[i]<ans){
           dp[i]=ans;
       }
    }
}
loop(i,2,n+1){
    dp[i]=max(dp[i],dp[i-1]);
}
cout<<dp[n]<<endl;
cout<<recursion(v)<<endl;
return 0;
}
//..........................................................................//
/*
BASIC APPROACH IS :-
RECURSION:-
    U FIND THE LONGEST SUBARRAY FOR V[0] AND LET RECUSRION FIND FOR OTHERS
    FOR V[0] U JUST NEED TO MAINTAIN A MAX AND CHANGE ITS VALUE EVERYTIME UR MAXIMUM CHANGE
    NOW ANSWER WOULD BE MAX OF UR ANSWER AND ANSWER FROM RECUSRION*

DP:-
    U NEED TO MAINTAIN A ARRAY OF DP
    WHEN WE ARE ON A ELEMENT I THEN THE LONGEST SUB ARRAY WILL BE FORMED BY DECREASING ORDER BEHIND IT
    SO MAINTAIN A BACKWARD LOOP AND IF V[I]>V[J] WHERE J IS THE BACKWARD LOOP FOR EACH I
    THEN IT IS FOR SURE THAT DP[J]+1 SHOULD ALSO FORM A INCREASING SEQUENCE
    AND THERE COULD MANY VALUES OF DP[J] SO WE NEED TO CHOOSE THE MAX OUT OF THOSE
    AND AT THE END WE NEED TO OUTPUT THE LARGEST ARRAY SO MAXIMUM VALUE OF DP*/
    