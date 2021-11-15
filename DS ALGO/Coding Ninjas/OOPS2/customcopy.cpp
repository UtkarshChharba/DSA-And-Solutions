//THIS IS USED KYUKI cab hum default copy constructor use krte hai toh woh name ko shallow copy krta hai
//to avoid this hum apna copy constructor banate hai
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int strlen(char* given_string)
{
    // variable to store the
    // length of the string
    int length = 0;
    while (*given_string != '\0') {
        length++;
        given_string++;
    }
  
    return length;
}

void strcpy(char* a,char*b){
    while(*b!='\0'){
        *a=*b;
        a++;
        b++;
    }
}
class student{
    private:
    int rollno;

    public:
    char*name;
    student(int rollno,char* name ){
        this->rollno=rollno;
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    student(student const &s){
        this->rollno=s.rollno;
        this->name=new char[strlen(s.name)+1];
        strcpy(this->name,s.name);
    }
    void display(){
        cout<<name<<" "<<rollno<<endl;
    }

};
//.............................................................................................//
int32_t main(){
    char name[]="abcd";
student s1(20,name);
s1.display();
student s2(21,name);
s1.name[3]='k';
s1.display();
s2.display();

return 0;
}
//.............................................................................................//