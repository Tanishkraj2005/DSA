// Reverse first half
#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str = "abcdefgh";
    int n=str.length();
    
    reverse(str.begin(),str.begin()+n/2);
    cout<<str;
}



