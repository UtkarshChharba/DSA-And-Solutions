#include <bits/stdc++.h>
using namespace std;
#define pi 3.14
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i<b;i--)
class fractions{
    int numerator;
    int denomirator;
    public:
    fractions(int numerator,int denomirator){
        this->numerator=numerator;
        this->denomirator=denomirator;
    }
    void print(){
        cout<<numerator<<"/"<<denomirator;
    }
    void simplify(){
        int gcd=1;
        loop(i,1,min(numerator,denomirator)+1){
            if(numerator%i==0 && denomirator%i==0){
                gcd=i;
        numerator=numerator/gcd;
        denomirator=denomirator/gcd;
            }
        }
    }
    void add(fractions f2){
       int lcm=denomirator*f2.denomirator;
        numerator=numerator*(lcm/denomirator)+f2.numerator*(lcm/f2.denomirator);
        denomirator=lcm;
        simplify();
    }

};
int main(){
    fractions f1(10,2);
    fractions f2(15,4);
    f1.add(f2);
    f1.print();
}