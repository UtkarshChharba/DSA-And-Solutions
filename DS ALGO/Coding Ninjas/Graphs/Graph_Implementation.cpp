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

void print_DFS(int**edge,int n,int st,bool*visited){//DFS
/*
DFS MEANING THAT WE ARE GOING IN THE DEPTH FIRST AS MUCH DEEP WE CAN GO 
AND THEN CHANGING THE DIRECTION*/
    cout<<st<<endl;//PRINTING THE STARTING
    visited[st]=1;//MARKING IT VISITED
    loop(i,0,n){
        if(i==st){//IF IT IS THE SAME VERTICE
            continue;
        }
        if(edge[st][i]==1){//IF A EDGE EXISTS
            if(visited[i]){//IF ALREADY VISITED
                continue;
            }
            else{
                print_DFS(edge,n,i,visited);//PRINT RECUSRIVELY
            }
        }
    }
}

void print_BFS(int**edge,int n,int st,bool*visited){
    cout<<st<<endl;//PRINTING THE START
    visited[st]=1;//MARKING IT VISITED
    queue<int> q;//MAKING A QUEUE
    q.push(st);
    while(!q.empty()){//WHILE QUEUE IS NOT EMPTY
        int front=q.front();//MARKING THE FRONT
        q.pop();
        loop(i,0,n){//FINDING ALL THE NODES THAT HAVE EDGE WITH FRONT
            if(i==front){
                continue;
            }
            if(edge[front][i]==1 And !visited[i]){
                    cout<<i<<endl;//PRINTING THE EDGE NODE
                    visited[i]=1;//MARKED IT VISITED
                    q.push(i);
                }
            }
        }
    }
void DFS(int**edge,int n){
    bool*visited=new bool[n];//MAKING A BOOL ARRAY FOR VISITED
    loop(i,0,n){
    visited[i]=0;
    }
    loop(i,0,n){
        if(!visited[i]){
            print_DFS(edge,n,i,visited);
        }
    }
    delete[] visited;
}
void BFS(int**edge,int n){
    bool*visited=new bool[n];//MAKING A BOOL ARRAY FOR VISITED
    loop(i,0,n){
    visited[i]=0;
    }
    loop(i,0,n){
        if(!visited[i]){
            print_BFS(edge,n,i,visited);
        }
    }
    delete[] visited;

}

void deleting(int**edge,int n){
    loop(i,0,n){
        delete[] edge[i];//deleting all arrays inside array edge
    }
    delete[] edge;//deleting the array edge
}

//.............................................................................................//
int32_t main(){
FIO
int n;//NUMBER OF VERTICES
int e;//NUMBER OF EDGES
cin>>n>>e;
int**edge=new int*[n];
loop(i,0,n){//TOTAL INPUT OF TREE AND ELIMINATING THE GARBAGE
    edge[i]=new int[n];
    loop(j,0,n){
        edge[i][j]=0;
    }
}
loop(i,0,e){//TAKING ALL THE INPUTS FOT THE RELATIONS
    int f,s;
    cin>>f>>s;
    edge[f][s]=1;
    edge[s][f]=1;
}


cout<<"DFS"<<endl;
DFS(edge,n);
cout<<"BFS"<<endl;
BFS(edge,n);
deleting(edge,n);

return 0;
}
//.............................................................................................//
/*
STEPS WHAT ARE DOING:-
FIRST WE TAKE INPUT THE NUMBER OF VERTICES THAT ARE NUMBER IN INCREASING ORDER
    SUPPOSE N=3 THEN VERTICES ARE 1,2,3
THEN WE TAKE INPUT OF NUMBER OF EDGES THAT THE NUMBER OF CONNECTIONS THAT ARE INSIDE THE GRAPH

WE CREATE A MATRIX ARRAY THAT WILL MARK THE POINT WHICH HAVE CONNECTION BETWEEN THEM SUPPOSE THEN 1-2
THEN THE CONNECTIION ARE BE LIKE EDGE[1][2]=1 AND VICE VERSE EDGE[2][1]=1
MATRIX IS LIKE IF N=3
    1  2   3
1   0  1   1
2   0  0   1
3   1  0   0
SO BASICALLY NUMBER OF ROWS=[I] AND COLOUMS[J] AND MARKING ONE MEANING THERE IS A CONNCETION

SO IF THERE ARE e  EDGES THEN THERE ARE E QUERES TAKING f and s as inputs
SO THERE IS A REALTIONSHIP ESTABLISHED BETEWEEN F AND S
SO EDGE[F][S] AND EDGE[S][F]=1

PRINT FUNCTION:-

THE ARGUMENTS ARE-EDGE ARRAY<that tells us the edge relation>,NUMBER OF VERTICES,STATING VERTICE,VISITED VERTICES
FIRST WE PRINT THE STARTING VERTICE AND MARK IT DONE 
THEN WE GO TO THE RELATED VERTICES TO IT AND PRINT THEN AND ALSO MARK THEN DONE RECURSIVELY
*/