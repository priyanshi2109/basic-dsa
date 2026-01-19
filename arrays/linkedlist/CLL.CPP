
// CIRCULAR LINKED LIST INSERTION AND DELETION


#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;    }
};

void insertathead(Node* &head,int val){
    Node* new_node=new Node(val);
    if (head==NULL){
        head=new_node;
        new_node->next=head;
        return;
    }
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->next=head;
    head=new_node;
}

void insertatend(Node* &head,int val){
    Node* new_node=new Node(val);
    Node* temp=head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->next=head;
}
void printcll(Node* &head){
    Node* temp=head;
    for(int i=0;i<10;i++){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<endl;

}
void deleteathead(Node* &head){
    if(head==NULL){
        return;
    }
    Node* temp=head;
    Node* tail=head;
    while(tail->next!=head){
        tail=tail->next;
    }
    head=head->next;
    tail->next=head;
    free(temp);
}
 void deleteatend(Node* &head){
    Node* sl=head;
    while(sl->next->next!=head){
        sl=sl->next;
    }
    Node* temp=sl->next;
    sl->next=head;

    free(temp);

 }
void display(Node* head){
    Node* temp=head;
    if (head==NULL){
        cout<<"list is empty"<<endl;
        return;
    }
    do{
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    while(temp!=head);
    cout<<endl;
}

int main(){
    Node* head=NULL;
    // insertathead(head,1);
    display(head);
    insertathead(head,2);
    display(head);
    insertathead(head,1);
    insertathead(head,3);
      display(head);
    printcll(head);
    insertatend(head,4);
    display(head);
    // printcll(head);
     deleteathead(head);
     display(head);
        deleteatend(head);
        display(head);
    

    
}