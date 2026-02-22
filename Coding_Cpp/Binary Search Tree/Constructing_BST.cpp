#include<iostream>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

// Preorder Traversal (Root - Left - Right)
void display(Node* root) {
    if (root == NULL) return;
    cout << root->val << " ";
    display(root->left);
    display(root->right);
}

int main() {
    // Creating nodes
    Node* root = new Node(40);
    root->left = new Node(20);
    root->right = new Node(60);

    root->left->left = new Node(10);
    root->left->right = new Node(30);

    root->right->left = new Node(50);
    root->right->right = new Node(70);

    cout << "BST (Preorder Traversal): ";
    display(root);
    cout << endl;

    return 0;
}
