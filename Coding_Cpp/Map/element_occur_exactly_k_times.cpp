// “Given an integer array and a value K, find and print all elements 
// that occur exactly K times in the array in increasing order; 
// if no such element exists, print −1.”

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    int arr[]={1,2,2,3,3,3,4};
    int n=sizeof(arr)/4;
    unordered_map<int,int> freq;
    int k=1;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    vector<int> ans;
    for(auto i:freq){
        if(i.second==k){
            ans.push_back(i.first);
        }
    }
    if(ans.empty()){
        return -1;
    }
    sort(ans.begin(),ans.end());
    for(int i:ans){
        cout<<i<<" ";
    }
}


