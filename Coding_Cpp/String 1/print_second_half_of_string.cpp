#include<iostream>
using namespace std;
int main(){
    string str = "abcdefghij";
    int n=str.length();
    cout<<str.substr(n/2);
}