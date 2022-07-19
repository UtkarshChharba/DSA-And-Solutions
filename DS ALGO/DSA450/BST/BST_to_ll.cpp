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




template<typename T>
class Binary_Tree{
    public:
    T data;
    Binary_Tree<T>*left;
    Binary_Tree<T>*right;
    Binary_Tree(T a){
        data=a;
        left=NULL;
        right=NULL;

    }
    ~Binary_Tree(){
        delete left;
        delete right;
    }

};
struct node{
    int data;
    node*next;
    node(int data){
        this->data=data;
        next=NULL;
    }
};
pair<node*,node*>BST_to_ll(Binary_Tree<int>*root){
    if(!root){
        return {NULL,NULL};
    }
    pair<node*,node*>left=BST_to_ll(root->left);
    pair<node*,node*>right=BST_to_ll(root->right);
    node*temp=new node(root->data);
    node*head=temp;
    node*tail=temp;
    if(left.first){
        left.second->next=temp;
        head=left.first;
    }
    if(right.first){
        temp->next=right.first;
        tail=right.second;
    }
    return {left.first,right.second};

}

//.............................................................................................//
int32_t main(){
FIO
check();
return 0;
}
//.............................................................................................//
