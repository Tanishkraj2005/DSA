// Maximun points you can obtain from cards

#include <bits/stdc++.h>
using namespace std;

int maxScore(vector<int>& cardPoints, int k) {
    int n = cardPoints.size();
    int windowSize = n - k;

    // If k == n, take all cards
    if (windowSize == 0) {
        return accumulate(cardPoints.begin(), cardPoints.end(), 0);
    }

    int totalSum = accumulate(cardPoints.begin(), cardPoints.end(), 0);

    // Find minimum sum subarray of size (n - k)
    int currentSum = 0, minWindowSum = INT_MAX;

    for (int i = 0; i < n; i++) {
        currentSum += cardPoints[i];

        if (i >= windowSize)
            currentSum -= cardPoints[i - windowSize];

        if (i >= windowSize - 1)
            minWindowSum = min(minWindowSum, currentSum);
    }

    return totalSum - minWindowSum;
}

int main() {
    vector<int> cardPoints = {1,2,3,4,5,6,1};
    int k = 3;

    cout << maxScore(cardPoints, k) << endl; // Output: 12
    return 0;
}