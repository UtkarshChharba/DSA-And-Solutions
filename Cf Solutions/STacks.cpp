#include <bits/stdc++.h>
using namespace std;
class stacks{
    int top=-1,a[1000];
    int size=1000;
    public:
    void push(int x){
        if(top==size-1){
            cout<<"AB BS HOGAYA"<<endl;
        }
        else{
            a[++top]=x;
        }
    }
    void pop(){
        top--;
    }
    int topa(){
        if(top==-1){
            cout<<"KHALI HAI VRO"<<endl;
            return -1;
        }
        else{
            return a[top];
        }
    }
    int length(){
        return (top+1);
    }
    bool empty(){
        return(top==-1);
    }
    void clear(){
        top=-1;
    }

};
int main(){
    stacks a1;
    a1.push(1);
    a1.push(3);
    a1.push(4);
    a1.push(5);
    a1.push(6);
    cout<<a1.length()<<" "<<a1.topa()<<endl;
    a1.pop();
    cout<<a1.length()<<" "<<a1.topa()<<endl;


}