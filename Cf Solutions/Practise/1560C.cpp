#include <bits/stdc++.h>
using namespace std;
#define pi 3.14
#define min3(a,b,c) min(a,min(b,c))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i<b;i--)
#define ll long long
#include <cmath>
int main(){
    int t;
    cin>>t;
    while(t--){
        //for ith coloum value=1+(i-1)*(i-1) for jth row value=j*j
        ll a,i,j,b,c;
        cin>>a;
        c=1+sqrt(a-1);
        if(a-(c-1)*(c-1)<=c){
            j=c;
            i=a-(c-1)*(c-1);
        }
        else{
            i=c;
            j=2*c-a+(c-1)*(c-1);
        }
        cout<<i<<" "<<j<<"\n";
 
    }}