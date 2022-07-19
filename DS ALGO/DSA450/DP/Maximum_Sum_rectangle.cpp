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

int kadane(vector<int>arr){
        int sum=0;
        int cur_sum=0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            cur_sum+=arr[i];
            if(cur_sum<0){
                cur_sum=0;
            }
            sum=max(sum,cur_sum);
        }
        int total=0;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                total+=1;
            }
        }
        return total==n?-1:sum;

        
    }
int maximumSumRectangle(int r, int c, vector<vector<int> > M) {
        int mx=INT_MIN;
        for(int i=0;i<c;i++){
            vector<int> temp(r);
            for(int j=i;j<c;j++){
                for(int k=0;k<r;k++){
                    temp[k]+=M[k][j];
                }
                mx=max(mx,kadane(temp));
            }

        }
        return mx;
    }
pair<int,int> solve(vector<int> arr, int n){
      map<int,int> m;
      int cur_sum=0,maxlen=0;
      int eidx=-1;
      for(int i=0;i<n;i++){
          cur_sum+=arr[i];
          if(arr[i]==0) maxlen=max(maxlen,1);
          if(cur_sum==0){
              maxlen=max(maxlen,i+1);
              eidx=i;
          }
          if(m.find(cur_sum)!=m.end()) {
              if(i-m[cur_sum]>maxlen){
                  maxlen=i-m[cur_sum];
                  eidx=i;
              }
          }
          else m[cur_sum]=i;
      }
    //   cout<<eidx<<endl;
      pair<int,int> p{maxlen,eidx};
      return p;
  }
  vector<vector<int>> sumZeroMatrix(vector<vector<int>> a){
      //Code Here
      int r=a.size(), c=a[0].size();
      int sr=0,sc=0,er=0,ec=0;
      int len=-1;
      int lenr=-1;
      for(int i=0;i<c;i++){
          vector<int> t(r);
          for(int j=i;j<c;j++){
              
              for(int k=0;k<r;k++){
                  t[k]+=a[k][j];
              }
              pair<int,int> p=solve(t,r);
              if(len<p.first && lenr<j-i+1){
                  len=p.first;
                  sc=i;
                  ec=j;
                  sr=p.second-p.first+1;
                  er=p.second;
                  lenr=
              }
          }
      }
      cout<<len<<' '<<sc<<' '<<ec<<' '<<sr<<' '<<er<<endl;
      vector<vector<int>> v(er-sr+1,vector<int>(ec-sc+1));
      for(int i=sr;i<=er;i++){
          for(int j=sc;j<=ec;j++){
              v[i-sr][j-sc]=a[i][j];
            //   cout<<a[i][j]<<' ';
          }
          cout<<endl;
      }
      return v;
  }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//