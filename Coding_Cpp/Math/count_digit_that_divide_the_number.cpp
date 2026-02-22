#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n = 37;
    int original = n;
    int a;
    vector<int> digit;
    while(n!=0){
        a = n%10;
        digit.push_back(a);
        n/=10;
    }
    int c=0;
    for(int i=0;i<digit.size();i++){
        if(original%digit[i]==0){
            c++;
        }
    }
    cout<<c;
}