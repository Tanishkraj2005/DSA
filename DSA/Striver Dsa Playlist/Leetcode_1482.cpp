#include <bits/stdc++.h>
using namespace std;

bool possible(vector<int> &arr, int day, int m, int k){
    int n = arr.size();
    int c = 0;
    int noOfB = 0;

    for(int i = 0; i < n; i++){
        if(arr[i] <= day){
            c++;
        }
        else{
            noOfB += (c / k);
            c = 0;
        }
    }

    noOfB += (c / k);
    return noOfB >= m;
}

int minDays(vector<int>& arr, int m, int k){
    int n = arr.size();
    long long val = 1LL * m * k;
    if(val > n) return -1;

    int mini = INT_MAX, maxi = INT_MIN;

    for(int i = 0; i < n; i++){
        mini = min(mini, arr[i]);
        maxi = max(maxi, arr[i]);
    }

    int low = mini, high = maxi;

    while(low <= high){
        int mid = (low + high) / 2;

        if(possible(arr, mid, m, k)){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }

    return low;
}

int main(){
    vector<int> arr = {1,10,3,10,2};
    int m = 3;
    int k = 1;

    cout << minDays(arr, m, k);
}