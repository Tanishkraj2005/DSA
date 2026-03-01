#include <iostream>
using namespace std;
int main() {
    int arr[] = {2, 3, 4, 7, 11, 25};
    int target = 11;

    int n = sizeof(arr) / sizeof(arr[0]);
    int low = 0, high = n - 1, ans = n;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] >= target) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans;
}