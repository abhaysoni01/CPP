#include<iostream>
#include<stack>
using namespace std;
string reverse(string str){
    stack<char> st;
    string ans;
    for(int i = 0;i<str.size();i++){
        st.push(str[i]);
    }
    while(!st.empty()){
        ans.push_back(st.top());
        st.pop();
    }
    return ans;
}
int main(){
    string str = "I LOVE CHOCOLATE";
    cout << "Reverse of "<<str<<" is : "<<reverse(str)<<endl;
    return 0;
}