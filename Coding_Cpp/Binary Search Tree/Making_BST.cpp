#include<iostream>
using namespace std;
class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* insert(Node* root,int val){
    if(root==NULL) return new Node(val);
    if(val < root->val){
        root->left = insert(root->left,val);
    } 
    if(val > root->val) {
        root->right = insert(root->right,val);
    }
    return root;
}
void display(Node* root){
    if(root==NULL) return;
    cout<<root->val<<" ";
    display(root->left);
    display(root->right);
}
int main(){
    Node* root = NULL;
     
    root = insert(root, 40);
    root = insert(root, 20);
    root = insert(root, 60);
    root = insert(root, 10);
    root = insert(root, 30);
    root = insert(root, 50);
    root = insert(root, 70);

    cout << "BST (Preorder Traversal): ";
    display(root);
    cout<<endl;
    
}


