#include<iostream>
using namespace std;
int main(){
    int arr[]={4,0,0,3,2};
    int n=sizeof(arr)/4;
    int j=-1;
    
    // 1. Pehla zero dhudho (j pointer se)
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    // Agar array mein koi zero nahi hai toh kuch nahi karna
    if(j == -1) return 0;
    
    // 2. i pointer ko j+1 se dhudho
    for(int i=j+1;i<n;i++){
        // Agar non zero element mile to swap karo
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++; // swap ke baad j ko aage badha do
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}


