#include<iostream>
using namespace std;
int main(){
    string str = "tanishk raj";
    int c = 0;
    int i=0;
    while(str[i]!='\0'){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u'){
            c++;
        }
        i++;
    }
    cout<<c;
}