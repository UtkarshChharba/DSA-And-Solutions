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
    Node* left;
    Node* right;
};

void inorder(Node*root){
    stack<Node*> s;
    Node*temp=root;
    while(!s.empty() || temp){
        if(temp){
            s.push(temp);
            temp=temp->left;
        }
        else{
            temp=s.top();
            s.pop();
            cout<<temp->data<<" ";
            temp=temp->right;
        }

    }
}
void preorder(Node*root){
    stack<Node*> s;
    Node*temp=root;
    while(!s.empty()||temp){
        if(temp){
            cout<<temp->data<<" ";
            s.push(temp);
            temp=temp->left;
        }
        else{
            temp=s.top();
            s.pop();
            temp=temp->right;
        }
    }
}
void postorder(Node*root){
    stack<Node*> s;
    stack<int> out;
    s.push(root);
    while(!s.empty()){
        Node*temp=s.top();
        out.push(temp->data);
        if(temp->left){
            s.push(temp->left);
        }
        if(temp->right){
            s.push(temp->right);
        }
        s.pop();
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