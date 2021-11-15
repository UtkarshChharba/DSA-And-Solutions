#include <iostream>
using namespace std;
class fractions{
    private:
    int numerator;
    int denominator;
    public:
    fractions(int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;

    }
    void display(){
        cout<<numerator<<"/"<<denominator<<endl;
    }
    void add(fractions f2){
        numerator=numerator*f2.denominator+f2.numerator*denominator;
        denominator=denominator*f2.denominator;
        simplify();
    }
    void simplify(){
       int gcd=1;
       int j=min(numerator,denominator);
       for(int i=1;i<=j;i++){
           if(numerator%i==0 && denominator%i==0){
               gcd=i;
           }
       }
       numerator=numerator/gcd;
       denominator=denominator/gcd;

    }
};
int main(){
    fractions f1(5,11);
    f1.display();
    fractions f2(17,11);
    f2.display();
    f1.add(f2);
    f1.display();
    fractions* f3=new fractions(10,11);
    f2.add(*f3);
    f2.display();
}
