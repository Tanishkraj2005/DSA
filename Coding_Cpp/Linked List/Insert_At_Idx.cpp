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
Node* insertAtEnd(Node* temp,int val){
    Node* newNode = new Node(val);
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=newNode;
    return newNode;
}
Node* insertAtStart(Node* temp, int val){
    Node* newNode = new Node(val);
    newNode->next=temp;
    return newNode;
}

Node* insertInBtw(Node* temp,int val,int pos){
    Node* newNode = new Node(val);
    pos--;
    while(pos!=0 && temp->next!=NULL){
        temp=temp->next;
        pos--;
    }
    newNode->next = temp->next;
    temp->next = newNode;

    return newNode;
}
void display(Node* temp){
    while(temp!=NULL){
        cout<<temp->val<<" ";
        temp=temp->next;
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
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    a = insertAtStart(a,4);
    display(a);
    cout<<endl;
    insertInBtw(a,88,3);
    display(a);
    cout<<endl;
    insertAtEnd(a,61);
    display(a);
}

