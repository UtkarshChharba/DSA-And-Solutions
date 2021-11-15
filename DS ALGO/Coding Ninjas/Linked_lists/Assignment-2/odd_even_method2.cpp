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
node*odd_even(node*head){
    node*odd_head=NULL,*odd_tail=NULL,*even_head=NULL,*even_tail=NULL;
    while(head){
        if((head->data)%2){
            if(!odd_head){
                odd_head=new node(head->data);
                odd_tail=odd_head;
            }
            else{
                odd_tail->next=new node(head->data);
                odd_tail=odd_tail->next;
            }
        }
    else{
            if(!even_head){
                even_head=new node(head->data);
                even_tail=even_head;
            }
            else{
                even_tail->next=new node(head->data);
                even_tail=even_tail->next;
            }
        }
    node*new_temp=head->next;
    delete head;
    head=new_temp;
    }

    odd_tail->next=even_head;
    return odd_head;
}

//.............................................................................................//
int32_t main(){
FIO
node*head=takeinput();
head=odd_even(head);
print(head);
return 0;
}
//.............................................................................................//