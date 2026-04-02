#include<iostream>
#include<stack>

using namespace std;
bool duplicate(string str){
    stack<char> st;
    for(int i =0 ;i<str.size() ;i++){
        if(str[i] != ')'){
            st.push(str[i]);
        }
        else{
            if(st.top() == '(') return true;
            while(st.top() != '('){
                st.pop();
            }
            st.pop();
        }
    }
    return false;
}
int main(){
    string str = "(((a+b) + (b+c)))";
    cout << duplicate(str) << endl;
    string temp = "(a+b) + ((b + c))";
    cout << duplicate(temp) << endl;
    return 0;
}