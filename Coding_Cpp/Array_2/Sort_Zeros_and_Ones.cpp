#include<iostream>
#include<vector>
using namespace std;

// // Method one
// void sort1(vector<int>& v){
//     int n=v.size();
//     int zero=0;
//     int one=0;
//     for(int i=0;i<n;i++){
//         if(v[i]==0) zero++;
//         else one++;
//     }
//     for(int i=0;i<n;i++){
//         if(i<zero) v[i]=0;
//         else v[i]=1;
//     }
// }

// Method two
void sort2(vector<int>& v){
    int n=v.size();
    int i=0;
    int j=n-1;
    while(i<j){
        int temp=0;
        if(v[i]==0) i++;
        if(v[j]==1) j--;
        if(i>j) break;
        if(v[i]==1 && v[j]==0){
            temp = v[i];
            v[i] = v[j];
            v[j] = temp;
            i++;
            j++;
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
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    // sort1(v);
    sort2(v);
    display(v);
}