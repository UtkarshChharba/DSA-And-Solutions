#include <bits/stdc++.h>
#include <vector>
using namespace std;
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

void kSortedArray(int input[],int n,int k){
    priority_queue<int> pq;
    loop(i,0,k){//intially pushing k elements in the queue
        pq.push(input[i]);
    }
    int j=0;//intialization of insertion
    loop(i,k,n){
        input[j]=pq.top();//insertion of max value
        pq.pop();//poping that value
        pq.push(input[i]);//pushing the next element from that array
        j++;
    }
    while(!pq.empty()){//sorting the leftover elements in the queue
        input[j]=pq.top();
        pq.pop();
        j++;
    }
}

//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
int input[n];
loop(i,0,n){
    cin>>input[i];
}
int k;cin>>k;
kSortedArray(input,n,k);
loop(i,0,n){
    cout<<input[i]<<" ";
}
cout<<endl;

return 0;
}
//.............................................................................................//
/*
K SORTED ARRAY KA MATLAB HUA THAT AFTER SORTING A ELEMENT HAS JUST MOVED K-1 DISTANCE FROM ITS POSTION
EG-     10,12,15,7,9 K=3
        15,12,10,9,7 
MOVEMENT 2,0,2,1,1 SO THIS IS A K SORTED ARRAY



WE ARE USING PRIORITY QUEUES FOR THIS PROCESS 
GIVEN INFORMATION THAT A ELEMENT IS JUST K-1 PLACES FROM ITS POSITION 
SO FOR EG 10,12,15,7,9 
PUSH K ELEMEMENTS INTO THE PRIORITY QUEUE 10,12,15
THEN FIRST POSTION IS OF MAX OF QUEUE WHICH IS TOP
SO 15 THEN THEN POP AND PUSH NEXT THAT IS 7 THEN AGAIN MAX OF THIS 
REPEAT THIS TILL WE FINISH THE ARRAY
*/