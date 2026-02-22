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
    stack<int> temp2;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    while(!temp.empty()){
        temp2.push(temp.top());
        temp.pop();
    }
    while(!temp2.empty()){
        st.push(temp2.top());
        temp2.pop();
    }
    while(!st.empty()){
        cout<<st.top()<<endl;
        st.pop();
    }
    
}