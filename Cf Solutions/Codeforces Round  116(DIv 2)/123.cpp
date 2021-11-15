#include <iomanip>
#include <iostream>
#include <cmath>
#include<vector>
#include <bits/stdc++.h>
#define int long long

using namespace std;

int32_t main(){
    int t;
    cin>>t;
    for (int i = 0; i < t; i++)
    {
        int n,k;
        cin>>n>>k;
        int temp=1;
        int time=0;
        while(temp<=k and n>1 and temp<n){
            time++;
            temp*=2;
        }
        if(temp<n){
        if((n-temp)%k==0){time+=(n-temp)/k;}
        else{time+=(n-temp)/k + 1;}
        cout<<time<<endl;
    }
    else{cout<<time<<endl;}
    }
    
return 0;
}