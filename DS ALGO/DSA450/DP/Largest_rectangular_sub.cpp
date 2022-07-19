#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
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

class quad{
    public:
    int col_l;
    int col_r;
    int rol_u;
    int rol_d;
};

pair<int,int> largest(vector<int> temp){
    unordered_map<int,int> mp;
    int sum=0;
    mp[0]=0;
    int size=-1;
    pair<int,int> ans;
    ans.first=-1;
    ans.second=-1;
    for(int i=1;i<=temp.size();i++){
        sum+=temp[i-1];
        if(mp.count(sum)){
            if(size<i-mp[sum]){
                size=i-mp[sum];
                ans.first=mp[sum];
                ans.second=i-1;
            }   
        }
        else{
            mp[sum]=i;
        }
    }
    return ans;
}

 vector<vector<int> > sumZeroMatrix(vector<vector<int> > M){
        int mx=INT_MIN;
        quad ans;
        for(int i=0;i<M[0].size();i++){
            vector<int> temp(M.size());
            for(int j=i;j<M[0].size();j++){
                for(int k=0;k<M.size();k++){
                    temp[k]+=M[k][j];
                }
                pair<int,int> cor=largest(temp);
                if(mx<cor.second-cor.first+1){
                    mx=cor.second-cor.first+1;
                    ans.rol_d=cor.second;
                    ans.rol_u=cor.first;
                    ans.col_l=i;
                    ans.col_r=j;
                }
            }

        }
        vector<vector<int> > ans_vec;
        cout<<ans.col_l<<" "<<ans.col_r<<" "<<ans.rol_d<<" "<<ans.rol_u<<" "<<endl;
        for(int i=ans.rol_u;i<=ans.rol_d;i++){
            vector<int> temp;
            for(int j=ans.col_l;j<=ans.col_r;j++){
                temp.push_back(M[i][j]);
            }
            ans_vec.push_back(temp);
        }
        return ans_vec;
    }
pair<int,int> solve(vector<int> arr, int n){
      map<int,int> mp;
      int cur_sum=0,maxlen=0;
      int eidx=-1;
      mp[0]=-1;
      for(int i=0;i<n;i++){
          cur_sum+=arr[i];
          cout<<cur_sum<<" "<<mp.count(cur_sum)<<endl;
          if(mp.count(cur_sum) && maxlen<i-mp[cur_sum]){
              maxlen=i-mp[cur_sum];
              eidx=i;
          }
          else{
              mp[cur_sum]=i;
          }
      }
      pair<int,int> p;
      p.first=maxlen;
      p.second=eidx;
      return p;
  }
//.............................................................................................//
int32_t main(){
FIO
int arr[] = {-33,-35,36,39,-1,-25,-13,-2,30};
vector<int> v(arr, arr + 9);
pair<int,int> p=solve(v,v.size());
cout<<p.first<<" "<<p.second<<" "<<endl;
return 0;
}
//.............................................................................................//