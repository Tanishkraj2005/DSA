#include<iostream>
#include<algorithm>
#include<climits>
using namespace std;
int main(){
    int arr[] = {4,2,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n);
    int min = INT_MAX;
    int i=0;
    for(int j=i+1;j<n;j++){
        if(abs(arr[i]-arr[j]) < min){
            min = abs(arr[i]-arr[j]);
            cout<<arr[i]<<" "<<arr[j];
        }
        i++;
    }
    cout<<endl;
    cout<<min;

}