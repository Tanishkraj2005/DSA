#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[]={2,4,5,1,2,5};
    int n=sizeof(arr)/4;
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mindx = -1;
        // minimum element calculation in orange box
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindx=j;
            }
        }
        swap(arr[i],arr[mindx]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}