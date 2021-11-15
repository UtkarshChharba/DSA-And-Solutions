#include <iomanip>
#include <iostream>
#include <cmath>
typedef long long ll;
using namespace std;
ll kadane(int a[], int s)
{
    ll best = 0;
    ll current = 0;
    for (int i = 0; i < s; i++)
    {
        current += a[i];
        if (current > best)
        {
            best = current;
        }
        if (current < 0)
        {
            current = 0;
        }
    }
    return best;
}
ll sum(int a[], int s, int k)
{
    ll curret_pre = 0;
    ll curret_suff = 0;
    ll best_suff = 0;
    ll best_pre = 0;
    ll sum = 0;
    for (int i = 0; i < s; i++)
    {
        sum += a[i];
    }
    for (int i = 0; i < s; i++)
    {
        curret_pre += a[i];
        if (curret_pre > best_pre)
        {
            best_pre = curret_pre;
        }
    }
    for (int i = s - 1; i >= 0; i--)
    {
        curret_suff += a[i];
        if (curret_suff > best_suff)
        {
            best_suff = curret_suff;
        }
    }
    if (k == 1)
    {
        return kadane(a, s);
    }
    else{
        if(sum>0){return max((k-2)*sum+best_suff+best_pre,kadane(a,s));}
        else{return max(best_suff+best_pre,kadane(a,s));}
    }
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int j = 0; j < n; j++)
        {
            cin >> a[j];
        }
        cout<<sum(a,n,k)<<endl;
    }
}