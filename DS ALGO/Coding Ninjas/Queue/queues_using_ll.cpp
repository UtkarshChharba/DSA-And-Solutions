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


template<typename T>
class node{
    public:
    T data;
    node*next;
    node(int a){
        data=a;
        next=NULL;
    }
};
template<typename T>
class queues{
    public:
    node<T>*head;
    node<T>*tail;
    int*size;
    queues(){
        size=0;
        head=NULL;
        tail=NULL;

    }
    void enqueue(int a){
        if(!head){
            head=new node<T>(a);
            tail=head;
        }
        else{
        tail->next=new node<T>(a);
        tail=tail->next;
        }
        size++;
    }
    T dequeue(){
        if(isempty()){
            cout<<"Queue is already empty";
            return 0;
        }
        T data=head->data;
        node<T> *newhead=head->next;
        delete head;
        head=newhead;
        size--;
        return data;
    }
    bool isempty(){
        return size==0;
    }
    int issize(){
        return size;
    }
    T front(){
        if(isempty()){
            cout<<"THE Queue is already Empty"<<endl;
            return 0;
        }
        return head->data;

    }
};
//.............................................................................................//
int32_t main(){
FIO

return 0;
}
//.............................................................................................//