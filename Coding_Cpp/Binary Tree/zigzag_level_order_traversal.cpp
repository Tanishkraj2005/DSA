#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

class Node{
public:
    int val;
    Node* left;
    Node* right;
    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

int height(Node* root){
    if(root == NULL) return 0;
    return 1 + max(height(root->left), height(root->right));
}

void nthlevel(Node* root, int curr, int level, vector<int>& v){
    if(root == NULL) return;
    if(curr == level){
        v.push_back(root->val);
        return;
    }
    nthlevel(root->left, curr + 1, level, v);
    nthlevel(root->right, curr + 1, level, v);
}

void levelOrder(Node* root, vector<vector<int>>& ans){
    int n = height(root);
    for(int i = 1; i <= n; i++){
        vector<int> v;
        nthlevel(root, 1, i, v);
        if(i % 2 == 0){
            reverse(v.begin(), v.end());
        }
        ans.push_back(v);
    }
}

vector<vector<int>> zigzagLevelOrder(Node* root){
    vector<vector<int>> ans;
    levelOrder(root, ans);
    return ans;
}

int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);

    a->left = b;
    a->right = c;
    b->left = d;
    b->right = e;
    c->left = f;
    c->right = g;

    vector<vector<int>> ans = zigzagLevelOrder(a);
    for(int i = 0; i < ans.size(); i++){
        for(int j = 0; j < ans[i].size(); j++){
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
