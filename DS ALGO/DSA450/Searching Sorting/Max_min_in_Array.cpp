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

struct Pair
{
    int min;
    int max;
};
struct Pair getMinMax22(int arr[], int low,
                                 int high)
{
    struct Pair minmax, mml, mmr;    
    int mid;
     
    // If there is only one element
    if (low == high)
    {
        minmax.max = arr[low];
        minmax.min = arr[low];    
        return minmax;
    }
     

     
    // If there are more than 2 elements
    mid = (low + high) / 2;
    mml = getMinMax22(arr, low, mid);
    mmr = getMinMax22(arr, mid + 1, high);
     
    // Compare minimums of two parts
    if (mml.min < mmr.min)
        minmax.min = mml.min;
    else
        minmax.min = mmr.min;    
     
    // Compare maximums of two parts
    if (mml.max > mmr.max)
        minmax.max = mml.max;
    else
        minmax.max = mmr.max;    
     
    return minmax;
}

pair<int,int> getMinMax(int arr[], int n)
{
    int min_ans=INT_MAX,max_ans=INT_MIN;
    for(int i=0;i<n;i++){
        min_ans=min(arr[i],min_ans);
        max_ans=max(arr[i],max_ans);
    }
    return make_pair(min_ans,max_ans);
}
// Method-2
pair<int,int> getMinMax2(int arr[], int low,int high)
{
    pair<int,int> minmax,mml,mmr;
    int mid=low+(high-low)/2;
    if(low==high){
        return make_pair(arr[high],arr[high]);
    }
    mml=getMinMax2(arr,low,mid);
    mmr=getMinMax2(arr,mid+1,high);
    if(mml.first>mmr.first){
        minmax.first=mml.first;
    }
    else{
        minmax.first=mmr.first;
    }
    if(mml.second>mmr.second){
        minmax.second=mmr.second;
    }
    else{
        minmax.second=mml.second;
    }
    return minmax;
}
//.............................................................................................//
int32_t main(){
FIO
int arr[] = { 1000, 11, 445,
                  1, 330, 3000 };
    int arr_size = 6;
    pair<int,int>ans;
    ans=getMinMax(arr,arr_size);
    cout<<ans.first<<" "<<ans.second<<endl;;
    ans=getMinMax2(arr,0,arr_size-1);
    cout<<ans.first<<" "<<ans.second<<endl;
    struct Pair minmax = getMinMax22(arr, 0,
                             arr_size - 1);
    cout << "Minimum element is "
         << minmax.min << endl;
    cout << "Maximum element is "
         << minmax.max;
          
return 0;
}
//.............................................................................................//