#include<iostream>
#include<stack>
using namespace std;
int main(){
    int arr[]={3,1,2,5,4,6,2,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    int pge[n];
    pge[0]=-1;
    for(int i=1;i<n;i++){
        pge[i]=-1;
        for(int j=i-1;j>=0;j--){
            if(arr[j]>arr[i]){
                pge[i]=arr[j];
                break;
            }
        }
    }
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<pge[i]<<" ";
    }
}