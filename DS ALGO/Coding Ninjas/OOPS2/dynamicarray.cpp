#include <iostream>
using namespace std;
class dynamicarray{
    int *data;
    int capacity;
    int nextindex;
    public:
    dynamicarray(){
        data=new int[5];
        capacity=5;
        nextindex=0;
    }
    void add(int a){ 
        if(nextindex==capacity){
            int *newdata=new int[2*capacity];
            for(int i=0;i<capacity;i++){
                newdata[i]=data[i];
            }
            if(!capacity){
                capacity=1;
            }
            else{
            capacity=2*capacity;
            }
            delete[] data;
            data=newdata;
        }
        data[nextindex]=a;
        nextindex++;

    }
    int get(int i){
        if(i<nextindex){
            return data[i];
        }
        else{
            return -1;
        }
    }
    void add(int i,int a){
        if(i<nextindex){
            data[i]=a;
        }
        else if(i==nextindex){
            add(a);
        }
        else{
            return;
        }
    }

};
