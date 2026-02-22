#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;  // you dont need to mention the size
    // inserting / input do not use []
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);
    v.push_back(5);
    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v[0]<<" ";
    cout<<v[1]<<" ";
    cout<<v[2]<<" ";
    cout<<v[3]<<" ";

}