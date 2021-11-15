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
void insertnode(node*head,int i,int a){
    node*newnode=new node(a);
    int k=0;
    node*temp=head;
    while(k<i-1){
        temp=temp->next;
    } 
    newnode->next=temp->next;
    temp->next=newnode;
     
}
node* takeinput_better(){
    int data;
    node* head=NULL;
    node*tail=NULL;
    cin>>data;
    while(data!=-1){
        node*n=new node(data);
        if(!head){
            head=n;
            tail=n;
        }
        else{
            tail->next=n;
            tail=n;
        }
        cin>>data;

    }
    return head;
}
void print(int a,node* head){
    node*temp=head;
    while(a And temp){
        a--;
        temp=temp->next;
    }
    if(!a){
        cout<<temp->data<<endl;
    }
    else{
        cout<<-1111<<endl;
    }
}

//.............................................................................................//
int32_t main(){
fast
int t;
cin>>t;
while(t--){

node*head=takeinput_better();
int a;
cin>>a;
print(a,head);

}
return 0;
}
//.............................................................................................//