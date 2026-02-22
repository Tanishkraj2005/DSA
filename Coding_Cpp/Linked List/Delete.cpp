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
Node* deleteAtStart(Node* head){
    if(head==NULL) return NULL;

    Node* temp=head;
    head=head->next;
    delete temp;
    return head;
}

Node* deleteAtIdx(Node* head,int pos){
    if(head==NULL) return NULL;
    pos--;
    Node* temp=head;
    while(pos!=0 && temp->next!=NULL){
        temp=temp->next;
        pos--;
    }
    Node* del = temp->next;
    temp->next=temp->next->next;
    delete del;
    return head;
}

Node* deleteAtEnd(Node* head) {
    if (head == NULL) return NULL;          
    if (head->next == NULL) {               
        delete head;
        return NULL;
    }
    Node* temp = head;
    while (temp->next->next != NULL) {      
        temp = temp->next;
    }
    delete temp->next;       
    temp->next = NULL;       
    return head;             
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
    a->next=b;
    b->next=c;
    c->next=d;
    d->next=e;
    e->next=f;
    f->next=g;
    // a=deleteAtEnd(a);
    // display(a);
    // cout<<endl;
    // b=deleteAtStart(a);
    // display(b);
    // cout<<endl;
    c=deleteAtIdx(a,3);
    display(c);
}

