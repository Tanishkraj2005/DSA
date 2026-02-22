#include<iostream>
using namespace std;
int main(){
    int arr[]={5,-4,0,3,26,1,99,-80};
    int n=sizeof(arr)/4;

    for(int i=0;i<n-1;i++){  // n-1 passes
        // traverse
        bool flag = true;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                flag = false;
            }
        }

        if(flag==true){
            break;
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
