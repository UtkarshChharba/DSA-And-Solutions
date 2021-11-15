#include <bits/stdc++.h>
using namespace std;
#define pi 3.14
#define min3(a,b,c) min(a,min(b,c))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i<b;i--)
class fractions{
  private:
  int numerator;
  int denomirator;
  public:
  fractions(int numerator,int denomirator){
    this->numerator=numerator;
    this->denomirator=denomirator;
  }
  void print() const {
    cout<<numerator<<"/"<<denomirator<<endl;
  }
  fractions operator*(fractions const &f2)const {
    int num=numerator*f2.numerator;
    int den=denomirator*f2.denomirator;
    fractions fnew(num,den);
    return fnew;
  }
  fractions operator+(fractions const &f2) const{
    int lcm=denomirator*f2.denomirator;
    int num=(lcm/denomirator)*numerator+(lcm/f2.denomirator)*f2.numerator;
    fractions fnew(num,lcm);
    fnew.simplify();
    return fnew;
  }
  void simplify(){
    int gcd=1;
    for(int i=1;i<=min(numerator,denomirator);i++){
      if(numerator%i==0 && denomirator%i==0){
        gcd=i;
      }
    }
  numerator=numerator/gcd;
  denomirator=denomirator/gcd;
  }


};
int main(){
  fractions f1(10,2);
  fractions f2(15,4);
  const fractions f3=f1.operator+(f2);
  f3.print();
  const fractions f4=f1.operator*(f2);
  f4.print();
}
