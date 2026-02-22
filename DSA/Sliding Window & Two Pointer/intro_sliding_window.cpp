#include<iostream>
using namespace std;
int main(){
    int arr[]={3,8,2,5,7,6,12};
    int n=sizeof(arr)/4;
    int curr = 0;

    int w = 4;   // Window Size
    for(int i=0;i<w;i++){
        curr += arr[i];
    }
    int maxx = curr;
    for(int i=1;i<=n-w;i++){
        curr = curr - arr[i-1] + arr[i+w-1];
        if(curr>maxx){
            maxx=curr;
        }
    }
    cout<<maxx;
}