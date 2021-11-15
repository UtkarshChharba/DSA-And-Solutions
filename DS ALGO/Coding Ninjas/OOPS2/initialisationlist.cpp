#include <bits/stdc++.h>
#include <vector>
using namespace std;
class student{
    int age;
    public:
    int &x;
    int const rollno;//agar default constructor use krenge toh error ayega as there is no point
    //setting a garbage value in constant variable
    /* student(int rollno){
        this->rollno=rollno;         //yeh bhi galat hai as rollno pehle intialize ho chuka hai agar nhi hua hota toh int rollno likhte
                                    //so yeh bhi galat hai*/


    student(int r,int age): rollno(r),age(age),x(this->age){}//yeh ek intialized list hai
    //is expression ka matlab jab yeh variables intilize ho tb yeh values inme daal dena
    // age(age) this nhi use kiya becoz obvious hai class vale ki daal rhe honge
    // x wale ke liye this use krna chahiye
};
int main(){
    student s1(10,20);
}
