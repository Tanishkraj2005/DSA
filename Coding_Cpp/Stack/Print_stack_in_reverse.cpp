#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    while(!temp.empty()){
        cout<<temp.top()<<endl;
        temp.pop();
    }
    
}



