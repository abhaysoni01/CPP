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
void reverseStack(stack<int>& st){
    if(st.empty()){
        return ;
    }
    int tp = st.top();
    st.pop();
    reverseStack(st);
    pushAtBotttom(st,tp);
}
int main(){
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    pushAtBotttom(st,1);
    reverseStack(st);
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    return 0;
}