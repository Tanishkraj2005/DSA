// You are using GCC
#include<iostream>
using namespace std;
int main(){
    int a;
    cin>>a;
    for(int i=0;i<a;i++){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int s=0;
        int c=0;
        for(int i=0;i<n;i++){
            s+=arr[i];
        }
        while(s<0){
            s=0;
            for(int i=0;i<n;i++){
                arr[i]+=1;
                s+=arr[i];
            }
            c++;
        }
        cout<<c;
    }
}   