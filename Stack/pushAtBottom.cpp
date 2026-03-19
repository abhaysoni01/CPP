#include<iostream>
#include<stack>

using namespace std;

void pushAtBotttom(stack<int>& st,int data){
    if(st.empty()){
        st.push(data);
        return;
    }
    int top = st.top();
    st.pop();
    pushAtBotttom(st,data);
    st.push(top);
}
int main(){
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    pushAtBotttom(st,1);
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}