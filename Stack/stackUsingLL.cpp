#include<iostream>
#include<list>
using namespace std;
template<class T>
class Stack{
    list<T> ll;
public:
    void push(T data){
        ll.push_front(data);
    }
    void pop(){
        if(!ll.empty()){
            ll.pop_front();
        }
    }
    T top(){
        if(ll.empty()){
            throw runtime_error("stack is empty.\n");
        }
        return ll.front();
    }
    bool empty(){
        return ll.empty();
    }
};
int main(){
    Stack<int> st;
    st.push(25);
    st.push(365);
    st.push(345);
    st.pop();
    while(!st.empty()){
        cout << st.top() << " ";
        st.pop();
    }
    st.pop();
    return 0;
}