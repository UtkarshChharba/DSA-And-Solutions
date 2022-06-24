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
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* findIntersection(Node* head1, Node* head2)
{
    Node*temp1=head1;
    Node*temp2=head2;
    Node*head=NULL;
    Node*tail=NULL;
    while(temp1 && temp2){
        if(temp1->data==temp2->data){
            Node*temp=new Node(temp1->data);
            if(!head){
                head=temp;
                tail=temp;
            }
            else{
                tail->next=temp;
                tail=temp;
            }
            temp1=temp1->next;
            temp2=temp2->next;
        }
        else if(temp1->data>temp2->data){
            temp2=temp2->next;
        }
        else{
            temp1=temp1->next;
        }
    }
    return head;
}


//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//