#include<iostream>
using namespace std;
int main(){
    int arr[]={-6,2,5,-2,-7,-1,3};
    int target=-2;
    int n=sizeof(arr)/4;
    int c=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i<j && (arr[i]+arr[j]<target)){
                c++;
            }
        }
    }
    cout<<c;
}