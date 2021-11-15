#include <iostream>
using namespace std;
class fractions{
    private:
    int numerator;
    int denominator;
    public:
    fractions(){

    }
    fractions(int numerator,int denominator){
        this->numerator=numerator;
        this->denominator=denominator;
    }
    int getdenominator() const{//as yeh function overall values mein koi change nhi kr rha so hum isse const likh skte hai
    //by writing const we can access thus function even for const objects(warna error aata)  
        return denominator;
    }
    int getnumerator() const{
        return numerator;
    }
    void setdenominator(int d){
        denominator=d;
    }
    void setnumerator(int n){
        numerator=n;
    }
    void print() const {
        cout<<numerator<<'/'<<denominator<<endl;
    }
    };
int main(){
    fractions f1(10,2);
    fractions const f2;//yeh ek constant fraction hai matlab iske numerator and denominator const garbage value hai
    //const wale sirf const wale funtions call kr skta hai as woh gurantee rte kuch change hi krenge
    
}