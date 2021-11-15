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


//TRIO IS 3 TERMS CLASS THAT CONTAINS 3 INFO FOR A NODE THAT IS THAT A BST
//ITS MAX AND MIN AND IS_BST
class Trio{
    public:
    bool is_BST;
    int minimum;
    int maximum;
};
Trio is_BST_better(Binary_Tree<int>*root){
    if(!root){
        //AGAR ROOT NULL HAI TOH INTIATING THE TRIO VALUES
        Trio t;
        t.is_BST=1;
        t.maximum=INT_MIN;
        t.minimum=INT_MAX;
        return t;
    }
    Trio left=is_BST_better(root->left);//LEFT KA TRIO DATA
    Trio right=is_BST_better(root->right);//RIGHT KA TRIO DATA
    Trio t;
    t.maximum=max3(root->data,left.maximum,right.maximum);//MAXIMUM FOR THIS NODE
    t.minimum=min3(root->data,left.minimum,right.minimum);//MINIMUM FOR THIS NODE
    t.is_BST=(root->data>left.maximum) And (root->data<=right.minimum) And left.is_BST And right.is_BST;
    //IS_BST FOR THIS NODE
    return t;

    //TIME COMPLEXIETY=O(N)
    //T(N)=2*T(N)
}
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

//.............................................................................................//
int32_t main(){
FIO
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1 
Binary_Tree<int>*root=takeinput_levelwise();
cout<<is_BST_better(root).is_BST<<endl;
return 0;
}
//.............................................................................................//