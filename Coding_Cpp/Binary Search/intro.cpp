#include<iostream>
using namespace std;

int binarySearch(int arr[], int size,int key){
    int start = 0;
    int end = size-1;
    int mid = start+ (end-start)/2;
    
    while(start <= end){
        if(arr[mid]==key){
            return mid;
        }

        // go to right part
        if(key > arr[mid]){
            start = mid+1;
        }
        else{
            end = mid-1;
        }
        mid = start+ (end-start)/2;
    }
    return -1;
}

int main(){
    int even[] = {2,4,6,8,12,18};
    int odd[5] = {3,8,11,14,16};

    int n=sizeof(even)/sizeof(even[0]);
    int m=sizeof(odd)/sizeof(odd[0]);

    int evenIndex = binarySearch(even,n,12);
    cout<<"Index of 12: "<<evenIndex;
    cout<<endl;
    int oddIndex = binarySearch(odd,m,8);
    cout<<"Index of 8: "<<oddIndex;
}





