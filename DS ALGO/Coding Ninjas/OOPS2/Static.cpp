#include <bits/stdc++.h>
#include <vector>
using namespace std;
class student{
    private:
    int rollno;
    int age;
    public:
    static int totalstudents;//iska matlab yeh ek static member hai har object ka 
    //this is independent of object and is a property of class 
    //yeh class ke saath stored hota hai not with object

    static int getstudents(){//static fucction matlab that yeh ek class a funtion hai not object
        return totalstudents;
    }
    student(){//default constructor jo totalstudents increase krta hai naye object bne pr
        totalstudents++;
    }

};

int student::totalstudents=0;//initialization of static member

// :: this is call scope resolution
//agar koi static member ko access krna hai toh use ya toh <class name>::<member name> or <koi bhi object>.<member name>
int main(){
    student s1;
    student s2;
    student s3;
    cout<<student::totalstudents<<endl;
}