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



int recursion(int**input,int endi,int endj,int starti=0,int startj=0,int power=0){
       cout<<power<<endl;
    if(starti==endi-1 And startj==endj-1){
       return 0;
    }
    if(starti>endi-1 Or startj>endj-1){
        return INT_MIN;
    }
   int down=recursion(input,endi,endj,starti+1,startj,power);
   int right=recursion(input,endi,endj,starti,startj+1,power);
   power-=max(down,right);
   power-=input[starti][startj];
   return power;

}

//..................................................................//
int32_t main(){
FIO
int a,b;cin>>a>>b;
int**input=new int*[a];
loop(i,0,a){
    int*array=new int[b];
    input[i]=array;
    loop(j,0,b){
        cin>>input[i][j];
    }
}

cout<<recursion(input,a-1,b-1)<<endl;;

return 0;
}
//....................................................................//