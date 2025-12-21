#include<iostream>
using namespace std;
void subArray(int *arr,int n){
    for(int i =0;i<n;i++){
        for(int j = i ;j<n;j++){
            for(int k = i;k<=j;k++)
            cout<<arr[k];
            cout<<" ";
        }
        cout<<endl;
    }
}
int maxSubarrary(int arr[],int n){
    int maxi = INT32_MIN;
    for(int i=0;i<n;i++){
        int currentSum = 0;
        for(int j = i;j<n;j++){
            currentSum +=arr[j];
            maxi =max(currentSum,maxi);

        }
    }
    return maxi;
}
int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    subArray(arr,n);
    cout<<"max subarray sum is "<<maxSubarrary(arr,n);
    return 0;
    
}