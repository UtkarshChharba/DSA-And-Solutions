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
    //Destructor
    ~student(){
        cout<<"TATA BYE BYE"<<endl;
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
    student s3(20,13);
    s3.display();
    student *s4=new student(55,555);
    cout<<&s1<<" "<<s1.checkthis()<<endl;//checking this correctness
    //COPY CONSTRUCTOR
    student s5(s1);//isne s2 ko bilkul s1 jaisa same bna diya
    s5.display();

    student *s6=new student(s1);
    s6->display();

    student *s7=new student(*s4);
    s7->display();

    student s8(*s4);
    s8.display();

    //isse aise bhi kr skte baat same hi hai
    student s9=s1;

    //COPY OPERATOR
    //suppose tumne object bna liya then u need to make it equal to other object 
    s5=*s4;
    s5.display();
    *s6=*s4;
    s6->display();
    *s7=*s4;
    s7->display();
    s8=*s4;
    s8.display();

    //Destructor yeh last pe call hota hai like jb yeh int main() end hoga then objects ka scope khatam ho jayega
    //Heap wale constructor reh jayenge as woh khud nhi delete hote
    delete s7;
    cout<<"S7 GAYA"<<endl;
    delete s6;
     cout<<"S6 GAYA"<<endl;

}
