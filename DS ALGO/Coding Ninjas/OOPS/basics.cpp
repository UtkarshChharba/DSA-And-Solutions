#include <iostream>
using namespace std;
class student{
    //there are 2 types of members either they can private or public
    //private cant be accessed out of that class 
    //to access a private member out of class we need to create a funtion that access a private member
    private: 
        int age;
    public://this is a public function
        int rollnumber;
    void display(){
        cout<<"Roll No "<<rollnumber<<endl;
        cout<<"Age "<<age<<endl;
    }
    void setage(int a){
        age=a;
    }
    int getage(){
        return age;
    }


};
int main(){
    student s1;//statically 
    student *s2=new student;//dynamically 
    //here s2 is just a pointer pointing the class(object) in the heap
    s1.rollnumber=12;//setting the roll
    s2->rollnumber=14;//this method is only for dynammicaly allocated object signifying (*s2).rollnumber
    s1.display();
    s2->display();
    s1.setage(32);
    s2->setage(44);
    s1.display();
    s2->display();
    cout<<"The age is "<<s1.getage()<<endl;
    cout<<"The age is "<<s2->getage()<<endl;

    
}