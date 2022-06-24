#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define tl(v,size) for(int i=0;i<size;i++){cout<<v[i]<<' ';} cout<<endl
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

struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }

struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        stack<struct Node*> s1;
        stack<struct Node*> s2;
        struct Node*temp1=first;
        struct Node*temp2=second;
        while(temp1){
            s1.push(temp1);
            temp1=temp1->next;
        }
        while(temp2){
            s2.push(temp2);
            temp2=temp2->next;
        }
        int carry=0;
        struct Node*head=NULL;
        while(!s1.empty()  && !s2.empty()){
            struct Node*temp=new struct Node((s1.top()->data+s2.top()->data+carry)%10);
            carry=(s1.top()->data+s2.top()->data+carry)/10;
            if(!head){
                head=temp;
            }
            else{
                temp->next=head;
                head=temp;
            }
            s1.pop();
            s2.pop();
        }
        while(!s1.empty()){
            struct Node*temp=new struct Node((s1.top()->data+carry)%10);
            carry=(s1.top()->data+carry)/10;
            temp->next=head;
            head=temp;
            s1.pop();
        }
        while(!s2.empty()){
            struct Node*temp=new struct Node((s2.top()->data+carry)%10);
            carry=(s2.top()->data+carry)/10;
            temp->next=head;
            head=temp;
            s2.pop();
        }
        if(!carry){
            struct Node* temp=new struct Node(carry);
            temp->next=head;
            head=temp;
        }
    return head;
    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}

//.............................................................................................//