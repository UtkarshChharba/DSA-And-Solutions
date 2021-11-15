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
#define FIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define fps(x,y)                        fixed<<setprecision(y)<<x

class node{
    public:

    int data;
    node*next;
    node(int a){
        data=a;
        next=NULL;
    }
};
node* reverserec(node*head){
    if(!(head->next)){
        return head;
    }
    node*temp=reverserec(head->next);
    head->next->next=head;
    head->next=NULL;
    return temp;

node* takeinput(){
    int data;
    cin>>data;
    node*head;
    node*temp=NULL;
    while(data!=-1){
    if(!temp){
            temp=new node(data);
            head=temp;
        }
    else{
    temp->next=new node(data);
    temp=temp->next;
    }
    cin>>data;
    }
    return head;
}
node* reverse(node*head){
    if(!(head->next)){
        return head;
    }
    node*newhead=reverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return newhead;
}
void print(node*head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<" "<<endl;
}
//.............................................................................................//
int32_t main(){
FIO
node*head=takeinput();
node*newhead=reverse(head);
print(newhead);
return 0;
}
//.............................................................................................//