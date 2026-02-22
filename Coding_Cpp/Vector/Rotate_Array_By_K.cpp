#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
void reversePart(int i,int j,vector<int>& a){
    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    v.push_back(6);
    v.push_back(7);
    int k=2;
    int n=v.size();
    display(v);
    cout<<endl;
    if(k>n) k=k%n;
    // rotate
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);
    cout<<endl;
}