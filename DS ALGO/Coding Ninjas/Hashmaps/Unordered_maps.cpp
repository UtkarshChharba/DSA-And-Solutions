#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=b;i>=a;i--)
#define mod 1000000007
#define endl '\n'
#define pii pair<int, int>
#define w(t) int t;cin>>t;while(t--)
#define mii map<int, int>
#define And &&
#define vi vector<int>
#define Or ||
#define float double
#define pb push_back
#define mp make_pair
#include <map>
#define infinity                        999999999999999999
#define all(v)                          (v).begin(),(v).end()
#define MOD_DEFINE                      const int MOD = 1e9 + 7;
#define ff first
#define ss second
#define min3(a, b, c) min(c, min(a, b))
#define in insert
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define FIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define fps(x,y)                        fixed<<setprecision(y)<<x






//.............................................................................................//
int32_t main(){
FIO
unordered_map<string,int> ourmap;
//insertion
pair<string,int> p("abc",1);
ourmap.insert(p);
/*CAN ALSO BE DONE BY OURMAP["abc"]=1*/

//searching or find
cout<<ourmap["abc"]<<endl;
cout<<ourmap.at("abc")<<endl;
//if suppose the key is not present then:-
//  1.THEN IF DO OUTMAP["CDF"] THEN THIS KEY WILL BE INITIATED WITH VALUE 0(matlab size increase ho gaya hai)
//  2. IF WE DO OUTMAP.AT("CDF") THEN THERE WOULD BE A ERROR KEY DOESNT EXIST

/*
EFFICENT WAY COUNT BE CHECK:-
*/
if(ourmap.count("cdf")){//this could only have 2 values 1 or 0
    cout<<"cdf is present "<<ourmap["cdf"]<<endl;
}
if(ourmap.count("abc")){//this could only have 2 values 1 or 0
    cout<<"abc is present "<<ourmap["abc"]<<endl;
}
//Checking the size 
cout<<ourmap.size()<<endl;

unordered_map<string, int> ourmap1;
ourmap1["abc"] =1;
ourmap1["abc1"]= 2;
ourmap1["abc2"]=3;
ourmap1["abc3"]=4;
ourmap1[ "abc4" ]=5;
ourmap1["abc5"]=6;
//EARSE
ourmap1.erase("abc");
cout<<ourmap1.size()<<endl;

//ITERATOR
/*
FOR UNORDERED_MAP ITERATON CAN BE DONE BY*/
unordered_map<string,int>::iterator it;//this is the syntax meaning:-
//this is a iterator for unordered_map<string,int> named it
// <syntax> <name>

it=ourmap1.begin();//STARTING POINTER OF MAP
while(it!=ourmap1.end()){
    cout<<"Key:"<<it->first<<" "<<"Value:"<<it->second<<endl;
    it++;
}

//FIND USING ITERATOR
unordered_map<string,int>::iterator it1=ourmap1.find("abc1");
//ERASE USING ITERATOR
ourmap1.erase(it1,it1 + 3);//might be single value
ourmap1.erase(it1,it1+3);//might be 2 terms and will erase from it1 to it1+2

return 0;
}
//.............................................................................................//