#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    // string str = "tanishk raj";
    // cout<<str.size();
    
    // string str = "abcd";
    // cout<<str<<endl;
    // str.push_back('e');
    // cout<<str;
    
    // string str = "abcd";
    // cout<<str<<endl;
    // str.pop_back();
    // cout<<str;
    
    // concatenate
    // string str = "abcd";
    // cout<<str<<endl;
    // str = str + "efgh";
    // cout<<str;
    
    
    string str = "abcdefgh";
    reverse(str.begin(),str.end());
    cout<<str;
}



