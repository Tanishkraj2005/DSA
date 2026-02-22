#include<iostream>
#include<queue>
using namespace std;
int main(){
    // priority_queue<int> pq;  // Priority queue hamesha jo sabse bada hota hai na wo hi return karta hai
    // pq.push(10);
    // pq.push(772);
    // pq.push(-6);
    // pq.push(8);
    // cout<<pq.top()<<endl;
    // pq.pop();
    // cout<<pq.top();

    priority_queue<int,vector<int>,greater<int>> pq; // for minimum element
    pq.push(10);
    pq.push(772);
    pq.push(-6);
    pq.push(8);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top();
    
}