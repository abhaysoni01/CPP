#include<iostream>
#include<stack>
using namespace std;
bool isValid(string str){
    stack<char> st;
    for(int i = 0; i< str.size() ;i++){
        char ch = str[i];
        if(ch == '{' || ch == '(' || ch == '['){
            st.push(ch);
        }
        else{
            if(st.empty()){
                return false;
            }
            char top = st.top();
            st.pop();
            if(ch == '}' && top != '{') return false;
            else if(ch == ')' && top != '(') return false;
            else if(ch == ']' && top != '[') return false;

        }
    }
    return st.empty();
}
int main(){
    string str = "{{[[(((())))]]}}";
    cout << isValid(str) <<endl;
    return 0;
}