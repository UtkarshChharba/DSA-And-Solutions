#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=b;i>=a;i--)
#define mod 1000000007
#define endl '\n'
#define pii pair<int, int>
#define mii map<int, int>
#define And &&
#define vi vector<int>
#define Or ||
#define float double
#define pb push_back
#define mp make_pair
#include <map>
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define in insert
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#include "linked_list.cpp"

//.............................................................................................//
int32_t main(){
//using single iteration(matlab agar hum normally krte to pehle hum size find krte phir hum size ke half tak jaate)
//but for single iteration aisa karo ki jab u move 2 list then u move 1 in again from start
linked_list l;
loop(i,0,10){
    l.push_back(i);
}
int flag=0;
node *cur=l.head,*mid=l.head;
while(cur!=NULL){  //method-1;
    if(flag){
        mid=mid->next;
    }
    flag=1-flag;//even to odd conversion
    cur=cur->next;
}
//(for odd elements yeh  mid de rha hai
//for even elemetns yeh mid+1 de rha hai)
//method 2
//instread of moving on odd times we move cur by 2 and mid by 1
// the for odd element the cur point will end at last element and mid at mid
//for even elements the cur piunt will end at end+1 and mid at mid+1
while(cur!=NULL And cur->next!=NULL){
    mid=mid->next;
    cur=cur->next->next;
}
return 0;
}
//.............................................................................................//