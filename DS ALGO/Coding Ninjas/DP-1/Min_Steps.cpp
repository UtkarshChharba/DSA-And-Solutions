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

int dp_solution(int n){
    int *ans=new int[n+1];
    ans[0]=0;
    ans[1]=0;
    loop(i,2,n+1){
        int a=1+ans[i-1];
        if(i%2==0){
            a=min(ans[i/2]+1,a);
        }
        if(i%3==0){
            a=min(a,ans[i/3]+1);
        }
        ans[i]=a;
    }
    return ans[n];
}
int search_brute_force(int n){
    if(n==1){
        return 0;
    }
    if(n%2==0 And n%3==0){
        return 1+min3(search_brute_force(n-1),search_brute_force(n/2),search_brute_force(n/3));
    }
    if(n%2==0){
        return 1+min(search_brute_force(n-1),search_brute_force(n/2));
    }
    if(n%3==0){
        return 1+min(search_brute_force(n-1),search_brute_force(n/3));
    }
    return 1+search_brute_force(n-1);
    
}
int search_memorization_helper(int n,int ans[]){
    if(ans[n]!=-1){
        return ans[n];
    }
    if(n==1){
        return 0;
    }
    if(!(n%2) And !(n%3)){
        ans[n]=1+min3(search_memorization_helper(n-1,ans),search_memorization_helper(n/2,ans),search_memorization_helper(n/3,ans));
    }
    else if(!(n%2)){
        ans[n]=1+min(search_memorization_helper(n-1,ans),search_memorization_helper(n/2,ans));
    }
    else if(!(n%3)){
        ans[n]=1+min(search_memorization_helper(n-1,ans),search_memorization_helper(n/3,ans));
    }
    else{
    ans[n]=1+search_memorization_helper(n-1,ans);
    }
    return ans[n];
}
int search_memorization(int n){
    int *ans=new int[n+1];
    loop(i,0,n+1){
        ans[i]=-1;
    }
    return search_memorization_helper(n,ans);
}

//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
cout<<search_brute_force(n)<<endl;
cout<<search_memorization(n)<<endl;
cout<<dp_solution(n)<<endl;
return 0;
}
//.............................................................................................//
/*
BRUTE FORCE:-
    SIMPLY GIVING 3 OPTIONS LIKE I%2 I%3 AND I-1
    SO WE ARE ACTUALLY JUST USING RECURSION TO SOLVE THE PROBLEM
MEMORIZATION:-
    WE ARE USING MEMORIZATION FOR THE NUMBERS WE HAVE ALREADY FOUND THE RESULT USING RECUSRION

DP:-
    WE ARE USING DP AS THE ANSWER WOULD ONLY BE FROM PREVIOUS CASES 
    SO USING I-1 I/2 AND I/3 AS PREVIOUS CASES TILL INDEX N

*/