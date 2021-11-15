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
class pair1{
    public:
    node*head;
    node*tail;
};

node* takeinput() {
    int data;
    cin >> data;
    node* head = NULL, *tail = NULL;
    while(data != -1){
        node *newNode = new node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
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
pair1 reverse_rec_better(node* head){
    if(head==NULL Or head->next==NULL){
        pair1 ans;
        ans.head=head;
        ans.tail=head;
        return ans;
    }
    pair1 newans=reverse_rec_better(head->next);
    newans.tail->next=head;
    head->next=NULL;
    newans.tail=head;
    return newans;

}
node* reverse_rec_better2(node* head){
    if(head==NULL Or head->next==NULL){
        return head;
    }
    node* newans=reverse_rec_better2(head->next);
    head->next->next=head;
    head->next=NULL;
    return newans;

}
//.............................................................................................//
int32_t main(){
fast
node*head=takeinput();
node* newhead=reverse_rec_better2(head);
print(newhead);
return 0;
}
//.............................................................................................//