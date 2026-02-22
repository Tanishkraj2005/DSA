#include <iostream>
#include <vector>
using namespace std;

int main() {
    int arr[] = {1, 4, 5, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    int brr[] = {2, 3, 6, 7, 10, 12};
    int m = sizeof(brr) / sizeof(brr[0]);

    vector<int> crr;
    crr.reserve(n + m);

    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr[i] < brr[j]) {
            crr.push_back(arr[i++]);
        } else {
            crr.push_back(brr[j++]);
        }
    }

    while (i < n){
        crr.push_back(arr[i++]);
    }
    while (j < m){
        crr.push_back(brr[j++]);
    }

    for (int x : crr) cout << x << " ";
}
