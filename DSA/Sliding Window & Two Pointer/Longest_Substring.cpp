// Longest substring without repeating character


// Brute Force                  T.C -> o(n^2) 
#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {
    string s = "cabdzabcd";
    int n = s.length();

    int maxLen = 0;
    int hash[256];  

    for (int i = 0; i < n; i++) {
        memset(hash, 0, sizeof(hash));  

        for (int j = i; j < n; j++) {

            if (hash[(unsigned char)s[j]] == 1) break;

            hash[(unsigned char)s[j]] = 1;

            int len = j - i + 1;
            maxLen = max(maxLen, len);
        }
    }
    cout << "Longest substring length: " << maxLen;
    return 0;
}


// Optimal

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int longestSubstring(string s) {
    int n = s.length();

    int lastIndex[256];

    for (int i = 0; i < 256; i++) {
        lastIndex[i] = -1;
    }

    int l = 0;     
    int maxLen = 0;

    for (int r = 0; r < n; r++) {
        unsigned char c = s[r];

        if (lastIndex[c] != -1 && lastIndex[c] >= l) {
            l = lastIndex[c] + 1;      
        }
        
        lastIndex[c] = r;             

        int len = r - l + 1;
        maxLen = max(maxLen, len);
    }

    return maxLen;
}

int main() {
    string s = "cabdzabcd";
    cout << longestSubstring(s) << endl;
    return 0;
}