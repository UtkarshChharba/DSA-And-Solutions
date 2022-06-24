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

class Stack{
    public:
    int size;
    int*data;
    int capacity;
    Stack(){
        this->capacity=4;
        data=new int[4];
        size=0;
    }
    bool isempty(){
        return size==0;
    }
    void push(int value){
        if(capacity==size){cout<<"Stack is already Full";return;}
        else{
            data[size++]=value;
            return;
        }
    }
    int pop(){
        if(!size){cout<<"Nothing to Pull";return -1;}
        else{
            int ans=data[size-1];
            size--;
            return ans;
        }
    }
    int sizeis(){
        return size;
    }
    int top(){
        return data[size-1];
    }
    void dynamic_push(int value){
        if(capacity==size){
            if(capacity){
                int*newdata=new int[2*capacity];
                for(int i=0;i<capacity;i++){
                    newdata[i]=data[i];
                }
                capacity*=2;
                delete[] data;
                data=newdata;
            }
            else{
                capacity=1;
                data=new int[capacity];
            }
        }
            data[size++]=value;
            return;
    }

};
//.............................................................................................//
int32_t main(){
FIO
Stack s;
s.dynamic_push(10);
s.dynamic_push(20);
s.dynamic_push(30);
s.dynamic_push(40);
s.dynamic_push(50);
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.sizeis()<<endl;
cout<<s.isempty()<<endl;
return 0;
}
//.............................................................................................//