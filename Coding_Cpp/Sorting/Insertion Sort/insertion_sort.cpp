#include<iostream>
using namespace std;
int main(){
    int arr[]={5,3,6,2,7};
    int n=sizeof(arr)/4;
    for(int i=0;i<n;i++){
        for(int j=i;j>=1;j--){
            if(arr[j]>arr[j-1]) break;
            else swap(arr[j],arr[j-1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}