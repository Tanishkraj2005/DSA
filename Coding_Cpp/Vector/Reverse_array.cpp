// Using two pointer

#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>& a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
void rev(vector<int>& a){
    int i=0;
    int j=a.size()-1;
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
    display(v);
    rev(v);
    cout<<endl;
    display(v);
}