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
    fractions add(fractions const &f2) const {//const isliye becoz at the end yeh fnew mein hi change kr rha hai parent object mein nhi
        int n1=numerator*f2.denominator+f2.numerator*denominator;
        int d1=denominator*f2.denominator;
        fractions fnew(n1,d1);//initialization of fnew
        fnew.simplify();//fnew ko simplify kiya hai
        return fnew;
    }
    fractions operator+(fractions const &f2) const {//this is called operator overloading as agar hum pehle simply fraction f3=f1.add(f2) likhte but yaha hume 
    //fractions fnew=f1+f2 which whould be interpreted like f3=f1.add(f2)
        int n1=numerator*f2.denominator+f2.numerator*denominator;
        int d1=denominator*f2.denominator;
        fractions fnew(n1,d1);//initialization of fnew
        fnew.simplify();//fnew ko simplify kiya hai
        return fnew;
    }
    fractions operator*(fractions const &f2) const{//same as before for operator overloading
        int n1=numerator*f2.numerator;
        int d1=denominator*f2.denominator;
        fractions fnew(n1,d1);
        fnew.simplify();
        return fnew;
    }
    bool operator==(fractions const &f2) const{
        return(numerator==f2.numerator && denominator==f2.denominator);
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
    //Pre Increment
    fractions & operator++(){//humne yaha pe & lagaya hai matlab jo bhi return krna woh with refrence krna 
        numerator=numerator+denominator;
        simplify();
        return *this;//iska matlab return this(jo ki hai khud object )and then with a *(matlab return is object ka content)
        //humne upar ek & bhi lgaya hai matlab jo *this hai woh khud this mein stored ho

    }
    //post increment
    fractions operator++(int){//syntax hai to be remembered
        fractions fnew(numerator,denominator);
        numerator=numerator+denominator;
        return fnew;
    }
    fractions &operator+=(fractions const &f2){
        numerator=numerator*f2.denominator+f2.numerator*numerator;
        denominator=denominator*f2.denominator;
        simplify();
        return *this;
    }
    void print(){ 
        cout<<numerator<<"/"<<denominator<<endl;
    }

};
int main(){
    fractions f1(10,2);
    fractions f2(15,4);
    fractions f3=f1.add(f2);//this is using the default funtion input
    f3.print();
    fractions f4=f2+f1;//this is using the operator overloading
    f4.print();
    fractions f5=f2*f1;//multiply operator overloading
    f5.print();
    cout<<(f1==f2 ? "THEY ARE EQUAL":"THEY ARE NOT EQUAL")<<endl;
    //cases for pre increment

    fractions f6(10,2);
    ++f6;//matlab isne f6 ko preincrement krdiya hai us address pr and ab f6 updated hai
    f6.print();
    fractions f7=++f6;//matlab isne f6 ko preincrement kiya hai then f7 mein copy kridya
    f7.print();
    ++(++f6);//matlah isne pehle f6 ko increment kiya but after that agar humne funtion mein fractions & nhi likha hota
    f6.print();
    //toh yeh return krta kisi buffer mein and the usse update krta but we want to update f6 so isliye by refrence pass kya hai
    fractions f8=++(++f6);//copy the content of f6 in f7
    f8.print();
}
