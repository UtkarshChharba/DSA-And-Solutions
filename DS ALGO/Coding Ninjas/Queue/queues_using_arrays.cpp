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
//QUEUE IS DATA TYPE JISME FIFO HAI
//MATLAB FIRST IN FIRST OUT
template<typename T>
class queues{
    T *data;
    int nextindex;//Yeh woh index hai jaha insertion hoga
    int size;//YEH HAMARE QUEUES KA CURRENT SIZE BATAYEGA
    int firstindex;//YEH HAMARA FIRST ELEMENT INSERTION PLACE BATAYEGA
    int capacity;//JITNI CAPACITY KA QUEUE BANAYI HAI
    public:
    queues(int size){
        data=new T[size];//PEHLE DYNAMICALLY ARRAY BNA LI
        capacity=size;//SIZE LE LIYA USER SE
        this->size=0;//QUEUE KA CURRENT SIZE=0 KRDIYA
        firstindex=-1;//ISSE -1 ISLIYE KIYA HAI KYUKI JB FIRST ELEMENT INSERT HOGA 
        //THEN FIRSTINDEX++ THEN YEH 0TH KO POINT KR RHA HOGA 
        //JO SHI HAI
        nextindex=0;//YEH INSERTION KI PLACE BTA RHA HAI
    }
    int getsize(){
        return size;
    }
    bool isempty(){
        return size==0;
    }
    void enqueue(int a){
        if(size==capacity){//AGAR HUM CAPACITY TK PAHUNCH CHUKE HAI TOH ENQUEUE NHI HO 
            cout<<"Queue Is already Full"<<endl;
            return;
        }
        if(firstindex==-1){//AGAR ABHI PEHLA ELEMENT AA RHA HAI USSE TOH PEHLA ELEMENT BTA RHE HAI
            firstindex=0;
        }
        data[nextindex++]=a;//DATA INSERTION AND POST++ KIYA HAI
        //MATLAB JB INSERTION HO JAYE TOH NEXTINDEX KO 1 PLACE MOVE KR DENA
        nextindex=nextindex%capacity;
        //**** YEH MOD ISLIYE LIYA HAI KYUKI AS TUM ARRAY KE AAGE BADH GYE BUT U STILL HAI
        //CAPACITY LEFT MATLAB PEECHE WALE ELEMENT KHALI THE TOH WE CAN JUST SAY NEXTINDEX%CAPACITY
        //SUPPOSR SIZE=3 AND CAPACITY=5 NEXTINDEX=5 THE INSERTION WOULD BE ON 0TH PLACE
        size++;
    }
    void dynamic_enqueue(T a){
        if(size==capacity){
            T*newdata=new T[2*capacity];
            loop(i,0,capacity){
                newdata[i]=data[(firstindex+i)%capacity];
            }
            nextindex=capacity;
            capacity*=2;
            firstindex=0;
            delete[] data;
            data=newdata;
        }
        data[nextindex++]=a;
        nextindex=(nextindex)%capacity;
        size++;
        if(firstindex==-1){
            firstindex=0;
        }


    }
    T front(){
        if(isempty()){
            cout<<"Queue is already empty"<<endl;
            return 0;
        }
        return data[firstindex];
    }
    T dequeue(){
        if(isempty()){
            cout<<"Queue is already empty"<<endl;
        }
        T ans=data[firstindex++];
        firstindex=firstindex%capacity;//SAME LOGIC AS LINE 65
        size--;
        if(!size){//YEH IMPORTANT NHI HAI BUT JUST FOR UNDERSTANDING
        //MATLAB AGAR AFTER DELETION QUEUE EMPTY HAI SO WE CAN RESET IT
            firstindex=-1;
            nextindex=0;
        }
        return ans;

    } 
    
};
//.............................................................................................//
int32_t main(){
FIO
queues<int> q(5);
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