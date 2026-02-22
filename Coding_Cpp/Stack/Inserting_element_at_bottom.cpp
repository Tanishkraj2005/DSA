#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>& st){
    stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    // putting elements back from temp to st
    while(!temp.empty()){
        cout<<temp.top()<<" ";
        st.push(temp.top());
        temp.pop();
    }
    cout<<endl;
}
void pushAtBottom(stack<int>& st,int val){
     stack<int> temp;
    while(!st.empty()){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
}
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    print(st);
    pushAtBottom(st,5);
    print(st);
}