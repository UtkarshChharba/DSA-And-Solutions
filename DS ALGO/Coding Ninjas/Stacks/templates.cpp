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


template <typename T>//iska matlab hai T is a data structure template 
//represented by name T 
class pairs{
    T x;//iska matlab X is data structure template and iski value during creation batayenge
        //is T ki value kuch bhi ho skti hai int,double,str
    T y;
    public:
    void setX(T x){
        this->x=x;

    }
    void setY(T y){
        this->y=y;
        
    }
    T getX(){
        return x;
    }
    T getY(){
        return y;
    }
};
template <typename T,typename P>
//now instead of only T humne do type ka data type assign kr skte
class together{//here x and y can be of diffrent types
    T x;
    P y;
    public:
    void setX(T x){
        this->x=x;

    }
    void setY(P y){
        this->y=y;
        
    }
    T getX(){//returning value of the type T
        return x;
    }
    P getY(){
        return y;
    }
};
//together<int,double> now this can easily be used
//BEFORE USING A CLASS SPECIFY THE TEMPLATE TO BE USED
//.............................................................................................//
int32_t main(){
FIO
pairs<int> p1;//idhar humne data type bta di ki during allocation isse as a int banana
p1.setX(19);
p1.setY(20);

//TRYING to make a triplet
together<pairs<int>,int> t3;//here together is forming a triplet
//X is of the type pair with is values as integer
//Y is of type integer
//TO SET VALUE OF X OF TOGETHER WE NEED TO MAKE A PAIR
pairs<int> p3;//MAking a Pair
p3.setX(20);
p3.setY(30);
t3.setX(p3);//setting x as a Pair
t3.setY(10);
cout<<t3.getX().getX()<<" "<<t3.getX().getY()<<" "<<t3.getY()<<endl;//Printing Triplet


return 0;
}
//.............................................................................................//
