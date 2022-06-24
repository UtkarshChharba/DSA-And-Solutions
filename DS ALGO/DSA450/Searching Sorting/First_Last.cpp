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




class Solution{
    public:
    int countb(int x){
        int c=0;
        while(x){
            if(x&1)c++;
            x=x>>1;
        }
        return c;
    }
    bool comp( int a, int b){
        return(countb(a)>countb(b));
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // Your code goes here
        sort(arr,arr+n,comp);
        
    }
};

vector<int> find(int arr[], int n , int x )
{   
    int start=-1,end=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==x){
            if(start==-1){
                start=i;
            }
            end=i;
        }
    } 
    vector<int> ans;
    ans.push_back(start);
    ans.push_back(end);
    return ans;
}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//