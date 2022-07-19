#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define tl(v,size) for(int i=0;i<size;i++){cout<<v[i]<<' ';} cout<<endl
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


int i[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
int j[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };
bool isSafe(int n, int x, int y, vector<vector<int> > &board){
    // cout<<"wah"<<endl;
    return (x>=0 && y>=0 && x<n && y<n && board[x][y]==-1);
}

int solve(int n, int x, int y, vector<vector<int> > &board, int moves){
    if(moves==n*n) return 1;
    
    for (int k = 0; k < 8; k++)
    {   
        int nx=x+i[k], ny=y+j[k];
        if(isSafe(n,nx,ny,board)){
            board[nx][ny]=moves;
            if(solve(n,nx,ny,board,moves+1)==1) return 1;
            board[nx][ny]=-1;
        }
    }
    return 0;
}

int main() {
    int n; cin>>n;
    
    vector<vector<int> > board(n,vector<int>(n,-1));
    board[0][0]=0;
    // int k=1;
    int ans=solve(n,0,0,board,1);
    if(ans==0) {
        cout<<"No sol"<<endl;
    }
    else{

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout<<board[i][j]<<' ';
            }
            cout<<endl;
            
        }
    }
    return 0;
}

//.............................................................................................//
//.............................................................................................//