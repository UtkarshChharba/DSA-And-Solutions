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

int leng(node*head){
    int len=0;
    while(head){
        head=head->next;
        len++;
    }
    return len;
}
void reverse(node*head,node*tail){
    if(head==tail){
        return;
    }
    if(head->next==tail){
        tail->next=head;
        return;
    }
    reverse(head->next,tail);
    head->next->next=head;
    head->next=NULL;
}
//.............................................................................................//
int32_t main(){
FIO
w(t){
node*head=takeinput();
int k;cin>>k;
int len=leng(head);
int count=len/k;
vector<pair<node*,node*> > vp;
node*temp=head;
int i=1;
node*head1,*tail1;
while(count){
    if(i==1){
        head1=temp;
    }
    if(i%k==0){
        tail1=temp;
        vp.pb(make_pair(head1,tail1));
        i=0;
        count--;
    }
    temp=temp->next;
    i++;
}
node*danda=NULL;
vp.pb(make_pair(temp,danda));
count=len/k;
loop(i,0,count){
    if(i==0){
        head=vp[i].ss;
    }
    reverse(vp[i].ff,vp[i].ss);
    if(i==count-1){
        vp[i].ff->next=vp[i+1].ff;
    }
    else{
        vp[i].ff->next=vp[i+1].ss;
    }
}
print(head);
}
return 0;
}
//.............................................................................................//