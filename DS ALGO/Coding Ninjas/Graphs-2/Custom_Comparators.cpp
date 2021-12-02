#include <algorithm>
#include <iostream>
#include <vector>
#define loop(i,a,b) for(int i=a;i<b;i++)
using namespace std;

//THIS IS CUSTOM COMPARATOR THAT CAN BE USED TO GET IN VARIOUS STL FUCTIONS
//LIKE THIS IS SET TO A<B MEANING IN THE SORTING 
//THE PREVIOUS VALUE SHOULD BE LESS THEN NEXT
bool compare(int a ,int b){
    return a<b;
}

int main(){
    int n;cin>>n;
    int*a=new int[n];
    loop(i,0,n){
        cin>>a[i];
    }
    vector<int> v(n);
    sort(a,a+n,compare);//THE BASIC SYNTAX IS SORT(A,A+SIZE,<COMAPRATOR>);
    loop(i,0,n){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    loop(i,0,n){
        cin>>v[i];
    }
    sort(v.begin(),v.end(),compare);////THE BASIC SYNTAX IS SORT(A,A+SIZE,<COMAPRATOR>);

    loop(i,0,n){
        cout<<a[i]<<" ";
    }

}