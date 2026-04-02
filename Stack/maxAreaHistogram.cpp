#include<iostream>
#include<stack>
#include<vector>

using namespace std;
int maxArea(vector<int>& height){
    int n = height.size();
    vector<int> leftMin(n);
    vector<int> rightMin(n);
    leftMin[0] = -1;
    stack<int> st;
    st.push(0);
    for(int i = 1;i<n;i++){
        while(!st.empty() && height[st.top()] >= height[i]){
            st.pop();
        }
        if(st.empty()){
            leftMin[i] = -1;
        }
        else{
            leftMin[i] = st.top();
        }
        st.push(i);
    }
    while(!st.empty()){
        st.pop();
    }
    rightMin[n-1] = n;
    st.push(n-1);
    for(int i = n-2; i >= 0; i--){
        while(!st.empty() && height[st.top()] >= height[i]){
            st.pop();
        }
        if(st.empty()){
            rightMin[i] = n;
        }
        else{
            rightMin[i] = st.top();
        }
        st.push(i);
    }
    int maxArea = 0;
    for(int i = 0;i<n;i++){
        int area = height[i] * (rightMin[i] - leftMin[i] - 1);
        maxArea = max(maxArea,area);
    }
    return maxArea;
}

int main(){
    vector<int> height = {2,5,6,2,3};
    cout << "Max area: "<<maxArea(height) <<endl;
    vector<int> t = {3, 5, 1, 7, 5, 9};
    cout << "Max area: "<<maxArea(t) <<endl;
    return 0;
}