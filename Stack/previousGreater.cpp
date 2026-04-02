#include<iostream>
#include<vector>
#include<stack>
using namespace std;
void prevGreater(vector<int>& stock, vector<int>& span){
    stack<int> st;
    vector<int> prev;
    st.push(0);
    span[0] = 1;
    prev.push_back(stock[0]);
    for(int i =1;i<stock.size();i++){
        while(!st.empty() && stock[st.top()] <= stock[i]){
            st.pop();
        }
        if(st.empty()){
            span[i] = i + 1;
            prev.push_back(-1);
        }
        else{
            span[i] = i - st.top();
            prev.push_back(stock[st.top()]);
        }
        st.push(i);
    }
    cout  << "Previous greater: ";
    for(int i=0;i<prev.size();i++){
        cout << prev[i] <<" ";
    }
    cout<<endl;

}
int main(){
    vector<int> stock = {100,80,60,70,60,85,100};
    vector<int> span(7);
    int n = span.size();
    cout << "Stock prices: ";
    for(int i=0;i<n;i++){
        cout << stock[i] <<" ";
    }
    cout<<endl;
    prevGreater(stock,span);
    for(int i=0;i<n;i++){
        cout << span[i] <<" ";
    }
    cout<<endl;


    return 0;
}