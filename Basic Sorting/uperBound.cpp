#include<iostream>
#include<vector>
using namespace std;

int upperBound(vector<int>& arr,int target){
    int n = arr.size();
    int low =  0,high = n - 1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] > target ){
            ans = mid;
            high = mid - 1;
        }
        else{
            low  = mid + 1;
        }
    }
    return ans;

}
int main(){
    vector<int> arr = {3, 5, 8, 9, 15, 19};  // Sorted input array
    int x = 9; 
    cout << "The upper bound is the index: " << upperBound(arr,x) << "\n";  // Output result
    return 0;
}