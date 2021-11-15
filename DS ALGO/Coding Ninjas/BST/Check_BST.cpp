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

//FINDING MAXIMUM IN THE WHOLE BINARY TREE
int maximum(Binary_Tree<int>*root){
    if(!root){
        return INT_MIN;
    }
    int maxa=max3(root->data,maximum(root->left),maximum(root->right));
    return maxa;
}
//FINDING MINIMUMIN THE WHOLE BINARY TREE
int minimum(Binary_Tree<int>*root){
    if(!root){
        return INT_MAX;
    }
    int mina=min3(root->data,minimum(root->left),minimum(root->right));
    return mina;
}
//WE ARE CHECKING BST IN THIS TREE
bool check_BST(Binary_Tree<int>*root){
    //AGAR ROOT NULL HAI TOH PAKKA WOH BST TOH HOGA
    if(!root){
        return 1;
    }
    //LEFT MAX FIND KIYA HAI
    int leftMAX=maximum(root->left);
    //RIGHT MIN FIND KIYA HAI
    int rightMIN=minimum(root->right);
    //SO FOR A BST THERE SHOULD BE 2 CONDITIONS THAT ARE:-
    /*
        1.leftmax<root
        2.rightmin>=root
        3.left wala khud bst hona chahiye
        4.right wala khud bst hona chahiye
    */
    return (leftMAX<root->data) And (rightMIN>=root->data) And (check_BST(root->left)) And (check_BST(root->right));


    //2*T[N/2]==(FOR FINDING THE BEFORE BST'S)
    //K*N==(FOR FINDING THE MAX AND MINIMUM)

    
    //TIME COMPLEXIETY=2*T[N/2]+K*N
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
//WE ARE CHECKING BST 
Binary_Tree<int>*root=takeinput_levelwise();
cout<<check_BST(root)<<endl;
return 0;
}
//.............................................................................................//