#include<iostream>
#include<sstream>
#include<vector>
#include<unordered_map>
using namespace std;
int main(){
    string str = "leetcode";
    int n=str.length();
    unordered_map<char,int> mp;
    for(char c:str){
        mp[c]++;
    }
    for (int i = 0; i < str.size(); i++) {
        if (mp[str[i]] == 1) {
            cout<<i;
            break;  
        }
    }
    return -1;
}