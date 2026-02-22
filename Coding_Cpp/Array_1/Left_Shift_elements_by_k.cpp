#include <iostream>
using namespace std;

int main() {
    int arr[] = {7, 5, 2, 11, 2, 43, 1, 1};
    int n = sizeof(arr) / 4;
    int k = 2;

    int temp[k];
    for (int i = 0; i < k; i++) {
        temp[i] = arr[i];          
    }

    for (int i = k; i < n; i++) {
        arr[i - k] = arr[i];     
    }

    for (int i = 0; i < k; i++) {
        arr[n - k + i] = temp[i];  
    }

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}
