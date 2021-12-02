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


class vertice_info{
    public:
    bool visited;
    int weight;
    int parent;
    vertice_info(){
        visited=0;
        weight=INT_MAX;
        parent=-1;
    }
};
int FindMin(vertice_info*vertice,int n){
    /*
    WE ARE STARTING THE MIN_INDEX FROM ONE AS:-
    PEHLE TOH SAARON KE WEIGHT HI INFINITY HONGE BESIDE 0
    TOH AGAR HUM ZERO SE START KRE TOH JB BHI CODNTION BNEGI KI ITH NOT VISITED TOH 
    ITH KA WEIGHT WILL BE COMAPRED TO 0TH JO KABHI HIT NHI HOGA AS WEIGHT OF OTH=0 WHICH IS ALREADY MIN
    SO WE STARTED FROM -1 KI JB BHI PEHLI BAAR NOT VISITED WALI CONDTION HIT HO TOH MIN_VERTEX=I KI YAHA SE COMARISIONS START HO
    ISLIYE HUM MIN_INDEX=-1 PASS KR RHE MATLAB AGAR KO BHI 
    */
    int min_vertex=-1;
    loop(i,0,n){
        if(!vertice[i].visited And (min_vertex==-1||vertice[min_vertex].weight>vertice[i].weight)){
            min_vertex=i;
        }
    }
    return min_vertex;
}
void prims(int**edge,int n){
    vertice_info*vertice=new vertice_info[n];//MAKING A VERTICE ARRAY
    vertice[0].weight=0;//MARING THE WEIGHT OF 0TH AS ZERO
    loop(i,0,n){
        int minVertex=FindMin(vertice,n);//FINDING THE MINIMUM VERTEX
        vertice[minVertex].visited=1;//MARKING OUR VERTEX AS VISITED
        loop(j,0,n){
            //FINDING A VERTEX->HAVE A EDGE WITH MINVERTEX
            //NOT VISITED,
            //WEIGHT IS MORE THAN ACHIEVED FROM MINVERTEX
            if(edge[minVertex][j]>0 And !vertice[j].visited And vertice[j].weight>edge[minVertex][j]){
                vertice[j].parent=minVertex;//CHANGING THE WEIGHT
                vertice[j].weight=edge[minVertex][j];//CHANING THE PARENT
            }
            /*
            HUM ISME HAMESHA CHECK KR RHE KI KABHI VISITED KE SAATH COMPARISIONS NA HO
            AS AGAR USKE SAATH HUE TOH O KE SAATH BHI KREGA WHICH WILL DISRUPT THE WHOLE GRAPH AS
            ZERO KA PARENT BHI -1 HAI AND WEIGHT BHI ZERO*/
        }
    }
    loop(i,1,n){//PRINT STATEMENT 
        cout<<min(vertice[i].parent,i)<<" "<<max(vertice[i].parent,i)<<" "<<vertice[i].weight<<endl;//PRINT THE MIN FIRST
    }
}
//.............................................................................................//
int32_t main(){
FIO
int n,e;cin>>n>>e;
int**edge=new int*[n];
loop(i,0,n){
    edge[i]=new int[n];
    loop(j,0,n){
        edge[i][j]=0;   
    }
}

loop(i,0,e){
    int a,b,w;
    cin>>a>>b>>w;
    edge[a][b]=w;
    edge[b][a]=w;
}
prims(edge,n);
return 0;
}
//.............................................................................................//
/*
METHODOLOGY:-
    FIRST WE ARE ASSUMING EVERY NODE HAVE ITS WEIGHT AND PARENT
    SO WE ARE MAINTAING 3 THINGS HAS IT BEEN VISITED,ITS WEIGHT,AND PARENT
    SO INTIALLY -1 IS ASSUMMED AS PARENT,WEIGHT=INFINITY,NOT VISITED
    NOW WE ARE MAKING NODE ZERO PARENT=-1 AND WEIGHT =0;
    FINDING ALL NODES WITH RESPECT TO IT 
    IF WEIGHT OF A NODE IS MORE THAN THE WEIGHT FOUND BY USING A NODE SPEPRATED BY IT WITH A EDGE 
    WE CHANGE THE PARENT AND WEIGHT FOR THAT SPECFIC NODE
    WE ARE BASICALLY USING THE GREEDY APROACH

IMPLEMENTATION;-
    1.FIRST MAKING A 2D ARRAY OF EDGES OF THE TREE
    2.MAKING A CLASS FOR EACH VERTEX SAVING VISITED,PARENT,WEIGHT;
    3.GOING TO THE ALGO
    4.MAKING ARRAY OF THE CLASS VERTICES WITH EACH VERTEX SIGNIFIED BY THE INDEX
    5.MARKING ZERO VERTICE AS PARENT -1 AND WEIGHT 0
    6.GOING TO THE LOOP AND FINFING THE MINIMUM VERTICE 
    (MINIMUM MATLAB ASI NODE JISKA ABHI WEIGHT MINIMUM CHAL RHA) 
    CONDITIONS FOR A NODE TO BE MINIMUM NODE ARE :-
        NOT VISITED AND MINIMUM WEIGHT
    7.IF WE FOUND THE MINIMUM WEIGHT VERTICE(V1) THEN FIND THE NOT VISITED VERTICES(V2) ATTACHED TO IT WITH EDGE
    8.IF THE WEIGHT IS MORE OF THE VERTICE(V2) FOUND CHANGE THE WEIGHT AND MAKE THE VERTICE(V2) PARENT AS V1
    9.REPEAT THIS PROCESS TILL ALL NODES ARE VISITED


*/