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
#include <unordered_map>
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};

Node* cloneGraph(Node* node) {
        queue<Node*> q;
        Node*parent=new Node(node->val);
        unordered_map<Node*,Node*> mp;
        mp[node]=parent;
        queue<Node*> q;
        q.push(node);
        while(q.size()){
            Node*front=q.front();
            q.pop();
            for(auto i:front->neighbors){
                if(!mp.count(i)){
                    Node*neigh=new node(i->val);
                    mp[i]=neigh;
                }
                mp[front]->neighbors.push_back(neigh);
                q.push(i);
            }
        }
        return parent;
    }
Node* solve(Node* node,unordered_map<Node*,Node*> &vis){
    if(!node){
        return NULL;
    }
        Node* clone=new Node(node->val);
        vis[node]=clone;
        for(auto it:node->neighbors){
            if(!vis.count(it)){
                Node* next=solve(it,vis);
                clone->neighbors.push_back(next);
            }
            else clone->neighbors.push_back(vis[it]);
        }
        return clone;
    }
    Node* cloneGraph(Node* node) {
        if(!node)return NULL;
        if(node->neighbors.size()==0) {
            Node* clone = new Node(node->val);
            return clone;}
        unordered_map<Node*,Node*> vis;
        return solve(node,vis);
    }   
//.............................................................................................//
int32_t main(){
FIO
w(t){


}
return 0;
}
//.............................................................................................//