// reverse the substring from position 2 to 5 using in built function

#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string str = "abcdefgh";
    int n=str.length();
    
    reverse(str.begin()+1,str.begin()+5);
    cout<<str;
}