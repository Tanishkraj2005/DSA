#include<iostream>
#include<vector>
#include<algorithm>
#include<climits>
#include<unordered_map>
using namespace std;
int main(){
    int arr[]={1,2,2,2,2,3,3,3,4,4,4,4,4,4};
    int n=sizeof(arr)/4;
    unordered_map<int,int> freq;
    int k=1;
    for(int i=0;i<n;i++){
        freq[arr[i]]++;
    }
    int maxi = INT_MIN;
    int c=0;
    for(auto i:freq){
        if(i.second > maxi){
            maxi=i.second;
            c=i.first;
        }
    }
    int s=0;
    int maxim=INT_MIN;
    for(auto i:freq){
        if(i.second > maxim && i.second!=maxi){
            maxim=i.second;
            s=i.first;
        }
    }
    cout<<s;
}


