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
#include "Binary_Tree_class.h"
class quad{
    public:
    int mx;
    int mn;
    bool check;
    int height;
};
Binary_Tree<int>* takeinput_levelwise(){
    int a;
    cout<<"Input The root data"<<endl;
    cin>>a;
    if(a==-1){
        return NULL;
    }
    queue<Binary_Tree<int>*> pending_queues;
    Binary_Tree<int>*root=new Binary_Tree<int>(a);
    pending_queues.push(root);
    while(pending_queues.size()){
        Binary_Tree<int>*front=pending_queues.front();
        pending_queues.pop();
        cout<<"Input Data Of Left Of "<<front->data<<endl;
        int a;
        cin>>a;
        if(a==-1){
            front->left=NULL;
        }
        else{
            front->left=new Binary_Tree<int>(a);
            pending_queues.push(front->left);
        }
        cout<<"Input Data Of Right Of "<<front->data<<endl;
        cin>>a;
        if(a==-1){
            front->right=NULL;
        }
        else{
            front->right=new Binary_Tree<int>(a);
            pending_queues.push(front->right);
            
        }


    }
    return root;
}
quad BST(Binary_Tree<int>*root){
    if(!root){
        quad q;
        q.check=1;
        q.height=0;
        q.mn=INT_MAX;
        q.mx=INT_MIN;
        return q;
    }
    quad left=BST(root->left);
    quad right=BST(root->right);
    quad ans;
    ans.mx=max(root->data,max(left.mx,right.mx));
    ans.mn=min(root->data,min(left.mn,right.mn));
    ans.height=max(left.height,right.height);
    if(root->data>left.mx && root->data<=right.mn && left.check&&right.check){
        ans.check=1;
        ans.height=1+max(left.height,right.height);
    }  
    return ans; 
}

//.............................................................................................//
int32_t main(){
FIO
Binary_Tree<int>*root=takeinput_levelwise();
cout<<BST(root).height<<endl;
return 0;
}
//.............................................................................................//