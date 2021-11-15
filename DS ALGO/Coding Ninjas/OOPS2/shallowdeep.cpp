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
class students{
    private:
    int age;
    char*name;
    public:
    students(int age,char* name){
        this->age=age;
        //Shallow Copy
        this->name=name;
        /*matlab hai ki as name is passed as pointer toh
        agar hume object ke name ko same pointer de diya toh change
        in any value of this pointer will result in change of value of this name
        */
       //remember in the case of char/string pointer if cout<<(<pointer>) krte hai toh character ya string hi pass ho jata
        //hai

        //DEEP COPY
        this->name=new char[strlen(name)+1];//+1 as strlen return length of char but we need an extra null character 
        strcpy(this->name,name);//isne copy kr diya hai vro
        
    }
    void display(){
        cout<<name<<' '<<age<<endl;
    }
};
//.............................................................................................//
int32_t main(){
    char name[]="abcd";
    students s1(10,name);
    s1.display();
    name[3]='e';
    students s2(21,name);
    s2.display();
    s1.display();
    

return 0;
}
//.............................................................................................//