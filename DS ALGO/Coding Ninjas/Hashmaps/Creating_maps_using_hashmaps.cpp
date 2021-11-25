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

template<typename V>
class Mapnode{
    //THIS IS BASICALLY A CLASS WHICH WILL BE USED FOR LL
    //THIS HAVE NEXT,VALUE AND KEY
    public:
    V value;
    string key;
    Mapnode* next;
    Mapnode(string key,V value){
        this->value=value;
        this->key=key;
        next=NULL;
    }
    ~Mapnode(){//THIS WILL DELETE THE WHOLE LL
        delete next;
    }
};
template<typename V>
class ourmap{
    Mapnode<V>**bucket;//THIS IS BUCKET ARRAY POINTER WHICH HAVE Mapnode<V>* DATA TYPE
    int count;//TOTAL ELEMENTS IN THE BUCKET
    int numbuckets;//TOTAL SIZE OF THE BUCKET ARRAY
    public:
    ourmap(){
        count=0;
        numbuckets=5;
        bucket=new Mapnode<V>*[numbuckets];//INTIATION OF THE BUCKET ARRAY
        loop(i,0,numbuckets){
            bucket[i]=NULL;//MAKING EVERY ELEMENT OF THE BUCKET ARRAY NULL
        }
    }
    private:
    int getbucketindex(string key){//FUNCTION TO MAKE A STRING TO BUCKET INDEX
        int hashcode=0;
        int current_coeff=1;
        loopb(i,0,key.length()-1){//A BACKWARD LOOP FOR ITERATING FORM LAST TO FIRT ELEMENT OF STRING
            hashcode+=(key[i]*current_coeff)%numbuckets;//MAKING HASHCODE(INDEX)
            current_coeff*=37;
            current_coeff=current_coeff%numbuckets;//TAKING REMAINDER AT EACH STEP TO PREVENT NUMBER FROM BECOING VERY BIG
        }
        return hashcode%numbuckets;
    }
    public:
    void rehash(){//DOES THE REHASHING FOR US
        Mapnode<V>**temp=bucket;//MAKING A TEMP THAT WILL REPLACE THE BUCKET ARRAY
        bucket=new Mapnode<V>*[2*numbuckets];//UPDATING THE BUCKET ARRAY
        int old_numbuckets_size=numbuckets;//SAVING THE SIZE OF OLD ARRAY
        numbuckets*=2;//UPDATING THE ARRAY SIZE
        count=0;//COUNT MAKING ZERO AS WHOLE SYSTEM HAS BEEN RESET AND EVERY DATA WILL
        //BE REINSERTED IN THE ARRAY
        loop(i,0,old_numbuckets_size){//ITERATING OVER THE ARRAY
            Mapnode<V>*head=temp[i];
            while(head){//ITERATING OVER THE LL
                insert(head->key,head->value);//INSERTING THE KEY AND VALUE IN THE ARRAY
                //THIS FUNTION WILL AUTOMATICALLY WORK AS WE HAVE RESET THE WHOLE ARRAY WITH 2*SIZE ONE
                head=head->next;
            }
        }
        loop(i,0,old_numbuckets_size){//DELETE THE OLD ARRAY
            Mapnode<V>*head=temp[i];
            delete head;//DELETING THE LL AT EACH INDEX
        }
        delete[] temp;//DELETING THE ARRAY
    }
    ~ourmap(){
        loop(i,0,numbuckets){
            delete bucket[i];//DELETE EVERY LL AT EACH INDEX
        }
        delete[] bucket;//DELETING THE ARRAY
    }
    int size(){
        return count;
    }
    void insert(string key,V value){
        int bucket_index=getbucketindex(key);//FINDING THE INDEX FOR THAT STRING 
        Mapnode<V>*head=bucket[bucket_index];//FINDING HEAD FOR LL AT THE BUCKET_INDEX
        while(head!=NULL){
            if(head->key==key){//IF KEY ALREADY EXIST THEN JUST UPDATE THE VALUE AND RETURN
                head->value=value;
                return;
            }
        }
        head=bucket[bucket_index];//KEY ALREAD DOESNT EXIST
        Mapnode<V>* node=new Mapnode<V>(key,value);//SO NOW JUST UPDATING THE HEAD
        node->next=head;
        bucket[bucket_index]=node;
        count++;//INCREASING THE COUNT
        double load_factor=(1.0*count)/numbuckets;
        if(load_factor>0.7){
            rehash();
        }
    }
    V delete_data(string key){
        int bucket_index=getbucketindex(key);
        Mapnode<V>*head=bucket[bucket_index];
        Mapnode<V>*pre=NULL;
        while(head){
            if(head->key==key){//IS KEY IS FOUND
                if(!pre){//SUPPOSE THE KEY IS HEAD
                    bucket[bucket_index]=head->next;//JUST UPDATE THE HEAD
                }
                else{
                    pre->next=head->next;//UPDATE THE PRE TO HEAD->NEXT
                }
            V value=head->value;//SAVE THE VALUE OF HEAD TO RETURN
            head->next=NULL;//MAKE HEAD->NEXT NULL TO PREVENT DISTRUCTOR TO DESTROY ALL LL
            count--;
            delete head;
            return value;
            }
        pre=head;
        head=head->next;
        }
    return 0;//IF SUCH KEY IS NEVER FOUND
    }
double getloadfactor(){
    return (1.0*count)/numbuckets;
}
int search(string key){
    int bucket_index=getbucketindex(key);//FINDING INDEX
    Mapnode<V>*head=bucket[bucket_index];
    while(head){
        if(head->key==key){//SEARCHING FOR THE KEY
            return head->value;
        }
        head=head->next;
    }
    return 0;//IF SUCH KEY NEVER FOUND
}
};
//.............................................................................................//
/*
HOW BASICALLY IS A UNORDERED MAP GETTING IMPLEMENTED
1.WE ARE TAKING KEY AS STRING
2.STRING IS COVERTED INTO NUMBER WITH BASE P(PRIME) USING ITS ASCII VALUE
3. THEN WERE USING A BUCKET ARRAY:-
    IF A ARRAY IS HAVING A SIZE 10 THEN THE INSERTION OF A NUMBER WILL BE DECIDED BY NUMBER%10
    for eg 12 WILL GO TO INDEX 1
4. FOR EG TAKING "abc" WITH P=37 THEN THE NUMBR WILL BE a*P**2+b**P+c
5.THEN TAKING MOD AT EACH STEP (USING PROPERTY)=(A*B*C)%R=((A%R)*(B%R)*(C%R))%R
6.THEN MULTIPLE STRING CAN HAVE SAME BUCKET INDEX SO WE ARE MAKING A LINKED LIST
7.THE LINKED LIST WILL HAVE DATA OF EVERY KEY AND VALUE WITH THIS BUCKET INDEX
8.DURING INSERTION THE INSERTION IS ON HEAD OF LINKED LIST
9.SO BASIC APPROACH IS "STRING"->HASHMAPING(MAKING BUCKET INDEX)->MAKING LINKED LIST FOR THAT ELEMENT ON THAT INDEX
10.Rehashing:-
    TO MAKE SEACHING INSERTION AND DELETION ALWAYS O(1) THE RATIO COUNT/NUMBUCKET<0.7
    SO AT EVERY INSERTION WE ARE TESTING THE RATIO VALUE 
    IS IT IS GREATER THAN 0.7 THE REHASING
    HOW ARE WE DOING REHASHING:-
        WE ARE REPLACING THE BUCKET POINTER BY TEMP
        THEN MAKING A NEW BUCKET OF 2*NUMBUCKET 
        ITERATING OVER OLD BUCKET FOR EACH INDEX AND DOING INSERTION AT EACH BUCKET FOR EACH KEY 
        WE CANT JUST PLACE THE LINKED LIST THERE AS KEY%NUMBUCKET IS DIFFRENT FOR EACH 2*NUMBUCKET
*/

int32_t main(){
FIO
ourmap<int> map;
loop(i,0,10){
    char c=i+'0';
    string key="abc";
    key+=c;//Concatenation MATLAB->A+B=AB
    int value=i+1;
    map.insert(key,value);
    cout<<map.getloadfactor()<<endl;
}
map.delete_data("abc2");
map.delete_data("abc7");
loop(i,0,10){
    char c=i+'0';
    string key="abc";
    key+=c;
    cout<<key<<":"<<map.search(key)<<endl;
}
cout<<map.size()<<endl;
return 0;
}
//.............................................................................................//