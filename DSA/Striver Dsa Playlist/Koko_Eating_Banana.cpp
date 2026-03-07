#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int minEatingSpeed(vector<int>& arr, int h) {
        int n = arr.size();
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());

        while(low <= high){
            long long s = 0;
            int mid = (low + high) / 2;

            for(int i = 0; i < n; i++){
                s += (arr[i] + mid - 1) / mid;
            }

            if(s > h){
                low = mid + 1;
            }
            else{
                high = mid - 1;
            }
        }
        return low;
    }
};

int main() {
    vector<int> arr = {3, 6, 7, 11};  // piles
    int h = 8;                        // hours

    Solution obj;
    int ans = obj.minEatingSpeed(arr, h);

    cout << ans << endl;

    return 0;
}