#include<iostream>
#include<vector>
using namespace std;
int lowerBound1(vector<int> &arr,int x){
    int n = arr.size();
    int low = 0,high = n -1;
    int ans = n;
    while(low <= high){
        int mid = (low + high)/2;
        if(arr[mid] >= x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid + 1;
        }
    }
    return ans;
}
int main() {
    vector<int> arr = {3, 5, 8, 9, 15, 19};  // Sorted input array
    int n = arr.size();                     // Size of the array
    int x = 9;                              // Target value

    int ind = lowerBound1(arr,x);  // Call method

    cout << "The upper bound is the index: " << ind << "\n";  // Output result
    return 0;
}