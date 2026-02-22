#include<iostream>
using namespace std;
int main(){
    int x = 2;
    int y = 7;
    int z = 4;

    int a = abs(x-z);
    int b = abs(y-z);
    if(a<b){
        cout<<a;
    }
    else{
        cout<<b;
    }
}