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
    //PRINTING A TREE 
    if(!root){
        return;
    }
    //IF THE ROOT IS NULL SE WE CAN JUST SKIP THIS
    cout<<root->data<<":";//ROOT KA DATA
    if(root->left){
        cout<<"L "<<root->left->data<<" ";//AGAR LEFT HAI TOH USKA DATA
    }
    if(root->right){
        cout<<"R "<<root->right->data<<" ";//AGAR RIGHT HAI TOH USKA DATA
    }
    cout<<endl;
    PrintTree(root->left);//RECURSIVE CALL FOR LEFT TILL ALL LEFT ARE CONSUMED
    PrintTree(root->right);//RECURSIVE CALL FOR RIGHT TILL ALL LEFT ARE CONSUMED
    return;

}
Binary_Tree<int>* takeinput(){//TAKING INPUT FOR TREE
    int a;
    cout<<"Input data of the node"<<endl;
    cin>>a;
    //ROOT KA INPUT
    if(a==-1){
        return NULL;
    }//AGAR INPUT STOP KRNA HAI TOH BS RETURN NULL
    Binary_Tree<int>*root=new Binary_Tree<int>(a);
    Binary_Tree<int>* left=takeinput();
    //ROOT KE LEFT KA INPUT
    Binary_Tree<int>* right=takeinput();
        //ROOT KE LEFT KA INPUT
    root->right=right;
    //CONNECTING LEFT AND RIGHT
    root->left=left;
    return root;
    
}
//.............................................................................................//
int32_t main(){
FIO
/*Binary_Tree<int>*root=new Binary_Tree<int>(1);
Binary_Tree<int>*node1=new Binary_Tree<int>(2);
Binary_Tree<int>*node2=new Binary_Tree<int>(3);

root->left=node1;
root->right=node2;
*/
Binary_Tree<int>*root=takeinput();
//SUPPOSE WE NEED TO MAKE 1
                      // 2  3
//STEPS WOULD BE
/*1.PEHLE TOH 1 KA DATA JAYEGA
2.PHIR 2 KA DATA JAYEGA(LEFT OF 1)
3.PHIR -1 JAYEGA AS KOI LEFT NHI HAI 2 KE
4.PHIR -1 JAYEGA AS KOI RIGHT NHI HAI 2 KE
5.PHIR 3 AS RIGHT OF 1
6.PHIR REPEAT STEP 3,4
*/
PrintTree(root);
delete root;
return 0;
}
//.............................................................................................//