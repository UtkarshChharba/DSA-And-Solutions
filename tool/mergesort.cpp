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
#define mii map<int, int>
#define And &&
#define vi vector<int>
#define Or ||
#define float double
#define pb push_back
#define mp make_pair
#include <map>
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define in insert
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);






int pow2(int n){
    int ans=1;
    int start=2;
    while(n){
    if(n%2){
    ans=ans*start;
    n--;
}
    else{
        start=start*start;
        n=n/2;
    }
}
    return ans;
}




bool isPrime(int n){
    if(n==1) return false;
    if(n==2) return true;
    for(int i=2;i*i<=n;i++){
    if(n%i==0)return false;
}
return true;
}
void mergesort(int*a,int l,int r){
    if(l>=r){
        return;
    }
    int mid=(l+r)/2;
    mergesort(a,l,mid);
    mergesort(a,mid+1,r);
    int left[mid-l+1];
    int right[r-mid];
    loop(i,0,mid-l+1){
        left[i]=a[i+l];

    }
    loop(i,0,r-mid){
        right[i]=a[i+mid+1];

    }
    int i=0,j=0,put=l;
    while(i<mid-l+1 And j<r-mid){
        if(left[i]>right[j]){
            a[put]=right[j];
            j++;
        }
        else{
            a[put]=left[i];
            i++;
        }
        put++;        
    }
    while(i<mid-l+1){
        a[put]=left[i];
        i++;
        put++;
    }
    while(j<r-mid){
        a[put]=right[j];
        j++;
        put++;
    }
}
//.............................................................................................//
int32_t main(){
    int n;cin>>n;
int a[n];
loop(i,0,n){
    cin>>a[i];

}
mergesort(a,0,n-1);
loop(i,0,n){
    cout<<a[i]<<" ";

}
return 0;
}
//.............................................................................................//