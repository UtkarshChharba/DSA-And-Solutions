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
#define all(v)                          v.begin(),v.end()
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

void depth_printer(Binary_Tree<int>*root,int deep){
    if(!root){
        return;
    }
    if(deep==0){
        cout<<root->data<<endl;
        return;
    }
    depth_printer(root->left,deep-1);
    depth_printer(root->right,deep-1);
    return;

}

int distance_giver(Binary_Tree<int>*root,int data,int distance){
    if(!root){
        return -1;
    }
    if(root->data==data){
        depth_printer(root,distance);
        return 0;
    }
    int left=distance_giver(root->left,data,distance);
    int right=distance_giver(root->right,data,distance);
    if(left!=-1){
        if(distance-left-1==0){
            cout<<root->data<<endl;
        }
        if(distance-left-2>=0){
            depth_printer(root->right,distance-left-2);
            return left+1;
        }
        return -1;
    }
    if(right!=-1){
        if(distance-right-1==0){
            cout<<root->data<<endl;
        }
        if(distance-right-2>=0){
            depth_printer(root->left,distance-right-2);
            return right+1;
        }
        return -1;

    }
    return -1;

    
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
void print_tree_levelwise(Binary_Tree<int>*root){
        if(!root){
            return;
        }
        queue<Binary_Tree<int>*> pending_node;
        pending_node.push(root);
        pending_node.push(NULL);
        cout<<root->data<<endl;
        while(pending_node.size()){
            Binary_Tree<int>*front=pending_node.front();
            pending_node.pop();
            if(!front){
                cout<<endl;
                if(pending_node.size()){
                    pending_node.push(NULL);
                }
            }
            else{
            if(front->left){
                cout<<front->left->data<<" ";
                pending_node.push(front->left);
            }
            if(front->right){
                cout<<front->right->data<<" ";
                pending_node.push(front->right);
            }
        }
        }
}

//.............................................................................................//
int32_t main(){
FIO
//1 2 3 4 5 6 7 -1 -1 -1 -1 8 9 -1 -1 -1 -1 -1 -1 
/*
BASIC IDEOLOGY
    1.WE ARE ACTUALLY TELLING THE DISTANCE FROM EACH NODE FROM THE TARGET NODE RECURSIVLY
    2.IF DISTANCE -1 SO EITHER WE ARE FURTHER UP THE DISTANCE OR THIS IS NOT A POSSIBLE PATH
    3.SO THE BASE CASE WHEN WE REACH TARGET NODE THEN CALL DEPTH FUNCTION FOR ACTUAL DISTANCE 
    4. AND RETURN 0
    5. SO FOR OHTER NODES WE KNOW THE DISTANCE 
    6.SUPPOSE THE DISTANCE FROM LEFT=1 TO THE TARGET NODE SO DISTANCE FROM CURRENT ROOT=LEFT+1
    7.SO MAKING 2 CHECKS IF LEFT!=-1 (PATH IS POSSIBLE) DISTANCE-LEFT-1==0 THIS THE REQUIRED DISTANCE FROM NODE
    8. AND LASTLY CALLING DEPTH FUNTION FOR DISTANCE-LEFT-2 AND WE ARE MAKING DEPTH FUNCTION FOR ROOT->RIGHT
    9.AT LAST RETURN LEFT+1
    */
Binary_Tree<int>*root=takeinput_levelwise();
int data;cin>>data;
int distance;cin>>distance;
int a=distance_giver(root,data,distance);
return 0;

}
//.............................................................................................//
