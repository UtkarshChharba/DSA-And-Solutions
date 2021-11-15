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
#define infinity                        999999999999999999
#define all(v)                          (v).begin(),(v).end()
#define MOD_DEFINE                      const int MOD = 1e9 + 7;
#define ff first
#define ss second
#define min3(a, b, c) min(c, min(a, b))
#define in insert
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define fps(x,y)                        fixed<<setprecision(y)<<x


class node{
    public:
    int data;
    node *next;
    node(int a){//constructor for intializing the value of node
        this->data=a;
        next=NULL;

    }

};
void print(node * head){
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;//just to preserve the head we can use a temp variable
    }
    cout<<endl;
}




//.............................................................................................//
int32_t main(){
fast
node n1(1);
node n2(2);
node n3(3);
node n4(4);
node n5(5);
node *head=&n1;//head variable ek pointer hai jo n1 ko point krta hai
n1.next=&n2;
n2.next=&n3;
n3.next=&n4;
n4.next=&n5;
print(head);



return 0;
}
//.............................................................................................//