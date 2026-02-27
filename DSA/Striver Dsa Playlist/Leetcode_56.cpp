// Sub Interval

// Input: intervals = [[1,3],[2,6],[8,9],[9,11],[8,10],[2,4],[15,18],[16,17]]
// Output: [[1,6],[8,10],[15,18]]
// Explanation: Since intervals [1,3] and [2,6] overlap, merge them into [1,6].

// Brute Force

// Sort it

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> arr = {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
    int n = arr.size();

    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        int start = arr[i][0];
        int end = arr[i][1];

        if (!ans.empty() && end <= ans.back()[1]) {
            continue;
        }

        for (int j = i + 1; j < n; j++) {
            if (arr[j][0] <= end) {
                end = max(end, arr[j][1]);
            } else {
                break;
            }
        }
        ans.push_back({start, end});
    }
    for (auto &v : ans) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }
}


// Optimal

#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> arr = {{1,3},{2,6},{8,9},{9,11},{8,10},{2,4},{15,18},{16,17}};
    int n = arr.size();

    sort(arr.begin(), arr.end());
    vector<vector<int>> ans;

    for (int i = 0; i < n; i++) {
        int start = arr[i][0];
        int end = arr[i][1];

        if (ans.empty() || start > ans.back()[1]) {
            ans.push_back({start, end});
        } else {
            ans.back()[1] = max(ans.back()[1], end);
        }
    }

    for (auto &v : ans) {
        cout << "[" << v[0] << "," << v[1] << "] ";
    }
}