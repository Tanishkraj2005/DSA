// striver sliding window and pointer playlist

// I need to find the maximum sum from a constand size window 4 

#include<iostream>
using namespace std;

int main() {
    int arr[] = {-1,2,3,3,4,5,-1};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;

    int l = 0;
    int r = k - 1;

    int sum = 0;
    for(int i = 0; i < k; i++) sum += arr[i];

    int maxSum = sum;

    while(r < n - 1) {
        sum -= arr[l];
        l++;
        r++;
        sum += arr[r];
        if(sum > maxSum) maxSum = sum;
    }

    cout << maxSum;
}