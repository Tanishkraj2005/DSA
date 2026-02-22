#include<iostream>
#include<stack>
using namespace std;
void pushAtIdx(stack<int> st,int idx,int val){
    stack<int> temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(!temp.empty()){
        st.push(temp.top());
        temp.pop();
    }
    cout<<st.size()<<endl;
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
    pushAtIdx(st,2,25);
}



