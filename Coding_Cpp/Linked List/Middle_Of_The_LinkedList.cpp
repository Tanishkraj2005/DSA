#include<iostream>
using namespace std;
class Node{
public: 
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
Node* middle(Node* head){
    Node* slow = head;
    Node* fast = head;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    return slow;
}
void display(Node* head){
    while(head!=NULL){
        cout<<head->val<<" ";
        head=head->next;
    }
   
}
int main(){
    Node* a = new Node(1);
    Node* b = new Node(2);
    Node* c = new Node(3);
    Node* d = new Node(4);
    Node* e = new Node(5);
    Node* f = new Node(6);
    Node* g = new Node(7);
    Node* h = new Node(8);
    Node* i = new Node(9);
    Node* j = new Node(10);
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    g->next=h;
    h->next=i;
    i->next=j;
    Node* r = middle(a);
    cout<<r->val;
    cout<<endl;
    display(a);
}

