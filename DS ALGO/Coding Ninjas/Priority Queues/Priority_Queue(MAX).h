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
    int getmax(){
        return pq[0];
    }
    void insert(int data){
        pq.pb(data);
        int child_index=pq.size()-1;
        while(child_index>0){
            int parent_index=(child_index-1)/2;
            if(pq[parent_index]<pq[child_index]){
                swap(pq[parent_index],pq[child_index]);
            }
            else{
                break;
            }
            child_index=parent_index;
        }
    }
    int removeMax(){
        int ans=pq[0];
        pq[0]=pq[pq.size()-1];
        pq.pop_back();
        int parent_index=0;
        int max_index=parent_index;
        int left_child=1;
        int right_child=2;
        while(left_child<pq.size()){
            if(pq[max_index]<pq[left_child]){
                max_index=left_child;
            }
            if(pq[max_index]<pq[right_child]){
                max_index=right_child;
            }
            if(max_index==parent_index){
                break;
            }
            swap(pq[max_index],pq[parent_index]);
            parent_index=max_index;
            left_child=parent_index*2+1;
            right_child=parent_index*2+2;
        }
        return ans;
    }
};