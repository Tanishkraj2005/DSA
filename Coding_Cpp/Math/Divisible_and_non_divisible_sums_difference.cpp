#include<iostream>
using namespace std;
int main(){
    int n = 10;
    int m = 3;
    int sumN = 0;
    int sumM = 0;
    for(int i=0;i<=n;i++){
        if(i%m!=0){
            sumN += i;
        }
    }
    cout<<sumN<<endl;
    for(int i=0;i<=n;i++){
        if(i%m==0){
            sumM += i;
        }
    }
    cout<<sumM<<endl;
    cout<<sumN-sumM;
}