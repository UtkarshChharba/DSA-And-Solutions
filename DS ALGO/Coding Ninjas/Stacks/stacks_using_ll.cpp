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
#define  INT_MIN	                     -2147483648
#define  INT_MAX	                     2147483648
#define ss second
#define min3(a, b, c) min(c, min(a, b))
#define in insert
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define FIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define fps(x,y)                        fixed<<setprecision(y)<<x
template <typename T>
class node{
    public:
    T data;//making this data of the type T
    node<T> *next;//Nayi node banane waqt we need to specify
    //ki kis type ki node bna rhe hai
    node(T a){
        data=a;
        next=NULL;
    }
};

template <typename T>
class stacks{
    public:
    node<T>*head;
    int size;
    stacks(){
        head=NULL;
        size=0;
    }
    void push(T a){//this is very interesing***
        node<T>*newhead=new node<T>(a);//hum actually back pe push nhi kr rhe
        //we are actually making the new head
        //this makes accessing the top and pop very easy
        //so if the pushing is like 1,2,3,4
        //then the ll is 4 3 2 1
        newhead->next=head;
        head=newhead;
        size++;

    }
    T pop(){
        if(head){
        T data=head->data;
        node<T>*newhead=head->next;
        delete head;
        head=newhead;
        size--;
        return data;
        }
        cout<<"NOTHING TO POP"<<endl;
        return -1

    }
    int issize(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
    void top(){
        cout<<head->data<<endl;
    }

};

//.............................................................................................//
int32_t main(){
FIO

return 0;
}
//.............................................................................................//