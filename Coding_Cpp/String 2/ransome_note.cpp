#include<iostream>
#include<string>
#include<unordered_map>
using namespace std;

int main() {
    string str = "leetcode";
    int n = str.length();
    unordered_map<char,int> mp;

    for (int i = 0; i < n; i++) {
        mp[str[i]]++;
    }

    for (auto &c : mp) {
        cout << c.first << " " << c.second << endl;
    }

    return 0;
}
