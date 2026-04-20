#include<iostream>
#include<queue>
using namespace std;
template<class T>
class stack{
    queue<T> q1;
    queue<T> q2;
public:
    void push(T data){
        // q1->q2
        while(!q1.empty()){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(data);
        // q2->q1
        while(!q2.empty()){
            q1.push(q2.front());
            q2.pop();
        }
    }
    void pop(){
        q1.pop();
    }
    T top(){
        return q1.front();
    }
    bool empty()
    {
        return q1.empty();
    }
};
int main(){
    stack<int> s1;
    s1.push(1);
    s1.push(2);
    s1.push(3);
    s1.push(4);
    s1.push(5);
    while(!s1.empty()){
        cout << s1.top() <<" ";
        s1.pop();
    }
    return 0;
}