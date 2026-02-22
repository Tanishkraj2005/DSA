#include<iostream>
using namespace std;
int maze(int sr,int sc,int er,int ec){
    // sr -> Starting row
    // sc -> Starting column
    // er -> Ending row
    // ec -> Ending Column
    
    if(sr>er || sc>ec) return 0;
    if(sr==er && sc==ec) return 1;
    int rightWays = maze(sr,sc+1,er,ec);
    int downWays = maze(sr+1,sc,er,ec);
    int totalWays = rightWays + downWays;
    return totalWays;
    
}
int main(){
    cout<<maze(1,1,3,3);
}