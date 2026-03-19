#include<iostream>
#include<vector>
using namespace std;

template<class T>
class stack{
    vector<T> data;  // Renamed from 'stack' to 'data'
public:
    void push(T val){
        data.push_back(val);
    }
    void pop(){
        if(!empty()){
            data.pop_back();
        }
    }
    T top(){
        if(empty()){
            throw runtime_error("Stack is empty");
        }
        return data.back();  // Simpler than size()-1
    }
    bool empty(){
        return data.empty();
    }
};
int main(){
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    while(!st.empty()){
        cout << st.top() <<" ";
        st.pop();
    }
    return 0;
}
