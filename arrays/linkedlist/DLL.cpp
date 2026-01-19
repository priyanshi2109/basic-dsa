
// DOUBLY LINKED LIST INSERTION AND DELETION

#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* pre ;
    Node* next;

    Node(int val){
        data=val;
        pre=NULL;
        next=NULL;
    }
};
void createnode(Node* &head,Node* &tail,int val){
        Node* new_node=new Node(val);
    if(head==NULL){
        head=new Node(val);
        tail=new Node(val);
        return;
    }   
}
void insertathead(Node* &head,Node* &tail,int val){
    Node* new_node=new Node(val);
    if (head==NULL){
        head=new_node;
        tail=new_node;
        return;
    }
    new_node->next=head;
    new_node->pre=NULL;
    head->pre=new_node;
   // new_node->next=head;
    head=new_node;
}
void insertatend(Node* &head,Node* &tail,int val){

    Node* new_node=new Node(val);
     if (head==NULL){
        head=new_node;
        tail=new_node;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=new_node;
    new_node->pre=temp;

}
void insertatpos(Node* &head,Node* &tail,int val,int pos){
    Node* new_node=new Node(val);
    int cp=1;
    Node* temp=head;
    while(cp!=pos-1){
        temp=temp->next;
        cp++;
    }
    new_node->next=temp->next;
    temp->next=new_node;

    new_node->next->pre=new_node;
    new_node->pre=temp;

}
void deleteathead(Node* &head,Node* &tail){
    Node* temp=head;
    head=head->next;
    head->pre=NULL;
    free(temp);
}
void deleteatend(Node* &head,Node* &tail){
    if(head==NULL){
        tail=NULL;
        return;
    }

    Node* sl=head;
    while(sl->next!=NULL){
        sl=sl->next;
    }
    sl->pre->next=NULL;
    free(sl);
    
}
void deleteatpos(Node* &head,Node* &tail,int pos){
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

void display(Node* &head,Node* &tail){
    Node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"<->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

int main(){
    Node*  head=NULL;
    Node* tail=NULL;
    createnode(head,tail,7);
    display(head,tail);
    insertathead(head,tail,5);
    display(head,tail);
    insertatend(head,tail,8);
    display(head,tail);
    insertatpos(head,tail,6,3);
    display(head,tail);
    deleteathead(head,tail);
    display(head,tail);
    deleteatend(head,tail);
    display(head,tail);
    deleteatpos(head,tail,2);
    display(head,tail);

}
