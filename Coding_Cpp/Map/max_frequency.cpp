// Find the element with the maximum frequency.

#include<iostream>
#include<map>
#include<unordered_map>
#include<climits>
using namespace std;
int main(){
    int arr[]={1,2,1,2,2,2,2,6,4,4,7,7,8,9,4,4,6,2,1,4,5,6,8};
    int n=sizeof(arr)/4;
    unordered_map<int,int> freq;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int c=0;
    int maxi = INT_MIN;
    for(auto i:freq){
        if(i.second>maxi){
            maxi=i.second;
            c=i.first;
        }
    }
    cout<<c;
}