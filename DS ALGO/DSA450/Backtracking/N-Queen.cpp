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

vector<vector<int> > result;
bool isSafe(int row,int col,vector<vector<bool> > &board){
    for(int i=0;i<=col;i++){
        if(board[row][i]){
            return 0;
        }
    }
    for(int i=row,j=col;i>=0&&j>=0;i--,j--){
        if(board[i][j]){
            return 0;
        }
    }
    for(int i=row,j=col;i<board.size()&&j>=0;i++,j--){
        if(board[i][j]){
            return 0;
        }
    }
    return 1;
}
bool helper(vector<vector<bool> > &board,int num){
    if(num==board.size()){
        vector<int> ans;
        for(int i=0;i<num;i++){
            for(int j=0;j<num;j++){
                if(board[i][j]){
                    ans.push_back(j+1);
                }
                
            }
        }
        result.push_back(ans);
        return 1;
    }
    bool res=0;
    for(int i=0;i<board.size();i++){
        if(isSafe(i,num,board)){
            board[i][num]=1;
            res=helper(board,num+1)||res;
            board[i][num]=0;
        }
    }
    return res;
}
vector<vector<int> > nQueen(int n) {
        vector<vector<bool> > board(n,vector<bool>(n,0));
        result.clear();
        helper(board,0);
        return result;     
    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//