#include<iostream>
#include<stack>
using namespace std;
class queue{
    stack<int> s1;
    stack<int> s2;
public:
    void push(int data){
        //s1->s2
        while(!s1.empty()){
            s2.push(s1.top());
            s1.pop();
        } 
        s1.push(data);
        // s2->s1
        while(!s2.empty()){
            s1.push(s2.top());
            s2.pop();
        }
    }
    void pop(){
        s1.pop();
    }
    int top(){
        return s1.top();
    }
    bool empty(){
        return s1.empty();
    }
};
int main(){
    queue q1;
    q1.push(1);
    q1.push(2);
    q1.push(3);
    q1.push(4);
    q1.push(5);
    q1.push(6);
    while(!q1.empty()){
        cout << q1.top() << " ";
        q1.pop();
    }
    return 0;
}