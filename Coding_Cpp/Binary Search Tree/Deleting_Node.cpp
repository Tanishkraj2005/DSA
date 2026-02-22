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
Node* iop(Node* root){ // inorder predecessor
    Node* pred = root->left;
    while(pred -> right!=NULL){
        pred=pred->right;
    }
    return pred;
}
// Deleting a node
Node* del(Node* root,int target){
    if(root==NULL) return NULL;
    if(root->val==target){
        // Case 1 : No Child
        if(root->left==NULL && root->right==NULL) return NULL;
        
        // Case 2 : With One Child
        if(root->left==NULL || root->right==NULL) {
            if(root->left!=NULL) return root->left;
            else return root->right;
        }
        
        // Case 3 : Two Child -> Replace the node with inorder predecessor or successor
        if(root->left!=NULL || root->right!=NULL){
            Node* pred = iop(root);
            root->val = pred->val;
            root->left = del(root->left,pred->val);
        }
        
    }
    if(target < root->val){
        root->left = del(root->left,target);
    }
    else if(target > root->val){
       root->right = del(root->right,target);
    }
    return root;
}

void display(Node* root){
    if(root==NULL) return;
    display(root->left);
    cout<<root->val<<" ";
    display(root->right);
}
int main(){
    Node* a = new Node(10);  
    Node* b = new Node(5);
    Node* c = new Node(20);
    Node* d = new Node(2);
    Node* e = new Node(8);
    Node* f = new Node(15);
    Node* g = new Node(25);
    Node* h = new Node(4);
    Node* i = new Node(12);
    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;
    d->right = h;
    f->left = i;
    del(a,10);
    display(a);
}


    