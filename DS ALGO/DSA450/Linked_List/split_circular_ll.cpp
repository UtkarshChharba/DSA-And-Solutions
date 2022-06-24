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
void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    if(head->next==head){
        *head1_ref=head;
        *head2_ref=NULL;
    }
    Node*temp=head->next;
    int cnt=1;
    while(temp!=head){
        temp=temp->next;
        cnt++;
    }
    temp=head;
    Node*pre=head;
    Node*tail1;
    Node*tail2;
    for(int i=0;i<cnt/2;i++){
        pre=temp;
        temp=temp->next;
    }
    Node*head2;
    if(cnt%2){
        tail1=temp;
        head2=temp->next;
        while(temp->next!=head){
            temp=temp->next;
        }
    }
    else{
        tail1=pre;
        head2=temp;
        while(temp->next!=head){
            temp=temp->next;
        }
    }
    tail2=temp;
    tail1->next=head;
    tail2->next=head2;
    *head1_ref=head;
    *head2_ref=head2;
    return;
}
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//