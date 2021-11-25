#include <iostream>
#include <vector>
#define pb push_back
using namespace std;


class PriorityQueue{
    vector<int> pq;

    public:

    PriorityQueue(){

    }
    int getsize(){
        return pq.size();
    }
    bool isempty(){
        return pq.size()==0;
    }
    int getmin(){
        if(!pq.size()){
            return 0;
        }
        else{
            return pq[0];//MINIMUM TO ROOT HI HOGI
        }
    }
    void insert(int a){
        pq.pb(a);
        int child_index=pq.size()-1;
        while(child_index>0){//matlab jb tk woh kisi ka child bn paa rha hai{
            int parent_index=(child_index-1)/2;
            if(pq[child_index]<pq[parent_index]){//this is accoring to the min complete binary tree
                swap(pq[child_index],pq[parent_index]);
            }
            else{//AB CONDTION NHI HOLD KR RHI MATLAB AB SAARE PARENT CHOTE HI HONGE
                break;
            }
            child_index=parent_index;//ab jo parent tha woh child hai
        }
    }
    int removeMin(){
        if(!pq.size()){//PEHLE CHECK KARO KAHI EMPTY TOH NHI NA
            return 0;
        }
        int ans=pq[0];//JUST SAVING ANSWER FOR RETURNING LATER
        pq[0]=pq[pq.size()-1];//UPDATING TOP MOST ROOT WITH BOTTOM MOST NODE
        pq.pop_back();//POPPING THE BOTTOM MOST NODE AS WOH ROOT BN CHUKI HAI
        int parent_index=0;//PARENT KA INDEX
        int left_child=2*parent_index+1;//LEFT CHILD KA INDEX
        int right_child=2*parent_index+2;//RIGHT
        while(left_child<pq.size()){//JB TK KOI EK CHILD BHI HAI MATLAB PEHLE TOH LEFT AYEGA SO LEFT SE WHILE LAGAYA HAI
        int min_index=parent_index;
            if(pq[left_child]<pq[min_index]){//AGAR LEFT SE BDA HAI PARENT SO MIN_INDEX=LEFT
                min_index=left_child; 
            } 
            if(right_child<pq.size() && pq[right_child]<pq[min_index]){//AGAR PEHLI BAAT TOH KI RIGHT HAI AND WOH MIN_INDEX SE CHOTA HAI
            //IN THIS CASE MIN INDEX MAY BE LEFT OR PARENT 
                min_index=right_child;
            } 
            if(parent_index==min_index){//AGAR KOI SWAP NHI HUA TOH PARENT HI SBSE CHOTA HAI TOH BREAK KRDO
                break;
            } 
            swap(pq[min_index],pq[parent_index]);//OTHERWISE SWAP MAAR DO NODE AND PARENT KO
            parent_index=min_index;  
            left_child=2*parent_index+1;
            right_child=2*parent_index+2;
        }
        return ans;//RETURN THE POPPING NODE
    }

};

/*
SO WHAT ARE WE EXACTLY TRYING TO IS:-
    PEHLE WE ARE MAKING A TREE WITH 2 PROPERTIES
        1.COMPLETE BINARY TREE(matlab insertion is done from left to right and any place can left empty before reaching next level)
        2.HEAP PROPERTY(MATLAB A NODE HAVE 1 CONDITONS:-
            a.EACH NODE CHILDREN SHOULD BE LESS(FOR MAX HEAP) OR GREATER(FOR MIN HEAP)
    REMEBER WE ARE STORING A TREE IN THE FORM OF A ARRAY
    FOR EG:-1,2,3,4,5,6,7:-
                            1
                        2       3
                     4     5  6    7   
    AND THE RELATION FOLLOWED IN THE ARRAY IS THAT iTH INDEX HAVE CHILDREN 2*i+1 AND 2*i+2
    for eg 1(index=0) have children i=1,2 that is 2 and 3
    FINDING CHILD IS 2*I+1 AND 2*I+2 BUT FOR FINDING PARENT USE
    (CHILD_INDEX-1)/2 KYUKI (2*I+1-1)/2==I AND (2*I+2-1)/2==I SO MAKES SENSE


UPPER MADE CLASS IS FOR A MIN-HEAP
    2-MAIN FUNTIONS WRITTEN HAVE THE MECHANISM ARE :-
        A.INSERTION:-
            THE INSERTION TAKES PLACE AT THE PLACE ACCORDING TO COMPLETE BINARY TREE CONDITION
            THEN WE MAKE 2 VARIABLES PARENT AND CHILD AND THEN WHILE(CHILD>0) MATLAB CHILD HAI 
            JUST CHECK THAT KI KOI BHI PARENT APNE CHILD SE BADA NA HO
            AGAR HAI TO SWAP MARO AND NAYA CHILD PARENT KO BNA DO

        B.DELETION OF MIN:-
            THE DELETION HAVE 2 STEPS
            AS DELETION CAN ONLY BE DONE FROM BOTTOM MOST NODE(FOR COMPLETE BINARY) SO SWAP THE MIN(THAT IS ROOT) AND BOTTOM MOST NODE
            NOW DELETE THE BOTTOM NODE 
            NOW AB HAMARE PASS ROOT PE NODE HAI JISKI COMPARISONS KRNE HONGE
            STEPS:-
                FIRST CHECK THE ROOT CHILDREN JO SBSE MINIMUM USE CHOOSE KARO AND SWAP WITH ROOT
                KYUKI AGAR HUM MIN KO LE RHE HAI TOH AB ROOT(NODE) EK MIN BN GYA UN 3 MEIN SE WHICH IS BEST
                REPEAT THIS PROCESS TILL WE THE TIME NODE YA TOH CHILDREN KHATAM HO JAYE YA TOH CONDTION HOLD NA KARE(KI KOI BACHA ROOT SE CHOTA HAI) 

YEH SORT BHI KR DETA HAI SO CALLED HEAPSORT
TIME-O(LOG N)
SPACE-O(N)

*/