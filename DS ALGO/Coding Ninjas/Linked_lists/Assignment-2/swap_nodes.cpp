#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define int long long
#define pi (3.141592653589)
#define loop(i,a,b) for(int i=a;i<b;i++)
#define loopb(i,a,b) for(int i=b;i>=a;i--)
#define mod 1000000007
#define endl '\n'
#define w(t) int t;cin>>t;while(t--)
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
    node *next;
    node(int a){//constructor for intializing the value of node
        this->data=a;
        next=NULL;

    }

};

node* takeinput(){
    int data;
    cin>>data;
    node* head=NULL;
    node*tail=NULL;
    while(data!=-1){
        node*newnode=new node(data);
        if(!head){
            head=newnode;
            tail=newnode;
        }
        else{
            tail->next=newnode;
            tail=newnode;
        }
        cin>>data;
    }
    return head;
}

void print(node*head){
    while(head){
        cout<<head->data<<" ";
        head=head->next;
    }
    cout<<endl;
}

//.............................................................................................//
int32_t main(){
FIO
w(t){
node*head=takeinput();
int i,j;
cin>>i>>j;
if(i>j){
    swap(i,j);
}
node*ith_pre,*ith,*ith_next,*jth_pre,*jth,*jth_next;
node*cur=head;
node*pre=NULL;
node*agla=head->next;
int pos=0;
while(cur){
    if(pos==i){
        ith=cur;
        ith_pre=pre;
        ith_next=agla;
    }
    if(pos==j){
        jth=cur;
        jth_pre=pre;
        jth_next=agla;
    }
    if(agla){
    agla=agla->next;
    }
    pre=cur;
    cur=cur->next;
    pos++;
}
if(i!=j){
    if(i==0 And j-i!=1){
        head=jth;
        jth->next=ith_next;
        ith->next=jth_next;
        jth_pre->next=ith;
    }
    else if(i==0 And j-i==1){
        head=jth;
        head->next=ith;
        ith->next=jth_next;
    }
    else if(j-i==1){
        ith_pre->next=jth;
        jth->next=ith;
        ith->next=jth_next;
    }
    else{
        ith_pre->next=jth;
        jth->next=ith_next;
        jth_pre->next=ith;
        ith->next=jth_next;
    }
}
print(head);
}
return 0;
}
//.............................................................................................//