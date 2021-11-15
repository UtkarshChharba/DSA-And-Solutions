#include <bits/stdc++.h>
using namespace std;
#define pi 3.14
#define min3(a,b,c) min(a,min(b,c))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i<b;i--)
int main(){
    int t;
    cin>>t;
    while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int d;
    int x;
    if(a>b){
        d=2*(a-b);
        if(a>d || c>d){cout<<-1<<endl;}
        else if(c>d/2){cout<<c-d/2<<endl; }
    else{cout<<d/2+c<<endl;}
    }
    else if(b>a){
        d=2*(b-a);
        if(b>d || c>d){cout<<-1<<endl;}
        else if(c>d/2){cout<<c-d/2<<endl;}
    else{cout<<d/2+c<<endl;}
    }
}}