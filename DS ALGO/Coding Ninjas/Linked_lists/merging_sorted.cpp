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
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
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
node* merge_them(node*head1,node*head2){
   node*ll1=head1;
   node*ll2=head2;
   node*newhead_pre=new node(-1);
   node*dummy=newhead_pre;
   while(ll1!=NULL And ll2!=NULL){
       if(ll1->data>ll2->data){
           dummy->next=ll2;
           ll2=ll2->next;
        
       }
       else{
        dummy->next=ll1;
        ll1=ll1->next;
       }
       dummy=dummy->next;
   }
   while(ll1){
       dummy->next=ll1;
       ll1=ll1->next;
       dummy=dummy->next;
   }
   while(ll2){
       dummy->next=ll2;
       ll2=ll2->next;
       dummy=dummy->next;
   }
   return newhead_pre->next;
}
node* merge_Rec(node*head1,node*head2){
    node*result;
    if(head1==NULL){
        return head2;
    }
    if(head2==NULL){
        return head1;
    }
    if(head1->data>head2->data){
        result=head2;
        result->next=merge_Rec(head1,head2->next);
    }
    else{
        result=head1;
        result->next=merge_Rec(head1->next,head2);
    }
    return result;
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
fast
node*head1=takeinput();node*head2=takeinput();
node*newhead=merge_Rec(head1,head2);
print(newhead);
return 0;
}
//.............................................................................................//