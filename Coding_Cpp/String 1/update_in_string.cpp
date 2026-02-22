#include<iostream>
using namespace std;
int main(){
    // string s = "tanishk raj";
    // cout<<s<<endl;
    // s[1] = 'o';
    // cout<<s;

    string s = "tanishk raj";
    cout<<s<<endl;
    for(int i=0;i<s.length();i++){
        if(i%2==0){
            s[i]='a';
        }
    }
    cout<<s;
}