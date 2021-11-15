#include <bits/stdc++.h>
using namespace std;
#define pi 3.14
#define min(a,b,c) min(a,min(b,c))
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=a;i<b;i--)
class student{
    int age;
    char *name;
    public:
    student(int age,char *name){
        this->age=age;
        //shallow copy 
        //(matlab name(argument) ek pointer hai and uska address hum apne student class wale name mein save kar rhe hai)
        //matlab jab bhi hum doosre input name mein change karenge woh change hamare wale name mein change milenga
        this->name=name;
        //Deep Copy
        this->name=new char[strlen(name)+1];//strlen-for lenght of string and +1 for empty character
        strcpy(this->name,name);//strcpy for copy of string
                //(paste,copy)
    }
    void display(){
        cout<<
    }

};
int main(){
    char name[]="abcd";


}