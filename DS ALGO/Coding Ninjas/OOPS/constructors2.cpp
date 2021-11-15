#include <iostream>
using namespace std;
class student{

    private: 
        int age;
    public:
        int rollnumber;
    //ek object ki life mein ek constructor bs ek baar call hota hai
    
    //default constructor
    student(){
        cout<<"COnstructor chal pda"<<endl;
    }
    //once u make a constructor then background mein constuctor tha woh khatam ho jata
    //matlab like agar u made a constructor with a 1 input and tried to make a object with zero input toh error aa jayega
    

    // '''this''' keyword ka matlab hai &<object name>
    //so agar funtion mein arguments are passed as same like object variable names then this-><object variable>=funtion argument is used
    //paramatarized constructor
    student(int rollnumber){
        cout<<"COnstructor chal pda1"<<endl;
        //if u do rollnumber=rollnumber then it will assume it only see this as funtion argument=funtion argument as ek variable ka nearest cope dekhte hai
        this->rollnumber=rollnumber;//same as *(&<object name>).rollnumber=rollnumber
    }
    student(int age ,int rollnumber){
        cout<<"COnstructor chal pda2"<<endl;
        this->age=age;
        this->rollnumber=rollnumber;
    }
    void display(){
        cout<<"Roll No "<<rollnumber<<endl;
        cout<<"Age "<<age<<endl;
    }
    student* checkthis(){
        return this;
    }
    void setage(int a){
        age=a;
    }
    int getage(){
        return age;
    }
};
int main(){
    student s1;
    s1.display();
    student s2(20);
    s2.display();
    student s3(20,13);
    s3.display();
    student *s4=new student(55,555);
    cout<<&s1<<" "<<s1.checkthis()<<endl;//checking this correctness

    
}