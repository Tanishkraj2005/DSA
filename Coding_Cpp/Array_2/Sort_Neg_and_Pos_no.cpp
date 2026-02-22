#include<iostream>
#include<vector>
using namespace std;

void sort2(vector<int>& v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=0;
        if(v[i]<0) i++;
        if(v[j]>0) j--;
        if(i>j) break;
        if(v[i]>0 && v[j]<0){
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j--;
        }
    }
}
void display(vector<int>& v){
    for(int k=0;k<v.size();k++){
        cout<<v[k]<<" ";
    }
}
int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(-2);
    v.push_back(3);
    v.push_back(-4);
    v.push_back(-5);
    v.push_back(6);
    v.push_back(8);
    sort2(v);
    display(v);
}