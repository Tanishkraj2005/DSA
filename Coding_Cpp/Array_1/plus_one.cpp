#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,2,3,4,5,6};
    int n=sizeof(arr)/4;
    int curr=0;
    for(int i=0;i<n;i++){
        curr=(curr*10)+arr[i];
    }
    int furr=curr+1;
    vector<int> ans;
    int digit;
    while(furr!=0){
        digit=furr%10;
        ans.push_back(digit);
        furr=furr/10;
    }
    for(int i=ans.size()-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }
}

