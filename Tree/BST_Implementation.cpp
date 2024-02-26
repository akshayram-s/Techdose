#include<iostream>
using namespace std;

// Binary Search Tree

struct Node{
  int val;
  Node* left;
  Node* right;
};

Node* addNode(int val){
  Node* newNode=new Node;
  newNode->val=val;
  newNode->left=NULL;
  newNode->right=NULL;
  return newNode;
}

Node* insert(Node* root,int val){
  if(!root){
    root=addNode(val);
    return root;
  }
  else if(root->val>=val){
    root->left=insert(root->left,val);
  }
  else{
    root->right=insert(root->right,val);
  }
  return root;
}

void inorder(Node* root){
    if(!root)
        return;
    inorder(root->left);
    cout<<root->val<<endl;
    inorder(root->right);
}

int main(){
  Node* root=NULL;
  root=insert(root,15);
  root=insert(root,25);
  root=insert(root,30);
  root=insert(root,10);
  root=insert(root,20);
  //printing tree using inorder traversal
  inorder(root);
  return 0;
}