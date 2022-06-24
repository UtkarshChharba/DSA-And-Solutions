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
#define fps(x,y)                        fixed<<setprecision(y)<<x;
int *findTwoElement(int *arr, int n) {
        for(int i=0;i<n;i++){
            arr[abs(arr[i])-1]=-arr[abs(arr[i])-1];
        }
        int*pointer=new int(2);
        int index1=-1,index2=-1;
        for(int i=0;i<n&& arr[i]>0;i++){
            if(index1==-1){
                index1=i+1;
            }
            else{
                index2=i+1;
            }
        }
        int cnt1=0,cnt2=0;
        for(int i=0;i<n&& arr[i]>0;i++){
            if(arr[i]==index1){
                cnt1++;
            }
            if(arr[i]==index2){
                cnt2++;
            }
        }
        if(cnt1>cnt2){
            pointer[0]=index1;
            pointer[1]=index2;
        }
        else{
            pointer[0]=index2;
            pointer[1]=index1;
        }
        

    }




//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//