#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define tl(v, size)                \
    for (int i = 0; i < size; i++) \
    {                              \
        cout << v[i] << ' ';       \
    }                              \
    cout << endl
#define int long long
#define pi (3.141592653589)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define loopb(i, a, b) for (int i = b; i >= a; i--)
#define mod 1000000007
#define endl '\n'
#define pii pair<int, int>
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define mii map<int, int>
#define And &&
#define vi vector<int>
#define Or ||
#define float double
#define pb push_back
#define mp make_pair
#include <map>
#define infinity 999999999999999999
#define all(v) (v).begin(), (v).end()
#define MOD_DEFINE const int MOD = 1e9 + 7;
#define ff first
#define ss second
#define min3(a, b, c) min(c, min(a, b))
#define in insert
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define FIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define fps(x, y) fixed << setprecision(y) << x

bool valid(int grid[N][N],int row,int col,int val){
    for(int i=0;i<9;i++){
        if(grid[row][i]==val){
            return false;
        }
        if(grid[i][col]==val){
            return false;
        }
        if(grid[3*(row/3)+i/3][3*(col/3)+i%3]==val){
            return false;
        }
    }
    return true;
    
}
bool SolveSudoku(int grid[N][N])
{
    for(int i=0;i<9;i++){
        for(int j=0;j<9;j++){
            if(grid[i][j]==0){
                for(int val=0;val<=9;val++){
                    if(valid(grid,i,j,val)){
                        grid[i][j]=val;
                        if(SolveSudoku(grid)){
                            return true;
                        }
                        else{
                            grid[i][j]=0;
                        }
                    }
                }
                return false;
            }
        }
   }
   return true;
}

void printGrid(int grid[N][N])
{
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << grid[i][j] << " ";
        }
        cout << endl;
    }
    return;
}
//.............................................................................................//
int32_t main()
{
    FIO
    w(t)
    {
    }
    return 0;
}
//.............................................................................................//