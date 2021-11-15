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

node* deleterec(node*head,int i){//in this we are deleteting a element recursively 
    if(head==NULL){
        return head;
    }//agar suppose koi array hai hi nhi toh chupe krke return null
    if(i==0){//yeh case hit krega jab hume i==0 hi mila hai
    //toh matlab sirf head hi hai
       if(head->next){//usme do cases hai ki sirf head hi hai ya uske saath bhi kuch aur hai
           delete head;//delete the node at head
           head=head->next;//head ko ab head ke barabar kardo
           return head;
       }
       delete head;//agar sirf head tha toh delete head and return null
       return NULL;
    }
    if(i==1){//yeh case tb hit hoga jb hum ek element piche hai apne deletion ke
        if(head->next->next){//agar jo element delete krna hai woh last nhi hai
            node*temp=head->next->next;//temp mein delete krne wale se aagla element hai
            delete head->next;//target element delete krdiya
            head->next=temp;//update the addresses
            return head;//return head(just for the sake of it)
        }
        else{
            delete head->next;//agar apna target element hi last tha toh chup krke usse delete krdia
            head->next=NULL;
            return head;
        }
    }
    deleterec(head->next,i-1);//recursive call
    return head;//for each funtion deletion
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
 }