#include<iostream>
#include<sstream>
#include<vector>
using namespace std;
int main(){
    string str = "my name is tanishk raj";
    stringstream ss(str);
    string temp;
    vector<string> word;
    while(ss>>temp){
        word.push_back(temp);
    }
    int n=word.size();
    string m=word[n-1];
    cout<<m.size();
}