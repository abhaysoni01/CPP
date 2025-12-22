#include<iostream>
using namespace std;
void waterTapped(int *arr,int n){
    int leftMax[2000],rightMax[2000];
    leftMax[0] = arr[0];
    rightMax[0] = arr[n-1];
    for(int i =1;i<n;i++){
        leftMax[i] = max(leftMax[i-1],arr[i-1]);
    }
    for(int i = n-2;i>=0;i--){
        rightMax[i]=max(arr[i+1],rightMax[i+1]);
    }
    int tapMax = 0;
    int curr = 0;
    for(int i = 0;i<n;i++){
        curr = min(rightMax[i],leftMax[i]) - arr[i];
        if(curr > 0) tapMax+=curr;
    }
    cout<<"MaX water stored is "<<tapMax<<endl;

}
int main(){
    int arr[] = {4,2,0,6,3,2,5};
    int n = sizeof(arr)/sizeof(int);
    waterTapped(arr,n);

}