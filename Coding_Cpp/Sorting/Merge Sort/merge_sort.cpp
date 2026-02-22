#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int n, vector<int>& brr, int m, vector<int>& crr) {
    crr.clear();
    crr.reserve(n + m);
    int i = 0, j = 0;

    while (i < n && j < m) {
        if (arr[i] < brr[j]) {
            crr.push_back(arr[i++]);
        } else {
            crr.push_back(brr[j++]);
        }
    }

    while (i < n) {
        crr.push_back(arr[i++]);
    }

    while (j < m) {
        crr.push_back(brr[j++]);
    }
}

void mergeSort(vector<int>& v) {
    int n = v.size();
    if (n <= 1) return;        

    int n1 = n / 2;
    int n2 = n - n1;

    vector<int> a(n1), b(n2);

    // copy first half
    for (int i = 0; i < n1; i++) {
        a[i] = v[i];
    }

    // copy second half
    for (int i = 0; i < n2; i++) {
        b[i] = v[i + n1];
    }

    mergeSort(a);
    mergeSort(b);
    merge(a, n1, b, n2, v);    // merge back into v
}

int main() {
    vector<int> v = {5, 1, 4, 2, 8, 3};

    mergeSort(v);

    for (int x : v) {
        cout << x << " ";
    }
}
