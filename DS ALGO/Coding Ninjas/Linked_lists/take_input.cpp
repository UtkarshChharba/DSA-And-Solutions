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
node* takeinput(){
    int data;
    node* head=NULL;
    cin>>data;
   ///// //Method-1;/////
    // while(data!=-1){
    //     node*n=new node(data);
    //     if(!head){//head ko intiate karo first node se
    //         head=n;
    //     }
    //     if(!temp){//jab temp null ho tab usse head se initiate kr dena
    //         temp=head;
    //     }
    //     else{
    //         temp->next=n;//temp previous node ka address rakhta hai so pehle previous node ko current node ka address do
    //         temp=n;//temp ko ab current node bna do
    //     }
    // cin>>data;
    // }
    //METHOD-2 
    while(data!=-1){
        node*n=new node(data);
        if(!head){
            head=n;
        }
        else{
            node*temp=head;//pehle ek temp variable banaya jo head ka address rakhe
            while(temp->next){//temp ko aage bhadaya jb tak uske next mein koi address na bache
                temp=temp->next;//temp ko aage bhadaya
            }
            temp->next=n;//temp ko address de diya
        }
    cin>>data;
    }
    return head;//return head karo

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
void print(node * head){
    node *temp=head;
    while(temp){
        cout<<temp->data<<" ";
        temp=temp->next;//just to preserve the head we can use a temp variable
    }
    cout<<endl;
}
int length(node*head){
    node *temp=head;
    if(!head){
        return 0;
    }
    int l=1;
    while(temp->next!=NULL){
        l++;
        temp=temp->next;
    }
    return l;
}





//.............................................................................................//
int32_t main(){
fast
node* head=takeinput_better();
cout<<length(head)<<endl;
return 0;
}
//.............................................................................................//