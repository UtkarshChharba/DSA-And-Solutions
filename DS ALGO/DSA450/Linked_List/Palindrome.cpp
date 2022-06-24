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
    struct Node* next;
    Node(int x) { data = x;  next = NULL; }
};
Node* takeinput() {
    int data;
    cin >> data;
    Node* head = NULL, *tail = NULL;
    while(data != -1){
        Node *newNode = new Node(data);
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
Node* middle_element(Node*head){
    Node*fast=head;
    Node*slow=head;
    while(fast && fast->next){
        fast=fast->next->next;
        slow=slow->next;
    }
    return slow;
}
int length(Node*head){
    int size=0;
    while(head){
        head=head->next;
        size++;
    }
    return size;

}
void reverse(Node*head){
    Node*temp=head;
    Node*pre=NULL;
    Node*next=head->next;
    while(temp){
        next=temp->next;
        temp->next=pre;
        pre=temp;
        temp=next;
    }
    return;
}

bool isPalindrome(Node *head){
    int size=length(head);
    Node*middle=middle_element(head);
    cout<<middle->data<<endl;
    if(size%2){
        reverse(middle->next);
        middle=middle->next;
    }
    else{
        reverse(middle);
    }
    Node*temp1=head,*temp2=middle;
    while(temp2){
        if(temp1->data!=temp2->data){
            return 0;
        }
        temp2=temp2->next;
    }
    return 1;

}
    

//.............................................................................................//
int32_t main(){
FIO
Node*head=takeinput();
cout<<isPalindrome(head)<<endl;
return 0;
}
//.............................................................................................//