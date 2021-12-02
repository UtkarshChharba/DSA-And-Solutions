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
    int distance;//KITNA DISTANCE HAI FROM START
    bool visited;//VISITED HUA KE NHI
    vertice_info(){
        distance=INT_MAX;//INFINITY
        visited=0;
    }
};
int find_min_index(vertice_info* vertice,int n){
    int min_index=-1;
    loop(i,0,n){
        if(!vertice[i].visited And (min_index==-1||vertice[i].distance<vertice[min_index].distance)){
            min_index=i;
        }
    }
    return min_index;

}
void dijstras(int**edge,int n){
    vertice_info*vertice=new vertice_info[n];
    vertice[0].distance=0;
    loop(i,0,n){
        int minindex=find_min_index(vertice,n);
        vertice[i].visited=1;
        loop(j,0,n){
            if(edge[minindex][j]>0 And !vertice[j].visited And vertice[j].distance>vertice[minindex].distance+edge[minindex][j]){
                /*WE ARE ACTUALLY CHECKING KI 
                MININDEX SE J KA RASTA EXIST KRTA
                J IS NOT VISITED AND
                JO PEHLE DITANCE OF START FROM DISTANE[J] THA 
                AND AB DISTANCE[MININIDEX]+EDGE[MININDIEX][J] HAI KONSA KUM HAI USE RAKHLO
                */
                vertice[j].distance=vertice[minindex].distance+edge[minindex][j];
            }
        }
    }

    loop(i,0,n){
        cout<<i<<" "<<vertice[i].distance<<endl;
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
dijstras(edge,n);
return 0;
}
//.............................................................................................//
/*
BASIC APPROACH:-
    STARING POINT SE SHURU KR RHE THAT IS ZERO
    PHIR USE NODES JISSE WOH EDGE SHARE KRTA USKA DISTANCE NIKAL RHE 
    PHIR UN NODES PR JAA RHE AND UNKE PADHOSION KA DISTANCE NIKAL RHE 
    IF DISTANCE MESAUARED FOR A NODE IS MORE IN PREVIOUS CASES OH HUM USE UPDATE BHI KR RHE HAI
    EG 1-3 7
       1-2  3
       2-3   2
       TOH HUM DISTANCE UPDATE KRKE 5 BOL RHE
    AISE KRTE KRTE SAARA GRAPH TRANSVERSE KR RHE
    
IMPLEMENTATION;-
    1.FIRST MAKING A 2D ARRAY OF EDGES OF THE TREE
    2.MAKING A CLASS FOR EACH VERTEX SAVING VISITED=0,DISTANCE=INFINITY;
    3.GOING TO THE ALGO
    4.PEHLE DISTANCE OF START VERTEX FROM START ZERO KRDIYA
    5.THEN GOING IN THE LOOP AND FINDING THE MIN_INDEX PHIR USE USKI AAS PAAS WALI NODES KA DISTANCE NIKAL RHE
    6.AGAR WOH DISTANCE PREVIOUS CALULATED DISTANCE SE KUM AA RHA TOH USE CHANGE KARDO
    7.PHIR IS VERTEX KE SAARE CASES KRNE KE BAAD ISSE VISITED MAAN LIYA
    8.YEH HAR NODE KE LIYE KRNE BAAD WE WOULD MIN DISTANCE FROM START TO EACH NODE

    */