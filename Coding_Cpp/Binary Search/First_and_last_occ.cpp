#include <iostream>
#include <vector>
using namespace std;
int first(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid = start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            end=mid-1;
        }
        else if(target>arr[mid]){
            start =  mid+1;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int last(int arr[],int size,int target){
    int start=0;
    int end=size-1;
    int mid = start+(end-start)/2;
    int ans=-1;
    while(start<=end){
        if(arr[mid]==target){
            ans=mid;
            start=mid+1;
        }
        else if(target>arr[mid]){
            start =  mid+1;
        }
        else if(target<arr[mid]){
            end = mid-1;
        }
        mid = start+(end-start)/2;
    }
    return ans;
}
int main() {
    int arr[] = {1,2,3,3,3,3,3,3,3,4,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int firstOcc = first(arr,n,3); 
    int lastOcc = last(arr,n,3); 
    cout<<"First occ of 3 is: "<<firstOcc<<endl;
    cout<<"Last occ of 3 is: "<<lastOcc;
}


// If asked total no. of occurance to first aur last ko minus karke 1 add kar do