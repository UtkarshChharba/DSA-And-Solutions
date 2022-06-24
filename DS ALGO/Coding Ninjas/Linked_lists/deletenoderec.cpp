#include <iostream>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int data){
        this -> data = data;
        this -> next = NULL;
    }
};

node* takeinput() {
    int data;
    cin >> data;
    node* head = NULL, *tail = NULL;
    while(data != -1){
        node *newNode = new node(data);
        if(head == NULL)                  {
            head = newNode;
            tail = newNode;
        }
        else{
            tail -> next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

node* deleterec(node*head,int index){//in this we are deleteting a element recursively 
    if(!head){
        return head;
    }
    if(index<0){
        return head;
    }
    if(index==0){
        node*temp=head->next;
        delete head;
        head=temp;
        return head;
    }
    head->next=deleterec(head->next,index-1);
    return head;
}
 void print(node*head){
     while(head){
         cout<<head->data<<" ";
         head=head->next;
     }
     cout<<endl;
 }
 int main(){
     node*head=takeinput();
     int i;
     cin>>i;
     head=deleterec(head,i);
     print(head);
      return 0;
 }
