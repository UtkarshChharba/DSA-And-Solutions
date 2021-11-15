#include <bits/stdc++.h>
#include <vector>
using namespace std;
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
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define in insert
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);






class stacks{
    public:
    int *data;
    int size;
    int capacity;
    stacks(int capacity){
        this->capacity=capacity;
        size=0;
        data=new int [capacity];
    }
    void push(int a){
        if(size<capacity){
        data[size]=a;
        size++;
        }
        else{
            cout<<"CHANGING CAPACITY SO THERE IS STACK OVERFLOW"<<endl;
            int *new_data=new int [2*capacity]; 
            loop(i,0,capacity){
                new_data[i]=data[i];
            }  
            capacity*=2;
            delete[] data;
            data=new_data;
            data[size]=a;
            size++;    
            }
    }
    void pop(){
        cout<<"size=="<<size<<endl;
        if(size<=0){
            cout<<"STACK IS EMPTY SO THERE IS STACK UNDERFLOW"<<endl;;
        }
        else{
            size--;
        }
    }
    void display(){
        if(size<0){
            cout<<"NOTHING TO POP"<<endl;
        }
        if(!size){
            cout<<"NOTHING TO DISPLAY"<<endl;
        }
        else{
            cout<<data[size-1]<<endl;
        }
        
    }

};
//.............................................................................................//
int32_t main(){
stacks s(4);

while(true){
cout<<"-1 TO TERMINATE"<<endl;
cout<<"1 TO PUSH A ELEMENT IN THE STACK"<<endl;
cout<<"2 TO DISPLAY THE TOP  ELEMENT IN THE STACK"<<endl;
cout<<"3 TO POP THE TOPMOST ELEMENT IN THE STACK"<<endl;
    int choice;
    cin>>choice;
    if(choice==-1){
        break;
    }
    
    switch(choice){
        case(1):
            int element;
            cin>>element;
            s.push(element);
            s.display();
            break;

        case(2):
            cout<<"STACKS TOP MOST ELEMENT ";
            s.display();
            break;

        case(3):
            s.pop();
            cout<<"STACK TOPMOST AFTER OPERATION"<<endl;
            s.display();
            break;
        default:
            break;

    }
}
    cout<<"NOW AT THE END STACK IS COMPOSED OF ";
    loop(i,0,s.size){
        cout<<s.data[i]<<" ";
    }
    cout<<endl;
return 0;
}

//.............................................................................................//