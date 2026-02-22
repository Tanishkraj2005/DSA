// Count the frequency of each element in an integer array.

#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;
int main(){
    int arr[]={1,2,1,2,2,2,2,6,4,4,7,7,8,9,4,4,4,6,2,1,4,5,6,8};
    int n=sizeof(arr)/4;
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    for(auto i:freq){
        cout<<i.first<<" "<<i.second<<endl;
    }
}