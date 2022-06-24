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





class Queue{
    public:
    int*data;
    int cur_index;
    int capacity;
    int size;
    int next_index;
    Queue(int capacity){
        this->capacity=capacity;
        data=new int[capacity];
        size=0;
        cur_index=-1;
        next_index=0;
    }
    int getsize(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
    void enqueue(int value){
        if(capacity==size){
            cout<<"Queue Is Full"<<endl;
            return;
        }
        data[next_index++]=value;
        next_index=next_index%capacity;
        size++;
        if(cur_index==-1){
            cur_index=0;
        }
    }
    void dynamic_enqueue(int value){
        if(capacity==size){
            if(capacity){
                int*newdata=new int[capacity*2];
                for(int i=0;i<capacity;i++){
                    newdata[i]=data[(i+cur_index)%capacity];
                }
                next_index=capacity;
                capacity*=2;
                delete[] data;
                data=newdata;
                cur_index=0;
            }
        }
        int temp=next_index;
        data[next_index++]=value;
        next_index=next_index%capacity;
        size++;
        if(cur_index==-1){
            cur_index=0;
        } 
    }
    int front(){
        if(size==0){
            cout<<"The Queue is empty"<<endl;
            return -1;
        }
        return data[cur_index];
    }
    int dequeue(){
        if(!size){
            cout<<"The Queue is Already empty"<<endl; 
            return -1;}
        int value=data[cur_index++];
        cur_index=(cur_index)%capacity;
        size--;
        if(!size){
            cur_index=-1;
            next_index=0;
        }
        return value;
    }


};
//.............................................................................................//
int32_t main(){
FIO
Queue q(5);
q.dynamic_enqueue(10);
q.dynamic_enqueue(20);
q.dynamic_enqueue(30);
q.dynamic_enqueue(40);
q.dynamic_enqueue(50);
q.dynamic_enqueue(60);
cout<<q.front()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.dequeue()<<endl;
cout<<q.getsize()<<endl;
cout<<q.isempty()<<endl;
return 0;
}
//.............................................................................................//