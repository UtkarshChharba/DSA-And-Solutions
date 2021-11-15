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
template<typename T>
void PrintTree(Binary_Tree<T>* root){ 
    if(!root){
        return;
    }
    cout<<root->data<<":";
    if(root->left){
        cout<<"L "<<root->left->data<<" ";
    }
    if(root->right){
        cout<<"R "<<root->right->data<<" ";
    }
    cout<<endl;
    PrintTree(root->left);
    PrintTree(root->right);
    return;

}
pair<int,int> diameter(Binary_Tree<int>*root){
    /*
    in this method we are doig the following things
    Steps:-
        1.WE ARE RETURNING 2 THINGS HEIGHT AND DIAMETER
        2.FIRST IS HEIGHT AND SECOND IS DIAMETER 
        3.SO IF THE ROOT IS NULL WE HAVE 0 DIAMTER AND ZERO HEIGHT
        4.WE GONNA ASSUME THAT WE ARE RETURNED HEIGHT OF THE LEFT AND RIGHT WITH THEIR DIAMTER
        5.SO HEIGHT AND DIAMTER FROM ROOT:-


            HEIGHT=MAX(LEFT_HEIGHT,RIGHT_HEIGHT)+1
            DIAMETER=MAX(LEFT_HEIGHT+RIGHT_HEIGHT,LEFT_DIAMTER,RIGHT_DIAMTER)
    
    
    */
    if(!root){
        return mp(0,0);
    }
    pair<int,int> left=diameter(root->left);
    pair<int,int> right=diameter(root->right);
    return mp(max(left.ff,right.ff)+1,max3(left.ff+right.ff,left.ss,right.ss));
    
}
int height(Binary_Tree<int>*root){
    if(!root){
        return 0;
    }
    int total=max(height(root->left),height(root->right));
    return total+1;
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
        cout<<"Input Data Of Left of"<<front->data<<endl;
        int a;
        cin>>a;
        if(a==-1){
            front->left=NULL;
        }
        else{
            front->left=new Binary_Tree<int>(a);
            pending_queues.push(front->left);
        }
        cout<<"Input Data Of Right of"<<front->data<<endl;
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
/*
IN BETTER APPROACH WE ARE ACTUALLY USING KIND OF DP
IN THIS WE ARE USING PREVIOUS HEIGHT AND DIAMETER TO FIND NEW ONES
SO THE TIME COMPLEXITY DECREASE

*/
Binary_Tree<int>*root=takeinput_levelwise();
pair<int,int> p=diameter(root);
cout<<"Height:"<<p.ff<<endl;
cout<<"Diameter:"<<p.ss<<endl;
return 0;
}
//.............................................................................................//