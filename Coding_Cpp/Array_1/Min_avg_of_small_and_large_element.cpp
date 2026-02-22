#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={1,2,3,7,8,9};
    int n=sizeof(arr)/4;
    vector<float> brr;
    sort(arr,arr+n);
    int j=n-1;
    float s=0;
    for(int i=0;i<n/2;i++){
        s=(arr[i]+arr[j])/2.0;
        brr.push_back(s);
        j--;
    }
    int m=brr.size();
    float smallest=brr[0];
    for(int i=0;i<m;i++){
        if(brr[i]<smallest){
            smallest=brr[i];
        }
    }
    cout<<smallest;
}