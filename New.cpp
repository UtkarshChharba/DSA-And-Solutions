#include <bits/stdc++.h>
#include <vector>
using namespace std;
#define tl(v, size)                \
    for (int i = 0; i < size; i++) \
    {                              \
        cout << v[i] << ' ';       \
    }                              \
    cout << endl
#define int long long
#define pi (3.141592653589)
#define loop(i, a, b) for (int i = a; i < b; i++)
#define loopb(i, a, b) for (int i = b; i >= a; i--)
#define mod 1000000007
#define endl '\n'
#define pii pair<int, int>
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define mii map<int, int>
#define And &&
#define vi vector<int>
#define Or ||
#define float double
#define pb push_back
#define mp make_pair
#include <map>
#define infinity 999999999999999999
#define all(v) (v).begin(), (v).end()
#define MOD_DEFINE const int MOD = 1e9 + 7;
#define ff first
#define ss second
#define min3(a, b, c) min(c, min(a, b))
#define in insert
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define FIO ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
#define fps(x, y) fixed << setprecision(y) << x
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

node *takeinput()
{
    int data;
    cin >> data;
    node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        node *newNode = new node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}
void print(node *head)
{
    while (head)
    {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}


//.............................................................................................//
int32_t main()
{
FIO
w(t){
    node*head=takeinput();
    node*temp=head;
    int k;cin>>k;
    int count=0;
    node*new_head,*new_list,*new_tail;
    while(temp){
        if(!count){
            new_head=NULL;
            new_tail->next
        }
        node*newnode=new node(temp->data);
        if(!new_head){
            new_head=newnode;
        }
        else{
            newnode->next=new_head;
            new_head=newnode;
        }
        count++;
    }
    

}
    return 0;
}
//.............................................................................................//