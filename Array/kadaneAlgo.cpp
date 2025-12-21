#include<iostream>
using namespace std;
int maxSubarrary(int arr[],int n){
    int maxi = INT32_MIN;
    int currentSum = 0;
    for(int i=0;i<n;i++){
        currentSum += arr[i];
        maxi = max(currentSum,maxi);
        if(currentSum < 0) currentSum = 0;
    }
    return maxi;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    cout<<"max subarray sum is "<<maxSubarrary(arr,n);
    return 0;
    
}