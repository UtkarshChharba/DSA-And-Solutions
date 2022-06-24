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


int kthElement(int arr1[], int arr2[], int n, int m, int k)
    {
        int start1=0,end1=n-1,start2=0,end2=m-1;
        while(start1<=end1 && start2<=end2){
            int mid1=(start1+end1)/2,mid2=(start2+end2);
            if(arr1[mid1]>)
        }
    }

int kthElement_2(int arr1[], int arr2[], int n, int m, int k)
    {
        int count=0,i=0,j=0,ans;
        while(count<k && i<n && j<m){
            if(arr1[i]>=arr2[j]){
                ans=arr2[j];
                j++;
            }
            else{
                ans=arr1[i];
                i++;
            }
            count++;
        }
        if(count<k && i<n){
            ans=arr1[k-count+i-1];
        }
        else if(count<k && j<m){
            ans=arr2[k-count+j-1];
        }
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