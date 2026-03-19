#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<char> ch;
    ch.push('a');
    ch.push('b');
    ch.push('c');
    ch.push('d');
    ch.push('e');
    while(!ch.empty()){
        cout << ch.top() <<" ";
        ch.pop();
    }
    return 0;

}