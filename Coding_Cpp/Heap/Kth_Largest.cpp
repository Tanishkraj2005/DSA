#include<iostream>
#include<queue>
using namespace std;
int main(){
    priority_queue<int,vector<int>,greater<int>> pq;
    int arr[]={10,200,-4,6,18,2,105,118};
    int k=3;
    int n=sizeof(arr)/4;
    for(int i=1;i<n;i++){
        pq.push(arr[i]);
        if(pq.size()>k) pq.pop();
    }
    cout<<pq.top();
}