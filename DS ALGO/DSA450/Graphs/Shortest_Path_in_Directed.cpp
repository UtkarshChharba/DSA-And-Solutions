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

void topo_sort(int **edge, bool *visited, int n, int start, stack<int> &s)
{
    visited[start] = 1;
    for (int i = 0; i < n; i++)
    {
        if (edge[start][i] && !visited[i])
        {
            topo_sort(edge, visited, n, i, s);
        }
    }
    s.push(start);
    return;
}
vector<int> DFS_shortest(int **edge, int n)
{
    vector<int> dist(n);
    for (int i = 0; i < n; i++)
    {
        dist[i] = INT_MAX;
    }
    dist[0] = 0;
    bool *visited = new bool[n];
    for (int i = 0; i < n; i++)
    {
        visited[i] = 0;
    }
    stack<int> s;
    for (int i = 0; i < n; i++)
    {
        if (!visited[i])
        {
            topo_sort(edge, visited, n, i, s);
        }
    }
    while (s.size())
    {
        int top = s.top();
        s.pop();
        if (dist[top] != INT_MAX)
        {
            for (int i = 0; i < n; i++)
            {
                if (edge[top][i] && dist[top] + edge[top][i] < dist[i])
                {
                    dist[i] = dist[top] + edge[top][i];
                }
            }
        }
    }
    return dist;
}
//.............................................................................................//
int32_t main()
{
    FIO int n;
    cin >> n;
    int e;
    cin >> e;
    int **edges = new int *[n];
    for (int i = 0; i < n; i++)
    {
        edges[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            edges[i][j] = 0;
        }
    }
    for (int i = 0; i < e; i++)
    {
        int f, s, w;
        cin >> f >> s >> w;
        edges[f][s] = w;
    }

    return 0;
}
//.............................................................................................//