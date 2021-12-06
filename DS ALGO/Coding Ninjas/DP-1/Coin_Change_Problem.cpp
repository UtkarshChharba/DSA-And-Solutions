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


int recursion(vi v,int total,int index=0){
    if(total<0){
        return 0;
    }
    if(total==0){
        return 1;
    }
    if(index==v.size()){
        return 0;
    }
    int first=recursion(v,total-v[index],index);
    int second=recursion(v,total,index+1);
    return second+first;
}
int recusrion_memorization(vi v,int total,int**output,int index=0){
    if(total<0){
        return 0;
    }
    if(total==0){
        return 1;
    }
    if(index==v.size()){
        return 0;
    }
    if(output[total][index]!=-1){
        return output[total][index];
    }
    int first=recusrion_memorization(v,total-v[index],output,index);
    int second=recusrion_memorization(v,total,output,index+1);
    output[total][index]=first+second;
    return output[total][index];
}
//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
vi v(n);
loop(i,0,n){
    cin>>v[i];
}
int total;cin>>total;
//cout<<recursion(v,total)<<endl;
int**output=new int*[total+1];
loop(i,0,total+1){
    int*array=new int[v.size()];
    loop(j,0,v.size()){
        array[j]=-1;
    }
    output[i]=array;   
}
cout<<recusrion_memorization(v,total,output)<<endl;;
return 0;
}
//.............................................................................................//
/*
IN THIS QUESTIONS THE APPROACHES ARE AS FOLLOWS 
RECURSION:-
        SABSE PEHLE HUME JITNI BAAR PEHLA COIN LE SKTE THE LE LIYA 
        PHIR JB WOH COIN KAAM KA NHI RHA THEN WE WENT TO THE NEXT CASE 
        AND TRIED THE NEXT CASE
        SO BASE CAN BE 3 TYPES:-
            TOTAL WOH ZERO HOGAYA TOH EK PROBABLE CASE RETURN 1
            AGAR TOTAL NEGATIVE TOH YEH EK PROBABLE CASE NHI HAI RETURN 0
            AGAR INDEX KHATAM JAHA TK JAA SKTE THE TOH RETURN 0
        SO HUM ACTUALLY EK COIN KO MAX USKE KRKE AAGE CHAL RHE 


MEMORIZATION_RECUSRION:-
    WE ARE MAKING A 2D ARRAY JISME EK MEIN ROWS =TOTAL AND COLOUMS=INDEX
    OUTPUT[TOTAL][INDEX] KA MATLAB JB SUM HAI ITNA AND INDEX THAT CAN BE IS ATLEAST THIS
    BASE CASES WHI RAHENGE
    AND HAR CASE KE BAAD WE ARE UPDATING OUTPUT[TOTAL][INDEX]
      */