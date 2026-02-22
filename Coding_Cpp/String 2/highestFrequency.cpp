#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s = "physicswaallah";
    int n=s.length();
    vector<int> arr(26,0);
    for(int i=0;i<n;i++){
        char ch = s[i];
        int ascii = (int)ch;
        arr[ascii-97]++;
    }
    int mx = 0;
    for(int i=0;i<26;i++){
        if(arr[i]>mx) mx = arr[i];
    }
    
    for(int i=0;i<26;i++){
        if(arr[i] == mx){
            int ascii = i+97;
            char ch = (char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }
}

#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
#include<climits>
using namespace std;
int main(){
    string s = "physicswaallah";
    int n=s.length();
    unordered_map<char,int> mp;
    for(int i=0;i<n;i++){
        mp[s[i]]++;
    }
    char ch;
    int maxi = 0;
    for(auto i:mp){
        if(i.second>maxi){
            maxi=i.second;
            ch=i.first;
        }
    }
    cout<<ch<<" "<<maxi;
    
}


