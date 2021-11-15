#include <bits/stdc++.h>
//KHUD SE LIKHA HAI BHENCHOD
using namespace std;
class polynomial{
    int *data;
    int capacity;
    public:
    polynomial(){
        capacity=5;
        data=new int[5];
    }
    polynomial(polynomial const & p2){
        capacity=p2.capacity;
        data=new int[capacity];
        for(int i=0;i<capacity;i++){
            data[i]=p2.data[i];
        }

    }
    void insert(int a,int b){
        if(a+1>capacity){
            int *newdata=new int[a+1]();
            for(int i=0;i<capacity;i++){
                newdata[i]=data[i];
            }
        capacity=a+1;
        delete[] data;
        data=newdata;
        }
        data[a]=b;
    }
    polynomial operator+(polynomial const & p2){
        int cycle=max(capacity,p2.capacity);
        polynomial p3;
        p3.capacity=cycle;
        p3.data=new int[cycle]();
        for(int i=0;i<cycle;i++){
            p3.data[i]=data[i]+p2.data[i];
        }
        return p3;
        
    }
    polynomial operator-(polynomial const & p2){
        int cycle=max(capacity,p2.capacity);
        polynomial p3;
        p3.capacity=cycle;
        p3.data=new int[cycle];
        for(int i=0;i<cycle;i++){
            p3.data[i]=data[i]-p2.data[i];
        }
        return p3;
    }
    polynomial operator*(polynomial const & p2){
        polynomial p3;
        int cycle=p2.capacity+capacity;
        p3.capacity=cycle;
        p3.data=new int[cycle];
        for(int i=0;i<p2.capacity;i++){
            for(int j=0;j<capacity;j++){
                p3.data[i+j]+=p2.data[i]*data[j];
            }
        }
    return p3; 
    }
    bool operator==(polynomial const & p2){
        if(capacity==p2.capacity){
            for(int i=0;i<capacity;i++){
                if(data[i]!=p2.data[i]){
                    return 0;
                }
            }
            return 1;
        }
        return 0;
    }
    polynomial& operator=(polynomial const & p2){
        capacity=p2.capacity;
        data=new int[capacity]();
        for(int i=0;i<capacity;i++){
            data[i]=p2.data[i];
        }
        return *this;
    }
    void print(){
        for(int i=0;i<capacity;i++){
            if(data[i]){
                cout<<data[i]<<"x"<<i<<" ";
            }
        }
        cout<<endl;
    }



};
int main(){
    int n1,n2;
    cin>>n1;
    vector<pair<int,int> > v1(n1);
    for(int i=0;i<n1;i++){
        cin>>v1[i].first;
    }
    for(int i=0;i<n1;i++){
        cin>>v1[i].second;
    }
    cin>>n2;
    vector<pair<int,int> > v2(n2);
    for(int i=0;i<n2;i++){
        cin>>v2[i].first;
    }
    for(int i=0;i<n2;i++){
        cin>>v2[i].second;
    }
    polynomial p1,p2;
    for(int i=0;i<n1;i++){
        p1.insert(v1[i].first,v1[i].second);
    }
    for(int i=0;i<n2;i++){
        p2.insert(v2[i].first,v2[i].second);
    }
    polynomial p3=p1*p2;
    p3.print();
}
    