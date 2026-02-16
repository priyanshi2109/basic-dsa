//let x is the value to be inserted in the BST and root is the root of the BST
// if (node >=x )-> insert in left subtree
// else insert in right subtree
#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void insert(Node* &root,int val){
    Node* new_node=new Node(val);
    if(root==NULL){
        root=new_node;
        return;
    }
     else if(val<root->data){
        insert(root->left,val);
    }
    else{
        insert(root->right,val);
    }
}
void inorder(Node* &root){
    if(root==NULL){
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main(){
    Node* root = NULL;
    int x;
    insert(root,5);
    inorder(root);
    cout<<endl;
    insert(root,3);
    insert(root,7);
    inorder(root);

}