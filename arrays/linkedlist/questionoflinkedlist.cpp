/* question -  delete  thealternative value of a linked list */


#include<iostream>
using namespace std;
class Node{
    public:
int data;
Node* next;

Node(int val){
    data=val;
    next=NULL;
}
};


void insertattail(Node* &head,int val){

    Node* new_node=new Node(val);
    if(head==NULL){
        head=new_node;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;

    }
void deleteAlternate(Node* &head){
    Node* current_node=head;
    while(current_node !=NULL and current_node->next !=NULL){
        Node* temp=current_node->next;
        current_node->next=current_node->next->next;
        current_node=current_node->next;
        free(temp);
    }
}
    void display(Node* head){
        Node* temp=head;
        while(temp!=NULL){
            cout<<temp->data<<"->";
            temp=temp->next;
        }
        cout<<"NULL"<<endl;
    }

int main(){
    Node* head=NULL;
    insertattail(head,1);
     insertattail(head,2);
      insertattail(head,3);
       insertattail(head,4);
        insertattail(head,5);
        insertattail(head,6);
        insertattail(head,7);

    display(head);

    deleteAlternate(head);
     display(head);



}