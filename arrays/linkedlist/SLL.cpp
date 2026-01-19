
//  SINGLY LINKED LIST INSERTION AND DELETION 


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
void updatevalue(Node* &head,int val,int pos){
    Node* temp=head;
    int cp=1;
    while(cp!=pos){
        temp=temp->next;
        cp++;
    }
    temp->data=val;

}
void insertathead(Node* &head,int val){

    Node* new_node=new Node(val);
    if(head==NULL){
        head=new_node;
        return;
    }
    new_node->next=head;
    head=new_node;
}
void insertatend(Node* &head,int val){
    Node* new_node=new Node(val);
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
}
void insertatpos(Node* &head,int val,int pos){
    Node* new_node=new Node(val);
    Node* temp=head;
    int cp=1;
    while(cp!=pos-1){
        temp=temp->next;
        cp++;
    }
    new_node->next=temp->next;
    temp->next=new_node;
}
void deleteathead(Node* &head){
    Node* temp=head;
    head=head->next;
    free(temp);
}
void deleteatend(Node* &head){
    Node* secondlast=head;
    while(secondlast->next->next!=NULL){
        secondlast=secondlast->next;
    }
    Node* temp=secondlast->next;
    secondlast->next=secondlast->next->next;
    free(temp);
}
void deleteatpos(Node* &head,int pos){
    int cp=1;
    Node* prev=head;
    while(cp!=pos-1){
        prev=prev->next;
        cp++;
    }
    Node* temp=prev->next;
    prev->next=prev->next->next;
    free(temp);
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
    insertathead(head,8);
    display(head);
    insertatend(head,9);
    display(head);
    insertatpos(head,10,3);
    insertathead(head,7);
    insertathead(head,6);
    display(head);
    deleteathead(head);
    display(head);
    deleteatend(head);
    display(head);
    deleteatpos(head,3);
    display(head);
    updatevalue(head,15,2);
    display(head);

}