//MST==Minimum Spanning Tree

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

class edge{//EDGE CLASS
    public:
    int source;
    int dest;
    int weight;
};
int find_parent(int v,int*parent){//FUNCTION TO FIND PARENT
    if(v==parent[v]){
        return v;
    }
    return find_parent(parent[v],parent);
}
void kruskals(edge*input,edge*output,int n){
    int*parent=new int[n];//PARENT ARRAY
    loop(i,0,n){
        parent[i]=i;
    }
    int count=0;//COUNT TILL N-1 ELEMENTS ARE NOT INSERTED IN OUPUT ARRAY
    int i=0;//MAINTAING INDEX FOR INPUT
    while(count<n-1){
        int p1=find_parent(input[i].source,parent);
        int p2=find_parent(input[i].dest,parent);
        if(p1!=p2){//IF PARENTS ARE NOT SAME
            output[count]=input[i];//OUTPUT MEIN INPUT WALA EDGE
            parent[p1]=p2;//PARENT UPDATE 
            count++;//COUNT INCREASE
        }
        i++;
    }
}

bool compare(edge a,edge b){//CUSTOM COMPARATOR
    return a.weight<b.weight;
}
//.............................................................................................//
int32_t main(){
FIO
int n,e;cin>>n>>e;
edge*input=new edge[e];
loop(i,0,n){
    int s,d,w;
    cin>>s>>d>>w;
    input[i].source=s;
    input[i].dest=d;
    input[i].weight=w;
}
sort(input,input+e,compare);
edge *output=new edge[n-1];
kruskals(input,output,n);

loop(i,0,n-1){
    cout<<output[i].source<<" "<<output[i].dest<<" "<<output[i].weight<<endl;
}
return 0;
}
//.............................................................................................//
/*
FIRSLY AT LAST THIS WAS DONE

METHODOLOGY:-
    WE NEED TO FIND ALL THE EDGES WITH MINIMUM WEIGHT AND NOT MAKING ANY CYCLES
    SO FOR N VERTICES MINIMUM NUMBER OF EDGES REQUIRED ARE N-1
    WE HAVE E QUERIES FOR EDGES E>=N 
    SO BASICALL WE NEED TO ACCEPT ALL EDGES IN INCREASING ORDER AND-
    ALSO LEAVING ALL THE EDGES THAT CONNECT THE VERTICES THAT LAREADY HAVE A PATH
    MATLAB BASICALLY CYLCES AVOID KRNE HAI
    SO WE ARE USING "UNION FIND" METHOD

UNION FIND METHOD:-
    SO BASICALLY HAR EK NODE KA HUM EK PARENT SAVE KR RHE HAI
    STARTING MEIN PARENT SAME HOGA BAAD MEIN CHANGE HOGA(AFTER INSERTION OF EDGE)
    SUPPOSE 1,2 2,3 4,3 1,4 HAI
    STEPS:-
        1 AND 2 KA PARENT 1
        2 AND 3 KA PARENT 1 (AS 2 KA 1 HAI)
        3 AND 4 KA PARENT 1 (AS 3 KA 1 HAI)
        1 AND 4 KA PARENT ALREADY SAME HAI TOH LINK NHI BN SKTA

IMPLEMENTATION:-
1.MAKING A CLASS EDGE HAVING START END AND WEIGHT OF A EDGE 
2.SAVING IT IN A INPUT ARRAY
3.NOW SORTING THAT ARRAY ON THE BASIS OF WEIGHT USING CUSTOM COMPARATOR
4.MAKING A PARENT ARRAY THAT WILL HAVE PARENT OF EACH NODE
5.NOW GOING INSIDE THE ALSO
6.MAINTAING A COUNT=0 AND I=0
7.ITERATING IN THE INPUT ARRAY
8.THERE CAN ONLY BE 2 CASES PARENT SAME HAI YA NHI 
9.IF SAME THEN PASS AND IF NOT THEN INSERT IT IN OUTPUT ARRAY
10.WE ARE FINDING PARENT USING CUSTOM PARENT FUNTIION AS GOINT TILL PARENT_START !=PARENT[PARENT_START]

TIME COMPLIETY:-
    1.TAKE INPUT O(E)
    2.SORTING O((E)LOG(E))
    3.ALGORITHM:-
        UNION FIND=O(V) V=VERTICES E=EDGES
        ITERATION=O(EV) THAT IN WORST CASE WE NEED TO FIND PARENT FOR EACH CASE
    O(ELOGE+EV)

    

*/