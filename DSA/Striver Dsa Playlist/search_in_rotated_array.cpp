// Search in rotated sorted array [unique element]

#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,5,6,8,0,1,2};
    int n=sizeof(arr)/4;
    int target = 0;
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==target){
            cout<<mid;
        }
        // checking that left part is sorted or not
        if(arr[low]<=arr[mid]){
            if(arr[low]<=target && target<=arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        // checking right part is sorted or not;
        else{  // arr[mid]<=arr[high]
            if(arr[mid]<=target && target<=arr[high]){
                low=mid+1;
            }
            else{
                high = mid-1;
            }
        }
    }
}