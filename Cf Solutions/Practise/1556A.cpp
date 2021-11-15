#include <iostream>
using namespace std;
#define pi 3.14
#define min3(a,b,c) min(a,min(b,c))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=b-1;i>=a;i--)
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if((a-b)%2==0 && a!=b){
            cout<<2<<"\n";
        }
        else if(a==0 && b==0){cout<<0<<"\n";}
        else if(a==b){cout<<1<<"\n";}
        else{cout<<-1<<"\n";}
    }
}
