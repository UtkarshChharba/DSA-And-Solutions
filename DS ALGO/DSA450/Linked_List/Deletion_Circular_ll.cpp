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

void deleteNode(struct Node **head, int key)
{
    struct Node*temp=*head;
    struct Node*pre=NULL;
    struct Node*next=temp->next;
    bool first=0;
    while(temp!=*head || !first){
        first=1;
        if(temp->data==key){
            pre->next=next;
            temp=next;
            next=temp->next;
        }
        else{
            pre=temp;
            temp=next;
            next=temp->next;
        }
    }
}

/* Function to reverse the linked list */
void reverse(struct Node** head_ref)
{
    struct Node*temp=*head_ref;
    struct Node*pre=NULL;
    struct Node*next=temp->next;
    bool first=0;
    while(temp!=*head_ref || !first){
        first=1;
        next=temp->next;
        temp->next=pre;
        pre=temp;
        temp=next;
    }


}

//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//