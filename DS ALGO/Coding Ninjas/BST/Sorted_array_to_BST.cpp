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


void preorder(Binary_Tree<int>*root){
    if(!root){
        return;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
    return;

}

Binary_Tree<int>* BST_maker(int a[],int start,int end){
    int mid=start+(end-start)/2;
    //HUMNE MID FIND KIYA HAI JISSE ROOT BANAYENGE
    //AND AGAR BASE CASE HOGA TOH MATLAB US NODE KE AAGE NULL HAI
    if(start>end And start>=0){
        return NULL;
    }
    //LEFT SIDE AND RIGHT SIDE APNA NODE DEGA
    Binary_Tree<int>*root=new Binary_Tree<int>(a[mid]);
    root->left=BST_maker(a,start,mid-1);//LEFT SIDE KHUD KA BST BNA LEGI
    root->right=BST_maker(a,mid+1,end);//RIGHT SIDE KHUD KA BST BNA LEGI
    //HUME BAS INHE CONNECT KRKE ROOT RETURN KRNA HAI
    return root;
}
Binary_Tree<int>* Sorted_array_to_BST(int a[],int size){

    return BST_maker(a,0,size-1);
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
int n;
cin>>n;
int a[n];
loop(i,0,n){
    cin>>a[i];

}
Binary_Tree<int>*root=Sorted_array_to_BST(a,n);
preorder(root);
cout<<endl;
//In this we were find that element is in the tree of not

return 0;
}
//.............................................................................................//