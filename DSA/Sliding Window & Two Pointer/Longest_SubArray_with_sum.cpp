// Striver playlist

// Longest sum with sum <= k


// Brute -> Generate all the subarrays          T.C -> o(N^2)
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {2,5,1,7,10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 14;

//     int maxLen = 0;
//     for(int i = 0; i < n; i++) {
//         int sum = 0;
//         for(int j = i; j < n; j++) {
//             sum += arr[j];
//             if(sum <= k) {
//                 maxLen = max(maxLen, j - i + 1);
//             }
//             else {
//                 break;
//             }
//         }
//     }
//     cout << maxLen;
// }


// Better -> By taking sliding window or two pointer    T.C -> o(2N)
// #include<iostream>
// using namespace std;

// int main() {
//     int arr[] = {2,5,1,7,10};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 14;
//     int l = 0, r = 0, sum = 0, maxlen = 0;

//     while(r < n) {
//         sum = sum + arr[r];

//         while(sum > k && l <= r) {
//             sum = sum - arr[l];
//             l++;
//         }

//         maxlen = max(maxlen, r - l + 1);
//         r = r + 1;
//     }

//     cout << maxlen;
// }


// Optimal 
#include<iostream>
using namespace std;

int main() {
    int arr[] = {2,5,1,7,10};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 14;

}