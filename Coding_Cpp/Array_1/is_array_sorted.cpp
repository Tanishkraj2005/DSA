#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,1,2,4,5};
    int n=sizeof(arr)/4;
    bool flag = true;
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            flag = false;
        }
    }
    if(!flag){
        cout<<"Not Sorted";
    }
    else{
        cout<<"sorted";
    }
    
}