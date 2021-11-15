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
    int age;
    public:
    char *name;
    student(student const &s){
        this->age=s.age;//we can access s.age while it is private 
        //this is becoz a class object can access private memebers of other object inside the class
        
        this->name=new char[strlen(s.name)+1];
        strcpy(this->name,s.name);

        }
    student(int age,char *name){
        this->age=age;
        this->name=new char[strlen(name)+1];
        strcpy(this->name,name);
    }
    void display(){
        cout<<age<<" "<<name<<endl;;
    }
};
int main(){
    char name[]="abcd";
    student s1(20,name);
    name[3]='e';
    student s2(s1);
    s1.display();
    s2.display();

}