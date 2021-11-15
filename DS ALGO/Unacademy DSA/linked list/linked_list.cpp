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
#define mii map<int, int>
#define And &&
#define vi vector<int>
#define Or ||
#define float double
#define pb push_back
#define mp make_pair
#include <map>
#define ff first
#define ss second
#define all(c) c.begin(), c.end()
#define min3(a, b, c) min(c, min(a, b))
#define in insert
#define max3(a, b, c) max(c, max(a, b))
#define min4(a, b, c, d) min(d, min(c, min(a, b)))
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

class node{
public:
    int data;
    node * next;
    node *previous;
    node(int d){
        data=d;
        next=NULL;
        previous=NULL;
    }
};
class linked_list{
public:
    node *head;
    node *tail;
    int size;
    linked_list(){
        head=NULL;
        tail=NULL;
        size=0;
    }
    void finding_element(int a){
        node*cur=head;
        loop(i,0,a){
            cur=cur->next;
        }
        cout<<cur->data<<endl;
    }
    void push_front(int d){
        node *new_head=new node(d);
        if(head==NULL){
            tail=new_head,head=new_head;
        }
        else{
        new_head->next=head;
        head->previous=new_head;
        head=new_head;
        }
        size++;
    }
    void push_back(int d){
        node *new_tail=new node(d);
        if(!tail){
            head=new_tail,tail=new_tail;
        }
        else{
        tail->next=new_tail;
        new_tail->previous=tail;
        tail=new_tail;
        }
        size++;
    }
    node* insert(node *cur,int d){
        node *new_node=new node(d);
        new_node->next=cur->next;
        new_node->previous=cur;
        if(cur->next){
        (cur->next)->previous=new_node;
        }
        else{
            tail=new_node;
        }
        cur->next=new_node;

        size++;
        return new_node;

    }
    void pop_back(){
        if(!tail){
            return;
        }
        if (tail==head){
            delete head;
            head=NULL;
        }
        else{
        (tail->previous)->next=NULL;
        tail=tail->previous;
        }
        size--;

    }
    void pop_front(){
        if(!head){
            return;
        }
        if(!(head->next)){
            delete head;
            head=tail=NULL;
        }
        else{
            head->next->previous=NULL;
            head=head->next;
        }
        size--;
    }
    void pop(node * cur){
        if(head==NULL){
            return;
        }
        if(head==tail){
            delete cur;
            head=tail=NULL;
        }
        if(cur->next){
        (cur->next)->previous=cur->previous;
        }
        else{
            tail=cur->previous;
        }
        if(cur->previous){
            cur->previous->next=cur->next;

        }
        else{
            head=cur->next;
        }
        delete  cur;
        
        size--;
    }
    void print_iter(){
        node *cur=head;
        while(cur){
            cout<<cur->data<<' ';
            cur=cur->next;
        }
        cout<<'\n';
    }
    void print_rec_aux(node *cur){ 
        if(!cur){
            return;
        }
        cout<<cur->data<<' ';
        cur=cur->next;
        print_rec_aux(cur);
    }
    void print_rec(){
        print_rec_aux(head);
        cout<<'\n';

    }
    void reverse(){
        node *cur=head;
        while(cur){
            swap(cur->next,cur->previous);
            cur=cur->previous;
        }
        swap(head,tail);
    }
    void reverse_single(){
        node *cur=head;
        node*previous=NULL;
        while(cur){
            node *temp_node=cur->next;
            cur->next=previous;
            previous=cur;
            cur=temp_node;
        }
        swap(head,tail);
    }
};

// REMEBER TO COMMENT A BIG PART USE command+k+c AND TO UN COMMENT USE command+k+u


//.............................................................................................//
// int32_t main(){
// linked_list l1;
// loop(i,1,11){
//     l1.push_back(i);
// }
// l1.print_iter();
// l1.pop_back();
// l1.print_iter();
// l1.pop_front();
// l1.print_iter();
// node *eleven=l1.insert(l1.head,11);
// l1.print_iter();
// l1.pop(eleven);
// l1.print_iter();
// l1.pop(l1.head);
// l1.print_iter();
//  l1.pop(l1.tail);
//  l1.print_iter();    
//  l1.reverse();
//  l1.print_iter();; 
//  l1.reverse_single();
//  l1.print_iter();  


 
// return 0;
// }
//.............................................................................................//