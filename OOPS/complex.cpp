#include <bits/stdc++.h>
using namespace std;
#define pi 3.14
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i<b;i--)
class coplex{
    int x;
    int y;
    public:
    coplex(int x,int y){
        this->x=x;
        this->y=y;
    }
    void print(){
        cout<<x<<"+"<<y<<"i"<<endl;
    }
    void add(coplex const &f2){
        int a,b;
        x=x+f2.x;
        y=y+f2.y;
        x=a;
        y=b;

    }
    void multiply(coplex const &f2){
        int a,b;
        a=x*f2.x-y*f2.y;
        b=x*f2.y+f2.x*y;
        x=a;
        y=b;

    }
};
int main(){
    int a1,b1,a2,b2,choice;
    cin>>a1>>b1>>a2>>b2>>choice;
    coplex c1(a1,b1);
    coplex c2(a2,b2);
    if(choice==1){
    c1.add(c2);
    c1.print();}
    if(choice==2){
    c1.multiply(c2);
    c1.print();}

}