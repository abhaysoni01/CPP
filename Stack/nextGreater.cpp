#include<iostream>
#include<vector>
#include<stack>

using namespace std;
void nextGreater(vector<int>& arr,vector<int>& ans){
    stack<int> st;
    int n = arr.size();
    st.push(arr[n - 1]);
    ans[n-1] = -1;
    for(int i = n - 2; i>=0 ; i--){
        while(!st.empty() && st.top() <= arr[i]){
            st.pop();
        }
        if(st.empty()){
            ans[i] = -1;
        }
        else{
            ans[i] = st.top();
        }
        st.push(arr[i]);
    }
}
int main(){
    vector<int> arr = {6,8,0,1,3};
    int n = arr.size();
    vector<int> ans(n);
    nextGreater(arr,ans);
    for(int i = 0;i<n;i++){
        cout << ans[i] << " ";
    }
    cout << endl;
    return 0;
}