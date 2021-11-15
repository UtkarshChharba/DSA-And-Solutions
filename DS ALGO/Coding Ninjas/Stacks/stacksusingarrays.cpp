#include <bits/stdc++.h>
#include <vector>
using namespace std;
class stacks{
    int *data;
    int nextindex;
    int capacity;
    public:
    stacks(){
        data=new int[4];//Setting a Pointer Of the Given Size for the array
        nextindex=0;//JAHA PE INsertion hoga
        this->capacity=4;//setting the size 

    }

    int sizeis(){
        return nextindex;//next index also tells us the size
        //As agar insertion 0th index pr hai toh usse pehle size bhi 0 rha hoga
    }
    bool isempty(){

        return nextindex==0;
    
    }
    void push(int a){
        if(capacity==nextindex){//Agar Capacity tak elements hai toh nothing to display
            cout<<"STACK IS FULL"<<endl;
            return;
        }
        data[nextindex++]=a;//pehle data[nextindex]=a then nextindex++;
    }
    void dynamic_push(int a){
        if(capacity==nextindex){//agar size full hogaya
            if(capacity){//first checked ki capacity!=0
                int*newdata=new int[2*capacity];//ek nayi array banayi with 2*capacity
                for(int i=0;i<capacity;i++){
                    newdata[i]=data[i];//copied all data of previous array to new array
                }
                delete[] data;//purani ko deallocate kr diya
                data=newdata;//purani ke pointer ko naye pr point kra diya
                capacity=2*capacity;
            }
            else{
                capacity=1;//agar capacity pehle 0 thi toh usse 1 kiya hai
                int*newdata=new int[capacity];//allocation
                newdata[0]=data[0];//data copy
                delete[] data;//diallocation
                data=newdata;//pointer to point to this array
            }
        }
        data[nextindex++]=a;
        return;
    }
    int pop(){
        nextindex--;
        if(nextindex){
        return data[nextindex];
        }
        cout<<"STACK IS EMPTY";//agar nextindex==0 then stack is empty so koi data nhi
        return INT_MIN;
    }
    int top(){
        if(isempty()){//Agar stack empty hai toh nothing to displat
            cout<<"NA BHAI KHALI AA "<<endl;
            return -1;
        }
        return data[nextindex-1];
    }

};
//.............................................................................................//
int32_t main(){
stacks s;
s.dynamic_push(10);
s.dynamic_push(20);
s.dynamic_push(30);
s.dynamic_push(40);
s.dynamic_push(50);
cout<<s.top()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.pop()<<endl;
cout<<s.sizeis()<<endl;
cout<<s.isempty()<<endl;
return 0;
}
//.............................................................................................//