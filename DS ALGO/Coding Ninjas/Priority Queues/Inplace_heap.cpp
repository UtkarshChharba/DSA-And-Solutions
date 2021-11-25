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

void heap_maker_insertion(vi &v,int i){
    int child_index=i;//JUST CONSIDERING A HEAP OF I-1 AND MAKING IT FOR ITH ELEMENT 
    while(child_index>0){
        int parent_index=(child_index-1)/2;
        if(v[parent_index]>v[child_index]){
            swap(v[parent_index],v[child_index]);
        }
        else{
            break;
        }
        child_index=parent_index;
    }
}
void heap_maker_deletion(vi &v,int i){
    swap(v[0],v[i]);//CONSIDRING A HEAP OF ITH ELEMENTS AND REMOVING THE MIN ELEMENT FROM THE TOP
    //AND MAKING THE HEAP FOR I-1 ELEMENTS
    int parent_index=0;
    int left_child=1;
    int right_child=2;
    int min_index=parent_index;
    while(left_child<i){
        if(v[left_child]<v[min_index]){
            min_index=left_child;
        }
        if(right_child<i And v[right_child]<v[min_index]){
            min_index=right_child;
        }
        if(parent_index==min_index){
            break;
        }
        swap(v[min_index],v[parent_index]);
        parent_index=min_index;
        left_child=2*parent_index+1;
        right_child=2*parent_index+2;
    }
}



//.............................................................................................//
int32_t main(){
FIO
int n;cin>>n;
vi v(n);
loop(i,0,n){
    cin>>v[i];
}
loop(i,0,n){
    heap_maker_insertion(v,i);
}
loop(i,0,n){
    heap_maker_deletion(v,n-i-1);
}
loop(i,0,n){
    cout<<v[i]<<" ";
}
cout<<endl;


return 0;
}
/*
BASIC METHOD FOLLOWED IS:-
    STEP ONE MAKE A HEAP INSIDE THE SAME VECTOR ITSELF:-
        FIRST CONSIDER FOR SINGLE ELEMENT HEAP
        THEN ADD A ELEMENT IN THE HEAP AND ADJUST IT IN HEAP USING FUNCTION SIMILAR TO INSERTION
        THE IDEA IS CONSIDERING A INSERTION OF ELEMENT of ith INDEX IN HEAP TILL i-1 ELEMENTS HEAP
        SO A LOOP FOR FULL VECTOR SIZE WILL ADJUST THE VECTOR TO MAKE A HEAP

    STEP REMOVING(ACTUALLY JUST SWAPPING OF ELEMENT WITH END OF THE HEAP THAT IS AT ith INDEX FOR THR LOOP)
        SO BASICALLY REMOVE THE MINIMUM FROM THE HEAP THAT ROOT OF THE HEAP
        HERE REMOVING MEANS THAT WE ARE JUST SWAPPING FIRST ELEMENT WITH LAST ELEMENT OF HEAP THAT iTH FOR LOOP
        NOW FOR US THE ROOT ELEMENT IS NOT ADJUSTED IN HEAP THEN ADJUST IT AS WE DO IN DELETETION AND NOW A HEAP IS CREATED FOR i-1 ELEMENTS
        REPEAT THIS PROCESS FOR WHOLE SIZE OF VECTOR AND REVERSE SORTED VECTOR WILL BE GENERATED FOR US

    */


//.............................................................................................//