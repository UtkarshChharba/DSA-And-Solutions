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



class dequeue{
    int first_index;
    int last_index;
    int size;
    int capacity;
    int*data;
    public:
    dequeue(int size){
        capacity=size;
        size=0;
        first_index=-1;
        last_index=-1;
        data=new int[size];
        }
    void insert_front(int a){
        if(first_index==-1){
            first_index=0;
            last_index=0;
        }
        if(size==capacity){
            cout<<"The dequeue is full"<<endl;
            return;
        }
        else{
            if(!first_index){
                first_index--;
            }
            else{
                first_index=capacity-1;
            }
            data[first_index]=a;
            size++;
            return;

        }
    }
    void insert_rear(int a){
        if(size==capacity){
            cout<<"The Dequeue is full"<<endl;
            return;
        }

        else{
            data[(++last_index)%capacity]=a;
            size++;
            return;
        }
    }
    int delete_front(){
        int a;
        if(!size){
            cout<<"The dequeue is already empty"<<endl;
            return -1;
        }
        else{
            a=data[first_index];
            first_index=(++first_index)&capacity;
            size--;

        }
        if(size==1){
            data[0]=data[first_index];
            first_index=0;
            last_index=0;
        }
        if(!size){
            first_index=-1;
            last_index=-1;
        }
        return a;
    }
    int delete_rear(){
        int a;
        if(!size){
            cout<<"The dequeue is already empty"<<endl;
        }
        else{
            a=data[last_index];
            if(last_index){
                last_index--;
            }
            else{
                last_index=capacity-1;
            }
        }
    if(size==1){
            data[0]=data[first_index];
            first_index=0;
            last_index=0;
        }
        if(!size){
            first_index=-1;
            last_index=-1;
        }
        return a;
    }
    int getfront(){
        return data[first_index];
    } 
    int getrear(){
        return data[last_index];
    }
};
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//