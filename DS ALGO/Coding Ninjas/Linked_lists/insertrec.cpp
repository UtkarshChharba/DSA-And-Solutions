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

node* insertrec(node* head,int i,int data){
     if(head==NULL){
         return head;//agar apni list hi empty thi(lol)
     }
     if(i==0){//yeh case tb hit hoga jb hume add hi first element pe krna hai
         node* newnode=new node(data);
         newnode->next=head;//isme humne element add krke usse next add ka addressle liya
         head=newnode;//isse humne head ko update krdiya
         return head;
     }
     if(i==1){//yeh case tb hit hogajb hum just ek kum hai insertion se
        node* newnode=new node(data);
        newnode->next=head->next;//humne pehle jo hamara target element ko uske next wale ka addres diya
        head->next=newnode;//ab usse previous wale ko iska address diya
        return head;

     }
     insertrec(head->next,i-1,data);//recursive call
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
     int i,data;
     cin>>i>>data;
     head=insertrec(head,i,data);
     print(head);
 }