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
Node* middle_element(Node*head,int size){
    for(int i=0;i<size/2;i++){
        head=head->next;
    }
    return head;
}
int size(Node*head){
    int cnt=0;
    while(head){
        head=head->next;
        cnt++;
    }
    return cnt;
}
Node *merge_sort(Node*head,int size){
    if(size==1){
        return head;
    }
    Node*middle=middle_element(head,size);
    Node*left=merge_sort(head,size/2);
    Node*right=merge_sort(middle,size-size/2);
    Node*newhead=NULL;
    Node*newtail=NULL;
    while(left && right){
        Node*selected;
        if(left->data>right->data){
            selected=right;
            right=right->next;
            }
        else{
            selected=left;
            left=left->next;
        }
        if(!newhead){
            newhead=selected;
            newtail=newhead;
        }
        else{
            newtail->next=selected;
            newtail=selected;
        }

        }
        if(left){
            newtail->next=left;
        }
        if(right){
            newtail->next=right;
        }
        return newhead;
    }
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//